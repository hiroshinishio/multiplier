// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/CXXRecordDecl.h>
#include <multiplier/AST/TemplateSpecializationKind.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Reference;
class CXXRecordDecl;
class ClassTemplateDecl;
class ClassTemplateSpecializationDecl;
class Decl;
class File;
class NamedDecl;
class RecordDecl;
class Stmt;
class TagDecl;
class TemplateArgument;
class Token;
class TypeDecl;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ClassTemplateSpecializationDecl : public CXXRecordDecl {
 private:
  friend class FragmentImpl;
  friend class CXXRecordDecl;
  friend class RecordDecl;
  friend class TagDecl;
  friend class TypeDecl;
  friend class NamedDecl;
  friend class Decl;
 public:
  static gap::generator<ClassTemplateSpecializationDecl> in(const Index &index);
  static gap::generator<ClassTemplateSpecializationDecl> in(const Fragment &frag);
  static gap::generator<ClassTemplateSpecializationDecl> in(const File &file);
  static gap::generator<ClassTemplateSpecializationDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ClassTemplateSpecializationDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<ClassTemplateSpecializationDecl, ir::Operation>> in(const Compilation &tu);
  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::CLASS_TEMPLATE_SPECIALIZATION;
  }

  static gap::generator<ClassTemplateSpecializationDecl> containing(const Decl &decl);
  static gap::generator<ClassTemplateSpecializationDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<ClassTemplateSpecializationDecl> containing(const Stmt &stmt);
  static gap::generator<ClassTemplateSpecializationDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  ClassTemplateSpecializationDecl canonical_declaration(void) const;
  std::optional<ClassTemplateSpecializationDecl> definition(void) const;
  gap::generator<ClassTemplateSpecializationDecl> redeclarations(void) const &;
  static std::optional<ClassTemplateSpecializationDecl> by_id(const Index &, EntityId);

  static std::optional<ClassTemplateSpecializationDecl> from_base(const Decl &parent);
  inline static std::optional<ClassTemplateSpecializationDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<ClassTemplateSpecializationDecl> from(const std::optional<Decl> &parent);
  static std::optional<ClassTemplateSpecializationDecl> from(const Reference &r);
  static std::optional<ClassTemplateSpecializationDecl> from(const VariantEntity &e);
  static std::optional<ClassTemplateSpecializationDecl> from(const TokenContext &t);

  Token extern_token(void) const;
  TemplateSpecializationKind specialization_kind(void) const;
  ClassTemplateDecl specialized_template(void) const;
  std::optional<TemplateArgument> nth_template_argument(unsigned n) const;
  unsigned num_template_arguments(void) const;
  gap::generator<TemplateArgument> template_arguments(void) const &;
  Token template_keyword_token(void) const;
  bool is_class_scope_explicit_specialization(void) const;
  bool is_explicit_instantiation_or_specialization(void) const;
  bool is_explicit_specialization(void) const;
};

static_assert(sizeof(ClassTemplateSpecializationDecl) == sizeof(CXXRecordDecl));

#endif
} // namespace mx
