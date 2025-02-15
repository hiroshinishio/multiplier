// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/TagTypeKind.h>
#include <multiplier/AST/TypeDecl.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Reference;
class Decl;
class File;
class NamedDecl;
class Stmt;
class TagDecl;
class TemplateParameterList;
class Token;
class TokenRange;
class TypeDecl;
class TypedefNameDecl;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT TagDecl : public TypeDecl {
 private:
  friend class FragmentImpl;
  friend class TypeDecl;
  friend class NamedDecl;
  friend class Decl;
 public:
  static gap::generator<TagDecl> in(const Index &index);
  static gap::generator<TagDecl> in(const Fragment &frag);
  static gap::generator<TagDecl> in(const File &file);
  static gap::generator<TagDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<TagDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<TagDecl, ir::Operation>> in(const Compilation &tu);
  static gap::generator<TagDecl> containing(const Decl &decl);
  static gap::generator<TagDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<TagDecl> containing(const Stmt &stmt);
  static gap::generator<TagDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  TagDecl canonical_declaration(void) const;
  std::optional<TagDecl> definition(void) const;
  gap::generator<TagDecl> redeclarations(void) const &;
  static std::optional<TagDecl> by_id(const Index &, EntityId);

  static std::optional<TagDecl> from_base(const Decl &parent);
  inline static std::optional<TagDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<TagDecl> from(const std::optional<Decl> &parent);
  static std::optional<TagDecl> from(const Reference &r);
  static std::optional<TagDecl> from(const VariantEntity &e);
  static std::optional<TagDecl> from(const TokenContext &t);

  TokenRange brace_range(void) const;
  Token first_inner_token(void) const;
  Token first_outer_token(void) const;
  TagTypeKind tag_kind(void) const;
  std::optional<TypedefNameDecl> typedef_name_for_anonymous_declaration(void) const;
  bool has_name_for_linkage(void) const;
  bool is_being_defined(void) const;
  bool is_class(void) const;
  bool is_complete_definition(void) const;
  bool is_complete_definition_required(void) const;
  bool is_dependent_type(void) const;
  bool is_enum(void) const;
  bool is_free_standing(void) const;
  bool is_interface(void) const;
  bool is_struct(void) const;
  bool is_this_declaration_a_definition(void) const;
  bool is_this_declaration_a_demoted_definition(void) const;
  bool is_union(void) const;
  bool may_have_out_of_date_definition(void) const;
  std::optional<TemplateParameterList> nth_template_parameter_list(unsigned n) const;
  unsigned num_template_parameter_lists(void) const;
  gap::generator<TemplateParameterList> template_parameter_lists(void) const &;
  gap::generator<Decl> contained_declarations(void) const &;
};

static_assert(sizeof(TagDecl) == sizeof(TypeDecl));

#endif
} // namespace mx
