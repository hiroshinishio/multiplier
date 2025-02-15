// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Expr.h>
#include <multiplier/AST/UnaryExprOrTypeTrait.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class Expr;
class File;
class Stmt;
class Token;
class Type;
class UnaryExprOrTypeTraitExpr;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT UnaryExprOrTypeTraitExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<UnaryExprOrTypeTraitExpr> in(const Index &index);
  static gap::generator<UnaryExprOrTypeTraitExpr> in(const Fragment &frag);
  static gap::generator<UnaryExprOrTypeTraitExpr> in(const File &file);
  static gap::generator<UnaryExprOrTypeTraitExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<UnaryExprOrTypeTraitExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<UnaryExprOrTypeTraitExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::UNARY_EXPR_OR_TYPE_TRAIT_EXPR;
  }

  static gap::generator<UnaryExprOrTypeTraitExpr> containing(const Decl &decl);
  static gap::generator<UnaryExprOrTypeTraitExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<UnaryExprOrTypeTraitExpr> containing(const Stmt &stmt);
  static gap::generator<UnaryExprOrTypeTraitExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<UnaryExprOrTypeTraitExpr> by_id(const Index &, EntityId);

  static std::optional<UnaryExprOrTypeTraitExpr> from_base(const Stmt &parent);
  inline static std::optional<UnaryExprOrTypeTraitExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<UnaryExprOrTypeTraitExpr> from(const std::optional<Stmt> &parent);
  static std::optional<UnaryExprOrTypeTraitExpr> from(const Reference &r);
  static std::optional<UnaryExprOrTypeTraitExpr> from(const VariantEntity &e);
  static std::optional<UnaryExprOrTypeTraitExpr> from(const TokenContext &t);

  std::optional<Expr> argument_expression(void) const;
  std::optional<Type> argument_type(void) const;
  UnaryExprOrTypeTrait keyword_kind(void) const;
  Token operator_token(void) const;
  Token r_paren_token(void) const;
  Type type_of_argument(void) const;
  bool is_argument_type(void) const;
};

static_assert(sizeof(UnaryExprOrTypeTraitExpr) == sizeof(Expr));

#endif
} // namespace mx
