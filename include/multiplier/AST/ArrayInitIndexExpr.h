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
class ArrayInitIndexExpr;
class Decl;
class Expr;
class File;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ArrayInitIndexExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<ArrayInitIndexExpr> in(const Index &index);
  static gap::generator<ArrayInitIndexExpr> in(const Fragment &frag);
  static gap::generator<ArrayInitIndexExpr> in(const File &file);
  static gap::generator<ArrayInitIndexExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ArrayInitIndexExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<ArrayInitIndexExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::ARRAY_INIT_INDEX_EXPR;
  }

  static gap::generator<ArrayInitIndexExpr> containing(const Decl &decl);
  static gap::generator<ArrayInitIndexExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<ArrayInitIndexExpr> containing(const Stmt &stmt);
  static gap::generator<ArrayInitIndexExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<ArrayInitIndexExpr> by_id(const Index &, EntityId);

  static std::optional<ArrayInitIndexExpr> from_base(const Stmt &parent);
  inline static std::optional<ArrayInitIndexExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<ArrayInitIndexExpr> from(const std::optional<Stmt> &parent);
  static std::optional<ArrayInitIndexExpr> from(const Reference &r);
  static std::optional<ArrayInitIndexExpr> from(const VariantEntity &e);
  static std::optional<ArrayInitIndexExpr> from(const TokenContext &t);

};

static_assert(sizeof(ArrayInitIndexExpr) == sizeof(Expr));

#endif
} // namespace mx
