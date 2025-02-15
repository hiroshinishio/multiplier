// Copyright (c) 2019-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include "NameMangler.h"

#include <glog/logging.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbitfield-enum-conversion"
#pragma clang diagnostic ignored "-Wimplicit-int-conversion"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wold-style-cast"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wshadow"
#pragma clang diagnostic ignored "-Wcast-align"
#include <clang/AST/Attr.h>
#include <clang/AST/Decl.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/DeclObjC.h>
#include <clang/AST/DeclTemplate.h>
#include <clang/AST/Mangle.h>
#include <clang/AST/ODRHash.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Index/IndexSymbol.h>
#include <llvm/ADT/SmallString.h>
#include <llvm/Support/Casting.h>
#include <llvm/Support/raw_ostream.h>
#pragma clang diagnostic pop

#include <pasta/AST/AST.h>
#include <pasta/AST/Decl.h>
#include <pasta/Util/File.h>

#include "Util.h"

namespace indexer {
namespace {

static const std::string kEmpty;

static clang::FunctionDecl *WalkUpToFunction(const clang::Decl *decl);

static clang::FunctionDecl *WalkUpToFunction(const clang::DeclContext *dc) {
  while (dc) {
    auto dc_decl = clang::Decl::castFromDeclContext(dc);
    if (auto func = clang::dyn_cast<clang::FunctionDecl>(dc_decl)) {
      return func;
    } else if (clang::isa<clang::TagDecl>(dc_decl)) {
      return nullptr;
    } else {
      dc = dc->getParent();
    }
  }
  return nullptr;
}

clang::FunctionDecl *WalkUpToFunction(const clang::Decl *decl) {
  return WalkUpToFunction(decl->getDeclContext());
}

}  // namespace

// Convenience class for easily mangling named decls into `std::string`s.
class NameManglerImpl {
 public:
  const uint64_t tu;
  std::string mangled_name;
  const std::string dummy_mangled_name;
  llvm::raw_string_ostream mangled_name_os;
  std::unique_ptr<clang::MangleContext> mangle_context;
  bool is_precise{false};

  std::unordered_map<const clang::NamedDecl *, std::string>
      cached_mangled_names;

  explicit NameManglerImpl(clang::ASTContext &ast_context_,
                           mx::PackedCompilationId tu_id_);

  // Returns the mangled name of `decl`.
  //
  // NOTE(pag): The same string reference is returned upon each call.
  const std::string &GetMangledName(const clang::NamedDecl *decl);

  const std::string &GetMangledNameRec(const clang::FunctionDecl *decl);
  const std::string &GetMangledNameRec(const clang::BlockDecl *decl);
  const std::string &GetMangledNameRec(const clang::ObjCMethodDecl *decl);
  const std::string &GetMangledNameRec(const clang::FieldDecl *decl);
  const std::string &GetMangledNameRec(const clang::ParmVarDecl *decl);
  const std::string &GetMangledNameRec(const clang::ImplicitParamDecl *decl);
  const std::string &GetMangledNameRec(const clang::VarDecl *decl);
  const std::string &GetMangledNameRec(const clang::EnumConstantDecl *decl);
  const std::string &GetMangledNameImpl(const clang::NamedDecl *decl,
                                        bool force=false);

