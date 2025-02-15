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
class Expr;
class File;
class NoInitExpr;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT NoInitExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<NoInitExpr> in(const Index &index);
  static gap::generator<NoInitExpr> in(const Fragment &frag);
  static gap::generator<NoInitExpr> in(const File &file);
  static gap::generator<NoInitExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<NoInitExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<NoInitExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::NO_INIT_EXPR;
  }

  static gap::generator<NoInitExpr> containing(const Decl &decl);
  static gap::generator<NoInitExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<NoInitExpr> containing(const Stmt &stmt);
  static gap::generator<NoInitExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<NoInitExpr> by_id(const Index &, EntityId);

  static std::optional<NoInitExpr> from_base(const Stmt &parent);
  inline static std::optional<NoInitExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<NoInitExpr> from(const std::optional<Stmt> &parent);
  static std::optional<NoInitExpr> from(const Reference &r);
  static std::optional<NoInitExpr> from(const VariantEntity &e);
  static std::optional<NoInitExpr> from(const TokenContext &t);

};

static_assert(sizeof(NoInitExpr) == sizeof(Expr));

#endif
} // namespace mx
