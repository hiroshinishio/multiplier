// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/CXXNamedCastExpr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class CXXNamedCastExpr;
class CXXStaticCastExpr;
class CastExpr;
class Decl;
class ExplicitCastExpr;
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
class MX_EXPORT CXXStaticCastExpr : public CXXNamedCastExpr {
 private:
  friend class FragmentImpl;
  friend class CXXNamedCastExpr;
  friend class ExplicitCastExpr;
  friend class CastExpr;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<CXXStaticCastExpr> in(const Index &index);
  static gap::generator<CXXStaticCastExpr> in(const Fragment &frag);
  static gap::generator<CXXStaticCastExpr> in(const File &file);
  static gap::generator<CXXStaticCastExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<CXXStaticCastExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<CXXStaticCastExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::CXX_STATIC_CAST_EXPR;
  }

  static gap::generator<CXXStaticCastExpr> containing(const Decl &decl);
  static gap::generator<CXXStaticCastExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<CXXStaticCastExpr> containing(const Stmt &stmt);
  static gap::generator<CXXStaticCastExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CXXStaticCastExpr> by_id(const Index &, EntityId);

  static std::optional<CXXStaticCastExpr> from_base(const Stmt &parent);
  inline static std::optional<CXXStaticCastExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<CXXStaticCastExpr> from(const std::optional<Stmt> &parent);
  static std::optional<CXXStaticCastExpr> from(const Reference &r);
  static std::optional<CXXStaticCastExpr> from(const VariantEntity &e);
  static std::optional<CXXStaticCastExpr> from(const TokenContext &t);

};

static_assert(sizeof(CXXStaticCastExpr) == sizeof(CXXNamedCastExpr));

#endif
} // namespace mx
