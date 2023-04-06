// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/VarTemplateDecl.h>

#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/NamedDecl.h>
#include <multiplier/Entities/RedeclarableTemplateDecl.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/TemplateDecl.h>
#include <multiplier/Entities/Token.h>

#include "../API.h"
#include "../Decl.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<VarTemplateDecl> VarTemplateDecl::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = VarTemplateDecl::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool VarTemplateDecl::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : VarTemplateDecl::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<VarTemplateDecl> VarTemplateDecl::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = VarTemplateDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = VarTemplateDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool VarTemplateDecl::contains(const Decl &decl) {
  for (auto &parent : VarTemplateDecl::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool VarTemplateDecl::contains(const Stmt &stmt) {
  for (auto &parent : VarTemplateDecl::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

VarTemplateDecl VarTemplateDecl::canonical_declaration(void) const {
  if (auto canon = VarTemplateDecl::from(this->Decl::canonical_declaration())) {
    return std::move(canon.value());
  }
  for (VarTemplateDecl redecl : redeclarations()) {
    return redecl;
  }
  __builtin_unreachable();
}

std::optional<VarTemplateDecl> VarTemplateDecl::definition(void) const {
  return VarTemplateDecl::from(this->Decl::definition());
}

gap::generator<VarTemplateDecl> VarTemplateDecl::redeclarations(void) const & {
  for (Decl r : Decl::redeclarations()) {
    if (std::optional<VarTemplateDecl> dr = VarTemplateDecl::from(r)) {
      co_yield std::move(dr.value());
      continue;
    }
    assert(false);
  // Wrong type?
  }
  co_return;
}

std::optional<VarTemplateDecl> VarTemplateDecl::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<DeclId>(vid)) {
    return VarTemplateDecl::from(index.declaration(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const DeclKind kVarTemplateDeclDerivedKinds[] = {
    VarTemplateDecl::static_kind(),
};

std::optional<VarTemplateDecl> VarTemplateDecl::from(const Decl &parent) {
  switch (parent.kind()) {
    case VarTemplateDecl::static_kind():
      return reinterpret_cast<const VarTemplateDecl &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (DeclKind k : kVarTemplateDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k)) {
      if (std::optional<VarTemplateDecl> e = VarTemplateDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (DeclKind k : kVarTemplateDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
      if (std::optional<VarTemplateDecl> e = VarTemplateDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<VarTemplateDecl> VarTemplateDecl::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (DeclKind k : kVarTemplateDeclDerivedKinds) {
      for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
        if (std::optional<VarTemplateDecl> e = VarTemplateDecl::from(Decl(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<VarTemplateDecl> VarTemplateDecl::from(const Reference &r) {
  return VarTemplateDecl::from(r.as_declaration());
}

std::optional<VarTemplateDecl> VarTemplateDecl::from(const TokenContext &t) {
  return VarTemplateDecl::from(t.as_declaration());
}

bool VarTemplateDecl::is_this_declaration_a_definition(void) const {
  return impl->reader.getVal75();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
