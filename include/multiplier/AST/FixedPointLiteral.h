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
class FixedPointLiteral;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT FixedPointLiteral : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<FixedPointLiteral> in(const Index &index);
  static gap::generator<FixedPointLiteral> in(const Fragment &frag);
  static gap::generator<FixedPointLiteral> in(const File &file);
  static gap::generator<FixedPointLiteral> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<FixedPointLiteral> from(const ir::Operation &op);
  static gap::generator<std::pair<FixedPointLiteral, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::FIXED_POINT_LITERAL;
  }

  static gap::generator<FixedPointLiteral> containing(const Decl &decl);
  static gap::generator<FixedPointLiteral> containing(const std::optional<Decl> &decl);

  static gap::generator<FixedPointLiteral> containing(const Stmt &stmt);
  static gap::generator<FixedPointLiteral> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<FixedPointLiteral> by_id(const Index &, EntityId);

  static std::optional<FixedPointLiteral> from_base(const Stmt &parent);
  inline static std::optional<FixedPointLiteral> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<FixedPointLiteral> from(const std::optional<Stmt> &parent);
  static std::optional<FixedPointLiteral> from(const Reference &r);
  static std::optional<FixedPointLiteral> from(const VariantEntity &e);
  static std::optional<FixedPointLiteral> from(const TokenContext &t);

  Token token(void) const;
  uint32_t scale(void) const;
};

static_assert(sizeof(FixedPointLiteral) == sizeof(Expr));

#endif
} // namespace mx
