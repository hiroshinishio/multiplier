// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/CastExpr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class CastExpr;
class Decl;
class Expr;
class File;
class ImplicitCastExpr;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ImplicitCastExpr : public CastExpr {
 private:
  friend class FragmentImpl;
  friend class CastExpr;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<ImplicitCastExpr> in(const Index &index);
  static gap::generator<ImplicitCastExpr> in(const Fragment &frag);
  static gap::generator<ImplicitCastExpr> in(const File &file);
  static gap::generator<ImplicitCastExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ImplicitCastExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<ImplicitCastExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::IMPLICIT_CAST_EXPR;
  }

  static gap::generator<ImplicitCastExpr> containing(const Decl &decl);
  static gap::generator<ImplicitCastExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<ImplicitCastExpr> containing(const Stmt &stmt);
  static gap::generator<ImplicitCastExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<ImplicitCastExpr> by_id(const Index &, EntityId);

  static std::optional<ImplicitCastExpr> from_base(const Stmt &parent);
  inline static std::optional<ImplicitCastExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<ImplicitCastExpr> from(const std::optional<Stmt> &parent);
  static std::optional<ImplicitCastExpr> from(const Reference &r);
  static std::optional<ImplicitCastExpr> from(const VariantEntity &e);
  static std::optional<ImplicitCastExpr> from(const TokenContext &t);

  bool is_part_of_explicit_cast(void) const;
};

static_assert(sizeof(ImplicitCastExpr) == sizeof(CastExpr));

#endif
} // namespace mx
