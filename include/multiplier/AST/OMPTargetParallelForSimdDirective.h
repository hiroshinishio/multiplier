// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/OMPLoopDirective.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Decl;
class File;
class OMPExecutableDirective;
class OMPLoopBasedDirective;
class OMPLoopDirective;
class OMPTargetParallelForSimdDirective;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT OMPTargetParallelForSimdDirective : public OMPLoopDirective {
 private:
  friend class FragmentImpl;
  friend class OMPLoopDirective;
  friend class OMPLoopBasedDirective;
  friend class OMPExecutableDirective;
  friend class Stmt;
 public:
  static gap::generator<OMPTargetParallelForSimdDirective> in(const Index &index);
  static gap::generator<OMPTargetParallelForSimdDirective> in(const Fragment &frag);
  static gap::generator<OMPTargetParallelForSimdDirective> in(const File &file);
  static gap::generator<OMPTargetParallelForSimdDirective> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<OMPTargetParallelForSimdDirective> from(const ir::Operation &op);
  static gap::generator<std::pair<OMPTargetParallelForSimdDirective, ir::Operation>> in(const Compilation &tu);
  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OMP_TARGET_PARALLEL_FOR_SIMD_DIRECTIVE;
  }

  static gap::generator<OMPTargetParallelForSimdDirective> containing(const Decl &decl);
  static gap::generator<OMPTargetParallelForSimdDirective> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPTargetParallelForSimdDirective> containing(const Stmt &stmt);
  static gap::generator<OMPTargetParallelForSimdDirective> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<OMPTargetParallelForSimdDirective> by_id(const Index &, EntityId);

  static std::optional<OMPTargetParallelForSimdDirective> from_base(const Stmt &parent);
  inline static std::optional<OMPTargetParallelForSimdDirective> from(const Stmt &parent) {
    return from_base(parent);
  }
  static std::optional<OMPTargetParallelForSimdDirective> from(const std::optional<Stmt> &parent);
  static std::optional<OMPTargetParallelForSimdDirective> from(const Reference &r);
  static std::optional<OMPTargetParallelForSimdDirective> from(const VariantEntity &e);
  static std::optional<OMPTargetParallelForSimdDirective> from(const TokenContext &t);

};

static_assert(sizeof(OMPTargetParallelForSimdDirective) == sizeof(OMPLoopDirective));

#endif
} // namespace mx