  NameManglerImpl(void) = delete;
};

NameManglerImpl::NameManglerImpl(clang::ASTContext &ast_context_,
                                 mx::PackedCompilationId tu_id_)
    : tu(tu_id_.Pack()),
      mangled_name_os(mangled_name),
      mangle_context(ast_context_.createMangleContext()) {

  mangled_name.reserve(4096);
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::FunctionDecl *decl) {

  // The clang name-magling fails for deduction guide. if the decl is
  // CXXDeductionGuideDecl then return empty.
  if (decl->getDeclKind() == clang::Decl::Kind::CXXDeductionGuide) {
    is_precise = false;
    return mangled_name;
  }

  if (auto *alias_attr = decl->getAttr<clang::AliasAttr>()) {
    const auto alias_name = alias_attr->getAliasee();
    mangled_name.assign(alias_name.data(), alias_name.size());
    if (!mangled_name.empty()) {
      return mangled_name;
    }
  }

  // If the return type is dependent or undeduced then ignore.
  auto rt = decl->getReturnType();
  if (rt->isDependentType() ||
      rt->isUndeducedType() ||
      rt->isUndeducedAutoType()) {
    is_precise = false;
    return mangled_name;
  }

  // If the parameter types are undeduced then ignore.
  for (auto param : decl->parameters()) {
    auto pt = param->getType();
    if (pt->isDependentType() ||
        pt->isUndeducedType() ||
        pt->isUndeducedAutoType()) {
      is_precise = false;
      return mangled_name;
    }
  }

  (void) GetMangledNameImpl(decl);

  if (mangled_name.empty()) {
    if (auto ident_info = decl->getIdentifier()) {
      auto func_type = decl->getType()->castAs<clang::FunctionType>();
      if (func_type->getCallConv() == clang::CC_X86RegCall) {
        mangled_name_os << "__regcall3__";
      }
      mangled_name_os << ident_info->getName();
      mangled_name_os.flush();
    }
  }

  // Static functions, including inline static functions in headers,
  // should be uniqued.
  if (!decl->isExternallyVisible()) {
 
    auto func_def = decl->getDefinition();
    if (!func_def) {
      func_def = decl;
      is_precise = false;

    // TODO(pag): Ideally want this to be the file containing the declaration.
    } else {
      mangled_name_os << " tu:" << tu;
    }

    auto hash = const_cast<clang::FunctionDecl *>(func_def)->getODRHash();
    mangled_name_os << " odr:" << hash;
    mangled_name_os.flush();

  // Projects with multiple `main` functions should have each of them
  // distinguished.
  } else if (auto ident_info = decl->getIdentifier()) {
    auto is_main = llvm::StringSwitch<bool>(ident_info->getName())
        .Cases("main",     // an ANSI console app
               "wmain",    // a Unicode console App
               "WinMain",  // an ANSI GUI app
               "wWinMain", // a Unicode GUI app
               "DllMain",  // a DLL
               true)
        .Default(false);
    if (!mangled_name.empty() && is_main) {
      mangled_name_os << " tu:" << tu;
      mangled_name_os.flush();
    }
  }

  return mangled_name;
}

// NOTE(pag): Blocks don't have names, so from the perspective of finding
//            redeclarations, we don't want blocks to participate in the
//            process of linking against one-another.
const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::BlockDecl *) {
  return kEmpty;
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::ObjCMethodDecl *decl) {

  (void) GetMangledNameImpl(decl);

  if (!decl->isExternallyVisible() && decl->isDefined()) {
    mangled_name_os << " tu:" << tu;
    mangled_name_os.flush();
  }

  return mangled_name;
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::FieldDecl *decl) {
  
  // If the type is dependent or undeduced then ignore.
  auto rt = decl->getType();
  if (rt->isDependentType() ||
      rt->isUndeducedType() ||
      rt->isUndeducedAutoType()) {
    is_precise = false;
    return mangled_name;
  }

  if (!GetMangledNameImpl(decl->getParent()).empty()) {
    const auto name = decl->getName();
    if (name.empty()) {
      mangled_name_os
          << " field:" << decl->getFieldIndex();
    } else {
      mangled_name_os
          << " field:" << name;
    }
    mangled_name_os.flush();
  }
  return mangled_name;
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::ImplicitParamDecl *decl) {

  auto parent_decl = clang::Decl::castFromDeclContext(decl->getDeclContext());
  auto func_decl = clang::dyn_cast<clang::FunctionDecl>(parent_decl);
  if (!GetMangledNameRec(func_decl).empty()) {
    switch (decl->getParameterKind()) {
      case clang::ImplicitParamKind::ObjCSelf:
        mangled_name_os << " implicit:self";
        break;
      case clang::ImplicitParamKind::ObjCCmd:
        mangled_name_os << " implicit:_cmd";
        break;
      case clang::ImplicitParamKind::CXXThis:
        mangled_name_os << " implicit:this";
        break;
      case clang::ImplicitParamKind::CXXVTT:
        mangled_name_os << " implicit:vtt";
        break;
      case clang::ImplicitParamKind::ThreadPrivateVar:
        mangled_name_os << " implicit:tpv";
        break;
      case clang::ImplicitParamKind::CapturedContext:
      case clang::ImplicitParamKind::Other:
        mangled_name_os << " implicit:other";
        break;
    }
    mangled_name_os.flush();
  }
  return mangled_name;
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::ParmVarDecl *decl) {

  if (decl->getParentFunctionOrMethod() == nullptr) {
    is_precise = false;
    return mangled_name;
  }

  const clang::Decl *parent_decl = clang::Decl::castFromDeclContext(
      decl->getParentFunctionOrMethod());

  if (auto func_decl = clang::dyn_cast<clang::FunctionDecl>(parent_decl)) {
    if (!GetMangledNameRec(func_decl).empty()) {
      mangled_name_os
          << " param:" << decl->getFunctionScopeIndex();
      mangled_name_os.flush();
    }
  } else if (auto block_decl = clang::dyn_cast<clang::BlockDecl>(parent_decl)) {
    if (!GetMangledNameRec(block_decl).empty()) {
      mangled_name_os
          << " param:" << decl->getFunctionScopeIndex();
      mangled_name_os.flush();
    }
  } else if (auto meth_decl = clang::dyn_cast<clang::ObjCMethodDecl>(parent_decl)) {
    if (!GetMangledNameRec(meth_decl).empty()) {
      mangled_name_os
          << " param:" << decl->getFunctionScopeIndex();
      mangled_name_os.flush();
    }
  } else {
    assert(false);
    LOG(ERROR) << "Unhandled ParmVarDecl context in name mangler: "
               << parent_decl->getDeclKindName();
    return kEmpty;
  }
  return mangled_name;
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::VarDecl *decl) {

  auto pt = decl->getType();
  if (pt->isDependentType() ||
      pt->isUndeducedType() ||
      pt->isUndeducedAutoType()) {
    is_precise = false;
    return mangled_name;
  }

  if (auto param_decl = clang::dyn_cast<clang::ParmVarDecl>(decl)) {
    return GetMangledNameRec(param_decl);

  } else if (auto impl_decl = clang::dyn_cast<clang::ImplicitParamDecl>(decl)) {
    return GetMangledNameRec(impl_decl);

  } else if (decl->isCXXClassMember()) {
    return GetMangledNameImpl(decl);

  } else {
    if (auto func_decl = WalkUpToFunction(decl)) {
      if (!GetMangledNameRec(func_decl).empty()) {
        mangled_name_os << " var:" << decl->getName();
        mangled_name_os.flush();
      }

      return mangled_name;

    } else {
      return GetMangledNameImpl(decl, decl->hasGlobalStorage());
    }
  }
}

