// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Decl.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Reference;
class BlockDecl;
class CompoundStmt;
class Decl;
class File;
class ParmVarDecl;
class Stmt;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT BlockDecl : public Decl {
 private:
  friend class FragmentImpl;
  friend class Decl;
 public:
  static gap::generator<BlockDecl> in(const Index &index);
  static gap::generator<BlockDecl> in(const Fragment &frag);
  static gap::generator<BlockDecl> in(const File &file);
  static gap::generator<BlockDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<BlockDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<BlockDecl, ir::Operation>> in(const Compilation &tu);
  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::BLOCK;
  }

  static gap::generator<BlockDecl> containing(const Decl &decl);
  static gap::generator<BlockDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<BlockDecl> containing(const Stmt &stmt);
  static gap::generator<BlockDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  BlockDecl canonical_declaration(void) const;
  std::optional<BlockDecl> definition(void) const;
  gap::generator<BlockDecl> redeclarations(void) const &;
  static std::optional<BlockDecl> by_id(const Index &, EntityId);

  static std::optional<BlockDecl> from_base(const Decl &parent);
  inline static std::optional<BlockDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<BlockDecl> from(const std::optional<Decl> &parent);
  static std::optional<BlockDecl> from(const Reference &r);
  static std::optional<BlockDecl> from(const VariantEntity &e);
  static std::optional<BlockDecl> from(const TokenContext &t);

  bool block_missing_return_type(void) const;
  bool can_avoid_copy_to_heap(void) const;
  bool captures_cxx_this(void) const;
  bool does_not_escape(void) const;
  std::optional<Decl> block_mangling_context_declaration(void) const;
  uint32_t block_mangling_number(void) const;
  Token caret_token(void) const;
  CompoundStmt compound_body(void) const;
  Type signature_as_written(void) const;
  bool has_captures(void) const;
  bool is_conversion_from_lambda(void) const;
  bool is_variadic(void) const;
  std::optional<ParmVarDecl> nth_parameter(unsigned n) const;
  unsigned num_parameters(void) const;
  gap::generator<ParmVarDecl> parameters(void) const &;
  std::optional<ParmVarDecl> nth_parameter_declaration(unsigned n) const;
  unsigned num_parameter_declarations(void) const;
  gap::generator<ParmVarDecl> parameter_declarations(void) const &;
  gap::generator<Decl> contained_declarations(void) const &;
};

static_assert(sizeof(BlockDecl) == sizeof(Decl));

#endif
} // namespace mx
