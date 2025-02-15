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
class CoroutineSuspendExpr;
class Decl;
class Expr;
class File;
class OpaqueValueExpr;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT CoroutineSuspendExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<CoroutineSuspendExpr> in(const Index &index);
  static gap::generator<CoroutineSuspendExpr> in(const Fragment &frag);
  static gap::generator<CoroutineSuspendExpr> in(const File &file);
  static gap::generator<CoroutineSuspendExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<CoroutineSuspendExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<CoroutineSuspendExpr, ir::Operation>> in(const Compilation &tu);
  static gap::generator<CoroutineSuspendExpr> containing(const Decl &decl);
  static gap::generator<CoroutineSuspendExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<CoroutineSuspendExpr> containing(const Stmt &stmt);
  static gap::generator<CoroutineSuspendExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CoroutineSuspendExpr> by_id(const Index &, EntityId);

  static std::optional<CoroutineSuspendExpr> from_base(const Stmt &parent);
  inline static std::optional<CoroutineSuspendExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<CoroutineSuspendExpr> from(const std::optional<Stmt> &parent);
  static std::optional<CoroutineSuspendExpr> from(const Reference &r);
  static std::optional<CoroutineSuspendExpr> from(const VariantEntity &e);
  static std::optional<CoroutineSuspendExpr> from(const TokenContext &t);

  Expr common_expression(void) const;
  Token keyword_token(void) const;
  OpaqueValueExpr opaque_value(void) const;
  Expr operand(void) const;
  Expr ready_expression(void) const;
  Expr resume_expression(void) const;
  Expr suspend_expression(void) const;
};

static_assert(sizeof(CoroutineSuspendExpr) == sizeof(Expr));

#endif
} // namespace mx