const std::string &NameManglerImpl::GetMangledNameRec(
    const clang::EnumConstantDecl *decl) {
  auto enum_decl = clang::dyn_cast<clang::EnumDecl>(
      clang::Decl::castFromDeclContext(decl->getDeclContext()));
  if (enum_decl && !GetMangledName(enum_decl).empty()) {
    mangled_name_os.flush();
    mangled_name_os << " enumerator:" << decl->getName() << " value:"
                    << decl->getInitVal();
    mangled_name_os.flush();
  }
  return mangled_name;
}

const std::string &NameManglerImpl::GetMangledNameImpl(
    const clang::NamedDecl *decl, bool force) {

  // Sometimes C structures, compiled in C++ mode, show up as CXXRecordDecls,
  // and we don't want to mangle them, otherwise we might end up with one
  // unmangled version compiled in a C context, and another mangled version
  // compiled in a C++ context.
  if (clang::isa<clang::TagDecl>(decl)) {
    return mangled_name;
  }

  auto should_mangle = mangle_context->shouldMangleDeclName(decl);
  if (!should_mangle && !force) {
    return mangled_name;
  }

  clang::index::SymbolInfo info = clang::index::getSymbolInfo(decl);
  bool is_cxx_name = info.Lang == clang::index::SymbolLanguage::CXX &&
                     clang::isa<clang::FunctionDecl, clang::VarDecl,
                                clang::TemplateParamObjectDecl>(decl);

  if (should_mangle) {
    if (auto type_decl = clang::dyn_cast<clang::TypeDecl>(decl)) {
      if (auto type = type_decl->getTypeForDecl()) {
        clang::QualType qual_type(type, 0);
        mangle_context->mangleCanonicalTypeName(qual_type, mangled_name_os);

      } else if (is_cxx_name) {
        clang::GlobalDecl gd(decl);
        mangle_context->mangleCXXName(decl, mangled_name_os);

      } else {
        mangle_context->mangleName(decl, mangled_name_os);
      }

    // TODO(pag): Not sure how Clang actually derives the proper `CXXCtorType`
    //            and `CXXDtorType`.
    } else if (auto *cst = clang::dyn_cast<clang::CXXConstructorDecl>(decl)) {
      clang::GlobalDecl gd(cst, clang::Ctor_Complete);
      mangle_context->mangleCXXName(gd, mangled_name_os);

    } else if (auto *dst = clang::dyn_cast<clang::CXXDestructorDecl>(decl)) {
      clang::GlobalDecl gd(dst, clang::Dtor_Complete);
      mangle_context->mangleCXXName(gd, mangled_name_os);

    } else if (is_cxx_name) {
      clang::GlobalDecl gd(decl);
      mangle_context->mangleCXXName(decl, mangled_name_os);

    // TODO(pag): Handle CUDA-attributed function decls.

    } else {
      clang::GlobalDecl gd(decl);
      mangle_context->mangleName(gd, mangled_name_os);
    }
    mangled_name_os.flush();

  } else if (is_cxx_name) {

    // TODO(pag): Figure out what to do here.
    // assert(false);
    decl->printQualifiedName(mangled_name_os);
    mangled_name_os << " kind:" << decl->getDeclKindName();
    mangled_name_os.flush();

  } else {
    decl->printName(mangled_name_os);
    mangled_name_os << " kind:" << decl->getDeclKindName();
    mangled_name_os.flush();
  }

  return mangled_name;
}

