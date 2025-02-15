// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Stmt.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class CoreturnStmt;
class Decl;
class Expr;
class File;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT CoreturnStmt : public Stmt {
 private:
  friend class FragmentImpl;
  friend class Stmt;
 public:
  static gap::generator<CoreturnStmt> in(const Index &index);
  static gap::generator<CoreturnStmt> in(const Fragment &frag);
  static gap::generator<CoreturnStmt> in(const File &file);
  static gap::generator<CoreturnStmt> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<CoreturnStmt> from(const ir::Operation &op);
  static gap::generator<std::pair<CoreturnStmt, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::CORETURN_STMT;
  }

  static gap::generator<CoreturnStmt> containing(const Decl &decl);
  static gap::generator<CoreturnStmt> containing(const std::optional<Decl> &decl);

  static gap::generator<CoreturnStmt> containing(const Stmt &stmt);
  static gap::generator<CoreturnStmt> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CoreturnStmt> by_id(const Index &, EntityId);

  static std::optional<CoreturnStmt> from_base(const Stmt &parent);
  inline static std::optional<CoreturnStmt> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<CoreturnStmt> from(const std::optional<Stmt> &parent);
  static std::optional<CoreturnStmt> from(const Reference &r);
  static std::optional<CoreturnStmt> from(const VariantEntity &e);
  static std::optional<CoreturnStmt> from(const TokenContext &t);

  Token keyword_token(void) const;
  std::optional<Expr> operand(void) const;
  Expr promise_call(void) const;
  bool is_implicit(void) const;
};

static_assert(sizeof(CoreturnStmt) == sizeof(Stmt));

#endif
} // namespace mx
