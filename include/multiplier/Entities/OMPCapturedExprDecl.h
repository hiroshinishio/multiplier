// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>
#include <optional>
#include <span>
#include <vector>

#include <gap/core/generator.hpp>
#include "../Iterator.h"
#include "../Reference.h"
#include "../Types.h"
#include "../Token.h"

#include "DeclKind.h"
#include "VarDecl.h"

namespace mx {
class Decl;
class DeclaratorDecl;
class NamedDecl;
class OMPCapturedExprDecl;
class ValueDecl;
class VarDecl;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class OMPCapturedExprDecl : public VarDecl {
 private:
  friend class FragmentImpl;
  friend class VarDecl;
  friend class DeclaratorDecl;
  friend class ValueDecl;
  friend class NamedDecl;
  friend class Decl;
 public:
  static gap::generator<OMPCapturedExprDecl> in(const Fragment &frag);
  static gap::generator<OMPCapturedExprDecl> in(const File &file);
  static gap::generator<OMPCapturedExprDecl> in(const Index &index);
  static gap::generator<OMPCapturedExprDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<OMPCapturedExprDecl> by_id(const Index &, EntityId);

  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::OMP_CAPTURED_EXPR;
  }

  static gap::generator<OMPCapturedExprDecl> containing(const Decl &decl);
  static gap::generator<OMPCapturedExprDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPCapturedExprDecl> containing(const Stmt &stmt);
  static gap::generator<OMPCapturedExprDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  gap::generator<OMPCapturedExprDecl> redeclarations(void) const &;
  static std::optional<OMPCapturedExprDecl> from(const Decl &parent);

  inline static std::optional<OMPCapturedExprDecl> from(const std::optional<Decl> &parent) {
    if (parent) {
      return OMPCapturedExprDecl::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<OMPCapturedExprDecl> from(const Reference &r) {
    return OMPCapturedExprDecl::from(r.as_declaration());
  }

  inline static std::optional<OMPCapturedExprDecl> from(const TokenContext &t) {
    return OMPCapturedExprDecl::from(t.as_declaration());
  }

};

static_assert(sizeof(OMPCapturedExprDecl) == sizeof(VarDecl));

#endif
} // namespace mx
