// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/ConstantExpr.h>

#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/Expr.h>
#include <multiplier/Entities/FullExpr.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/ValueStmt.h>

#include "../API.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<ConstantExpr> ConstantExpr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = ConstantExpr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool ConstantExpr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : ConstantExpr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<ConstantExpr> ConstantExpr::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ConstantExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ConstantExpr> ConstantExpr::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<ConstantExpr> ConstantExpr::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ConstantExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ConstantExpr> ConstantExpr::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool ConstantExpr::contains(const Decl &decl) {
  for (auto &parent : ConstantExpr::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool ConstantExpr::contains(const Stmt &stmt) {
  for (auto &parent : ConstantExpr::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<ConstantExpr> ConstantExpr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return ConstantExpr::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kConstantExprDerivedKinds[] = {
    ConstantExpr::static_kind(),
};

std::optional<ConstantExpr> ConstantExpr::from(const Stmt &parent) {
  switch (parent.kind()) {
    case ConstantExpr::static_kind():
      return reinterpret_cast<const ConstantExpr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<ConstantExpr> ConstantExpr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kConstantExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<ConstantExpr> e = ConstantExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConstantExpr> ConstantExpr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kConstantExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<ConstantExpr> e = ConstantExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConstantExpr> ConstantExpr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kConstantExprDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<ConstantExpr> e = ConstantExpr::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<ConstantExpr> ConstantExpr::from(const Reference &r) {
  return ConstantExpr::from(r.as_statement());
}

std::optional<ConstantExpr> ConstantExpr::from(const TokenContext &t) {
  return ConstantExpr::from(t.as_statement());
}

ConstantExprResultStorageKind ConstantExpr::result_storage_kind(void) const {
  return static_cast<ConstantExprResultStorageKind>(impl->reader.getVal94());
}

bool ConstantExpr::has_ap_value_result(void) const {
  return impl->reader.getVal89();
}

bool ConstantExpr::is_immediate_invocation(void) const {
  return impl->reader.getVal90();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
