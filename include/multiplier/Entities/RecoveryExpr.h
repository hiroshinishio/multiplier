// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "Expr.h"

namespace mx {
class EntityProvider;
class Index;
class Decl;
class Expr;
class RecoveryExpr;
class Stmt;
class Token;
class ValueStmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class RecoveryExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<RecoveryExpr> in(const Fragment &frag);
  static gap::generator<RecoveryExpr> in(const File &file);
  static gap::generator<RecoveryExpr> in(const Index &index);
  static gap::generator<RecoveryExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<RecoveryExpr> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::RECOVERY_EXPR;
  }

  static gap::generator<RecoveryExpr> containing(const Decl &decl);
  static gap::generator<RecoveryExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<RecoveryExpr> containing(const Stmt &stmt);
  static gap::generator<RecoveryExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<RecoveryExpr> from(const Stmt &parent);

  inline static std::optional<RecoveryExpr> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return RecoveryExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<RecoveryExpr> from(const Reference &r);
  static std::optional<RecoveryExpr> from(const TokenContext &t);

  std::optional<Expr> nth_sub_expression(unsigned n) const;
  unsigned num_sub_expressions(void) const;
  gap::generator<Expr> sub_expressions(void) const &;
};

static_assert(sizeof(RecoveryExpr) == sizeof(Expr));

#endif
} // namespace mx
