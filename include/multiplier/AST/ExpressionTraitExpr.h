// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Expr.h>
#include <multiplier/AST/ExpressionTrait.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class Expr;
class ExpressionTraitExpr;
class File;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ExpressionTraitExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<ExpressionTraitExpr> in(const Index &index);
  static gap::generator<ExpressionTraitExpr> in(const Fragment &frag);
  static gap::generator<ExpressionTraitExpr> in(const File &file);
  static gap::generator<ExpressionTraitExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ExpressionTraitExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<ExpressionTraitExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::EXPRESSION_TRAIT_EXPR;
  }

  static gap::generator<ExpressionTraitExpr> containing(const Decl &decl);
  static gap::generator<ExpressionTraitExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<ExpressionTraitExpr> containing(const Stmt &stmt);
  static gap::generator<ExpressionTraitExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<ExpressionTraitExpr> by_id(const Index &, EntityId);

  static std::optional<ExpressionTraitExpr> from_base(const Stmt &parent);
  inline static std::optional<ExpressionTraitExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<ExpressionTraitExpr> from(const std::optional<Stmt> &parent);
  static std::optional<ExpressionTraitExpr> from(const Reference &r);
  static std::optional<ExpressionTraitExpr> from(const VariantEntity &e);
  static std::optional<ExpressionTraitExpr> from(const TokenContext &t);

  Expr queried_expression(void) const;
  ExpressionTrait trait(void) const;
  bool value(void) const;
};

static_assert(sizeof(ExpressionTraitExpr) == sizeof(Expr));

#endif
} // namespace mx
