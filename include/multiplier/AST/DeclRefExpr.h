// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Expr.h>
#include <multiplier/AST/NonOdrUseReason.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class DeclRefExpr;
class Expr;
class File;
class Stmt;
class Token;
class ValueDecl;
class ValueStmt;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT DeclRefExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<DeclRefExpr> in(const Index &index);
  static gap::generator<DeclRefExpr> in(const Fragment &frag);
  static gap::generator<DeclRefExpr> in(const File &file);
  static gap::generator<DeclRefExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<DeclRefExpr> from(const ir::Operation &op);
  static gap::generator<std::pair<DeclRefExpr, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::DECL_REF_EXPR;
  }

  static gap::generator<DeclRefExpr> containing(const Decl &decl);
  static gap::generator<DeclRefExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<DeclRefExpr> containing(const Stmt &stmt);
  static gap::generator<DeclRefExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<DeclRefExpr> by_id(const Index &, EntityId);

  static std::optional<DeclRefExpr> from_base(const Stmt &parent);
  inline static std::optional<DeclRefExpr> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<DeclRefExpr> from(const std::optional<Stmt> &parent);
  static std::optional<DeclRefExpr> from(const Reference &r);
  static std::optional<DeclRefExpr> from(const VariantEntity &e);
  static std::optional<DeclRefExpr> from(const TokenContext &t);

  ValueDecl declaration(void) const;
  Token l_angle_token(void) const;
  Token r_angle_token(void) const;
  Token template_keyword_token(void) const;
  bool had_multiple_candidates(void) const;
  bool has_explicit_template_arguments(void) const;
  bool has_qualifier(void) const;
  bool is_captured_by_copy_in_lambda_with_explicit_object_parameter(void) const;
  bool is_immediate_escalating(void) const;
  NonOdrUseReason is_non_odr_use(void) const;
  bool refers_to_enclosing_variable_or_capture(void) const;
};

static_assert(sizeof(DeclRefExpr) == sizeof(Expr));

#endif
} // namespace mx