// Returns the mangled name of `decl`.
//
// NOTE(pag): The same string reference is returned upon each call.
//
// XREF(pag): `getMangledNameImpl` in `clang/lib/CodeGen/CodeGenModule.cpp`.
const std::string &NameManglerImpl::GetMangledName(
    const clang::NamedDecl *decl) {
  mangled_name.clear();
  is_precise = true;

  if (!decl) {
    is_precise = false;
    return mangled_name;

  // Mangle functions with an `__attribute__((alias("...")))` to use the
  // `...` as their mangled name, because that is really what gets called.
  } else if (auto func_decl = clang::dyn_cast<clang::FunctionDecl>(decl)) {
    return GetMangledNameRec(func_decl);

  } else if (auto block_decl = clang::dyn_cast<clang::BlockDecl>(decl)) {
    return GetMangledNameRec(block_decl);

  } else if (auto meth_decl = clang::dyn_cast<clang::ObjCMethodDecl>(decl)) {
    return GetMangledNameRec(meth_decl);

  // Handle fields in terms of the mangled name of their struct/union/class
  // whatever.
  } else if (auto field_decl = clang::dyn_cast<clang::FieldDecl>(decl)) {
    return GetMangledNameRec(field_decl);

  // Definition and declarations of the same function can have different
  // parameter names, so we really don't want the name itself to be significant.
  // Rather, we want the mangling of the parameter name to be the mangling of
  // the function, followed by something like `arg N`.
  } else if (auto var_decl = clang::dyn_cast<clang::VarDecl>(decl)) {

    // Parameters can be redeclared.
    if (auto parm_var_decl = clang::dyn_cast<clang::ParmVarDecl>(var_decl)) {
      return GetMangledNameRec(parm_var_decl);

    // Since function local variables can't be redeclared, we don't have to
    // worry about giving them a mangled name.
    } else if (var_decl->hasLocalStorage() || var_decl->isStaticLocal()) {
      return mangled_name;
    }

    if (!GetMangledNameRec(var_decl).empty() &&
        !var_decl->isExternallyVisible()) {
      mangled_name_os << " tu:" << tu;
      mangled_name_os.flush();
    }

    return mangled_name;

  } else if (auto enumerator_decl = \
                 clang::dyn_cast<clang::EnumConstantDecl>(decl)) {
    return GetMangledNameRec(enumerator_decl);

  } else if (auto using_decl = clang::dyn_cast<clang::UsingDecl>(decl)) {
    for (auto shadow : using_decl->shadows()) {
      if (auto used_decl = shadow->getTargetDecl()) {
        if (used_decl != using_decl) {
          (void) GetMangledName(used_decl);
          if (!mangled_name.empty()) {
            break;
          }
        }
      }
    }
    return mangled_name;

  } else if (auto using_shadow = clang::dyn_cast<clang::UsingShadowDecl>(decl)) {
    if (auto used_decl = using_shadow->getTargetDecl()) {
      if (used_decl != decl) {
        if (used_decl != using_decl) {
          (void) GetMangledName(used_decl);
        }
      }
    }
    return mangled_name;

  // TODO(pag): Maybe handle these specially.
  } else if (clang::isa<clang::TypedefNameDecl>(decl) ||
             clang::isa<clang::UsingDirectiveDecl>(decl) ||
             clang::isa<clang::UsingPackDecl>(decl)) {
    is_precise = false;
    return mangled_name;  // No mangled name.

  } else {
    return GetMangledNameImpl(decl);
  }
}

NameMangler::~NameMangler(void) {}

NameMangler::NameMangler(const pasta::AST &ast, mx::PackedCompilationId tu_id_)
    : impl(std::make_unique<NameManglerImpl>(ast.UnderlyingAST(), tu_id_)) {}

const std::string &NameMangler::Mangle(const clang::Decl *decl) const {
  auto named_decl = clang::dyn_cast_or_null<clang::NamedDecl>(decl);
  if (!named_decl) {
    return impl->dummy_mangled_name;
  }

  auto it = impl->cached_mangled_names.find(named_decl);
  if (it != impl->cached_mangled_names.end()) {
    return it->second;
  }

  auto &cached_name = impl->cached_mangled_names[named_decl];
  auto &mangled_name = impl->GetMangledName(named_decl);
  if (mangled_name.empty() || !impl->is_precise) {
    return impl->dummy_mangled_name;
  }

  cached_name.insert(cached_name.end(), mangled_name.begin(),
                     mangled_name.end());
  return cached_name;
}

}  // namespace indexer
