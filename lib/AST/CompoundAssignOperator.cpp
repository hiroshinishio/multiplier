// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/CompoundAssignOperator.h>
#include <multiplier/AST/BinaryOperator.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/Frontend/File.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/Frontend/Token.h>
#include <multiplier/AST/Type.h>
#include <multiplier/AST/ValueStmt.h>

#include <multiplier/IR/HighLevel/Operation.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const StmtKind kCompoundAssignOperatorDerivedKinds[] = {
    CompoundAssignOperator::static_kind(),
};
}  // namespace

gap::generator<CompoundAssignOperator> CompoundAssignOperator::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kCompoundAssignOperatorDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<CompoundAssignOperator> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kCompoundAssignOperatorDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<CompoundAssignOperator> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kCompoundAssignOperatorDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<CompoundAssignOperator> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = CompoundAssignOperator::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool CompoundAssignOperator::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : CompoundAssignOperator::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<CompoundAssignOperator, ir::Operation>> CompoundAssignOperator::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kCompoundAssignOperatorDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<CompoundAssignOperator, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CompoundAssignOperator::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CompoundAssignOperator::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CompoundAssignOperator> CompoundAssignOperator::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool CompoundAssignOperator::contains(const Decl &decl) {
  for (auto &parent : CompoundAssignOperator::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool CompoundAssignOperator::contains(const Stmt &stmt) {
  for (auto &parent : CompoundAssignOperator::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    if (auto base = index.statement(eid.Pack())) {
      return from_base(base.value());
    }
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case CompoundAssignOperator::static_kind():
      return reinterpret_cast<const CompoundAssignOperator &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from(const Reference &r) {
  return CompoundAssignOperator::from(r.as_statement());
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<CompoundAssignOperator> CompoundAssignOperator::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

Type CompoundAssignOperator::computation_lhs_type(void) const {
  RawEntityId eid = impl->reader.getVal41();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

Type CompoundAssignOperator::computation_result_type(void) const {
  RawEntityId eid = impl->reader.getVal42();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
