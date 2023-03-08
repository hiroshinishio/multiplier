// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "CallExpr.h"

namespace mx {
class EntityProvider;
class Index;
class CUDAKernelCallExpr;
class CallExpr;
class Decl;
class Expr;
class Stmt;
class Token;
class ValueStmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class CUDAKernelCallExpr : public CallExpr {
 private:
  friend class FragmentImpl;
  friend class CallExpr;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<CUDAKernelCallExpr> in(const Fragment &frag);
  static gap::generator<CUDAKernelCallExpr> in(const File &file);
  static gap::generator<CUDAKernelCallExpr> in(const Index &index);
  static gap::generator<CUDAKernelCallExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<CUDAKernelCallExpr> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::CUDA_KERNEL_CALL_EXPR;
  }

  static gap::generator<CUDAKernelCallExpr> containing(const Decl &decl);
  static gap::generator<CUDAKernelCallExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<CUDAKernelCallExpr> containing(const Stmt &stmt);
  static gap::generator<CUDAKernelCallExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CUDAKernelCallExpr> from(const Stmt &parent);

  inline static std::optional<CUDAKernelCallExpr> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return CUDAKernelCallExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<CUDAKernelCallExpr> from(const Reference &r);
  static std::optional<CUDAKernelCallExpr> from(const TokenContext &t);

  CallExpr config(void) const;
};

static_assert(sizeof(CUDAKernelCallExpr) == sizeof(CallExpr));

#endif
} // namespace mx
