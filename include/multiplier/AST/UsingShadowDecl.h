// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/NamedDecl.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class BaseUsingDecl;
class Decl;
class File;
class NamedDecl;
class Stmt;
class Token;
class UsingShadowDecl;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT UsingShadowDecl : public NamedDecl {
 private:
  friend class FragmentImpl;
  friend class NamedDecl;
  friend class Decl;
 public:
  static gap::generator<UsingShadowDecl> in(const Index &index);
  static gap::generator<UsingShadowDecl> in(const Fragment &frag);
  static gap::generator<UsingShadowDecl> in(const File &file);
  static gap::generator<UsingShadowDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<UsingShadowDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<UsingShadowDecl, ir::Operation>> in(const Compilation &tu);
  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::USING_SHADOW;
  }

  static gap::generator<UsingShadowDecl> containing(const Decl &decl);
  static gap::generator<UsingShadowDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<UsingShadowDecl> containing(const Stmt &stmt);
  static gap::generator<UsingShadowDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  UsingShadowDecl canonical_declaration(void) const;
  std::optional<UsingShadowDecl> definition(void) const;
  gap::generator<UsingShadowDecl> redeclarations(void) const &;
  static std::optional<UsingShadowDecl> by_id(const Index &, EntityId);

  static std::optional<UsingShadowDecl> from_base(const Decl &parent);
  inline static std::optional<UsingShadowDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<UsingShadowDecl> from(const std::optional<Decl> &parent);
  static std::optional<UsingShadowDecl> from(const Reference &r);
  static std::optional<UsingShadowDecl> from(const VariantEntity &e);
  static std::optional<UsingShadowDecl> from(const TokenContext &t);

  BaseUsingDecl introducer(void) const;
  std::optional<UsingShadowDecl> next_using_shadow_declaration(void) const;
  NamedDecl target_declaration(void) const;
};

static_assert(sizeof(UsingShadowDecl) == sizeof(NamedDecl));

#endif
} // namespace mx
