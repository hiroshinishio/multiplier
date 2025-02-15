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
class ObjCProtocolDecl;
class ObjCProtocolExpr;
class Stmt;
class Token;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ObjCProtocolExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<ObjCProtocolExpr> in(const Index &index);
  static gap::generator<ObjCProtocolExpr> in(const Fragment &frag);
  static gap::generator<ObjCProtocolExpr> in(const File &file);
  static gap::generator<ObjCProtocolExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ObjCProtocolExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<ObjCProtocolExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OBJ_C_PROTOCOL_EXPR;
  }

  static gap::generator<ObjCProtocolExpr> containing(const Decl &decl);
  static gap::generator<ObjCProtocolExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<ObjCProtocolExpr> containing(const Stmt &stmt);
  static gap::generator<ObjCProtocolExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<ObjCProtocolExpr> by_id(const Index &, EntityId);

  static std::optional<ObjCProtocolExpr> from_base(const Stmt &parent);
  inline static std::optional<ObjCProtocolExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<ObjCProtocolExpr> from(const std::optional<Stmt> &parent);
  static std::optional<ObjCProtocolExpr> from(const Reference &r);
  static std::optional<ObjCProtocolExpr> from(const VariantEntity &e);
  static std::optional<ObjCProtocolExpr> from(const TokenContext &t);

  Token at_token(void) const;
  ObjCProtocolDecl protocol(void) const;
  Token protocol_id_token(void) const;
  Token r_paren_token(void) const;
};

static_assert(sizeof(ObjCProtocolExpr) == sizeof(Expr));

#endif
} // namespace mx
