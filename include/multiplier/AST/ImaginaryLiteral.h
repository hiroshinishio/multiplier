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
class ImaginaryLiteral;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ImaginaryLiteral : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<ImaginaryLiteral> in(const Index &index);
  static gap::generator<ImaginaryLiteral> in(const Fragment &frag);
  static gap::generator<ImaginaryLiteral> in(const File &file);
  static gap::generator<ImaginaryLiteral> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ImaginaryLiteral> from(const ir::Operation &op);
  static gap::generator<std::pair<ImaginaryLiteral, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::IMAGINARY_LITERAL;
  }

  static gap::generator<ImaginaryLiteral> containing(const Decl &decl);
  static gap::generator<ImaginaryLiteral> containing(const std::optional<Decl> &decl);

  static gap::generator<ImaginaryLiteral> containing(const Stmt &stmt);
  static gap::generator<ImaginaryLiteral> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<ImaginaryLiteral> by_id(const Index &, EntityId);

  static std::optional<ImaginaryLiteral> from_base(const Stmt &parent);
  inline static std::optional<ImaginaryLiteral> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<ImaginaryLiteral> from(const std::optional<Stmt> &parent);
  static std::optional<ImaginaryLiteral> from(const Reference &r);
  static std::optional<ImaginaryLiteral> from(const VariantEntity &e);
  static std::optional<ImaginaryLiteral> from(const TokenContext &t);

  Expr sub_expression(void) const;
};

static_assert(sizeof(ImaginaryLiteral) == sizeof(Expr));

#endif
} // namespace mx
