// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/SourceLocExpr.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/Frontend/Token.h>
#include <multiplier/AST/ValueStmt.h>

#include <multiplier/IR/HighLevel/Operation.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const StmtKind kSourceLocExprDerivedKinds[] = {
    SourceLocExpr::static_kind(),
};
}  // namespace

gap::generator<SourceLocExpr> SourceLocExpr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = SourceLocExpr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool SourceLocExpr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : SourceLocExpr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

#ifndef MX_DISABLE_VAST
std::optional<SourceLocExpr> SourceLocExpr::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<SourceLocExpr, ir::Operation>> SourceLocExpr::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kSourceLocExprDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<SourceLocExpr, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

#endif  // MX_DISABLE_VAST

gap::generator<SourceLocExpr> SourceLocExpr::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SourceLocExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SourceLocExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool SourceLocExpr::contains(const Decl &decl) {
  for (auto &parent : SourceLocExpr::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool SourceLocExpr::contains(const Stmt &stmt) {
  for (auto &parent : SourceLocExpr::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<SourceLocExpr> SourceLocExpr::by_id(const Index &index, EntityId eid) {
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

std::optional<SourceLocExpr> SourceLocExpr::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<SourceLocExpr> SourceLocExpr::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case SourceLocExpr::static_kind():
      return reinterpret_cast<const SourceLocExpr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kSourceLocExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<SourceLocExpr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kSourceLocExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<SourceLocExpr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SourceLocExpr> SourceLocExpr::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kSourceLocExprDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<SourceLocExpr> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<SourceLocExpr> SourceLocExpr::from(const Reference &r) {
  return SourceLocExpr::from(r.as_statement());
}

std::optional<SourceLocExpr> SourceLocExpr::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<SourceLocExpr> SourceLocExpr::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

std::string_view SourceLocExpr::builtin_string(void) const {
  capnp::Text::Reader data = impl->reader.getVal60();
  return std::string_view(data.cStr(), data.size());
}

SourceLocExprIdentKind SourceLocExpr::identifier_kind(void) const {
  return static_cast<SourceLocExprIdentKind>(impl->reader.getVal95());
}

Token SourceLocExpr::token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal37());
}

bool SourceLocExpr::is_int_type(void) const {
  return impl->reader.getVal89();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
