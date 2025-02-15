// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/Decl.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Reference;
class CapturedDecl;
class Decl;
class File;
class ImplicitParamDecl;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT CapturedDecl : public Decl {
 private:
  friend class FragmentImpl;
  friend class Decl;
 public:
  static gap::generator<CapturedDecl> in(const Index &index);
  static gap::generator<CapturedDecl> in(const Fragment &frag);
  static gap::generator<CapturedDecl> in(const File &file);
  static gap::generator<CapturedDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<CapturedDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<CapturedDecl, ir::Operation>> in(const Compilation &tu);
  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::CAPTURED;
  }

  static gap::generator<CapturedDecl> containing(const Decl &decl);
  static gap::generator<CapturedDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<CapturedDecl> containing(const Stmt &stmt);
  static gap::generator<CapturedDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  CapturedDecl canonical_declaration(void) const;
  std::optional<CapturedDecl> definition(void) const;
  gap::generator<CapturedDecl> redeclarations(void) const &;
  static std::optional<CapturedDecl> by_id(const Index &, EntityId);

  static std::optional<CapturedDecl> from_base(const Decl &parent);
  inline static std::optional<CapturedDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<CapturedDecl> from(const std::optional<Decl> &parent);
  static std::optional<CapturedDecl> from(const Reference &r);
  static std::optional<CapturedDecl> from(const VariantEntity &e);
  static std::optional<CapturedDecl> from(const TokenContext &t);

  ImplicitParamDecl context_parameter(void) const;
  uint32_t context_parameter_position(void) const;
  bool is_nothrow(void) const;
  std::optional<ImplicitParamDecl> nth_parameter(unsigned n) const;
  unsigned num_parameters(void) const;
  gap::generator<ImplicitParamDecl> parameters(void) const &;
  gap::generator<Decl> contained_declarations(void) const &;
};

static_assert(sizeof(CapturedDecl) == sizeof(Decl));

#endif
} // namespace mx
