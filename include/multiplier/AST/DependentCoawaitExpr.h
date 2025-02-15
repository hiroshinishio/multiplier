// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Expr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class DependentCoawaitExpr;
class Expr;
class File;
class Stmt;
class Token;
class UnresolvedLookupExpr;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT DependentCoawaitExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<DependentCoawaitExpr> in(const Index &index);
  static gap::generator<DependentCoawaitExpr> in(const Fragment &frag);
  static gap::generator<DependentCoawaitExpr> in(const File &file);
  static gap::generator<DependentCoawaitExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<DependentCoawaitExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<DependentCoawaitExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::DEPENDENT_COAWAIT_EXPR;
  }

  static gap::generator<DependentCoawaitExpr> containing(const Decl &decl);
  static gap::generator<DependentCoawaitExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<DependentCoawaitExpr> containing(const Stmt &stmt);
  static gap::generator<DependentCoawaitExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<DependentCoawaitExpr> by_id(const Index &, EntityId);

  static std::optional<DependentCoawaitExpr> from_base(const Stmt &parent);
  inline static std::optional<DependentCoawaitExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<DependentCoawaitExpr> from(const std::optional<Stmt> &parent);
  static std::optional<DependentCoawaitExpr> from(const Reference &r);
  static std::optional<DependentCoawaitExpr> from(const VariantEntity &e);
  static std::optional<DependentCoawaitExpr> from(const TokenContext &t);

  Token keyword_token(void) const;
  Expr operand(void) const;
  UnresolvedLookupExpr operator_coawait_lookup(void) const;
};

static_assert(sizeof(DependentCoawaitExpr) == sizeof(Expr));

#endif
} // namespace mx
