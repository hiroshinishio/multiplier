// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/SEHExceptStmt.h>
#include <multiplier/AST/CompoundStmt.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/Frontend/File.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/Frontend/Token.h>

#include <multiplier/IR/HighLevel/Operation.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const StmtKind kSEHExceptStmtDerivedKinds[] = {
    SEHExceptStmt::static_kind(),
};
}  // namespace

gap::generator<SEHExceptStmt> SEHExceptStmt::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kSEHExceptStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<SEHExceptStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kSEHExceptStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<SEHExceptStmt> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kSEHExceptStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<SEHExceptStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = SEHExceptStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool SEHExceptStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : SEHExceptStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<SEHExceptStmt> SEHExceptStmt::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<SEHExceptStmt, ir::Operation>> SEHExceptStmt::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kSEHExceptStmtDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<SEHExceptStmt, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SEHExceptStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SEHExceptStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SEHExceptStmt> SEHExceptStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool SEHExceptStmt::contains(const Decl &decl) {
  for (auto &parent : SEHExceptStmt::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool SEHExceptStmt::contains(const Stmt &stmt) {
  for (auto &parent : SEHExceptStmt::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<SEHExceptStmt> SEHExceptStmt::by_id(const Index &index, EntityId eid) {
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

std::optional<SEHExceptStmt> SEHExceptStmt::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<SEHExceptStmt> SEHExceptStmt::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case SEHExceptStmt::static_kind():
      return reinterpret_cast<const SEHExceptStmt &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<SEHExceptStmt> SEHExceptStmt::from(const Reference &r) {
  return SEHExceptStmt::from(r.as_statement());
}

std::optional<SEHExceptStmt> SEHExceptStmt::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<SEHExceptStmt> SEHExceptStmt::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

CompoundStmt SEHExceptStmt::block(void) const {
  RawEntityId eid = impl->reader.getVal9();
  return CompoundStmt::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Token SEHExceptStmt::except_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal10());
}

Expr SEHExceptStmt::filter_expression(void) const {
  RawEntityId eid = impl->reader.getVal11();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
