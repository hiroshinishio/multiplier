// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/ForStmt.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/AST/DeclStmt.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/Frontend/File.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/Frontend/Token.h>
#include <multiplier/AST/VarDecl.h>

#include <multiplier/IR/HighLevel/Operation.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const StmtKind kForStmtDerivedKinds[] = {
    ForStmt::static_kind(),
};
}  // namespace

gap::generator<ForStmt> ForStmt::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kForStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<ForStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ForStmt> ForStmt::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kForStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<ForStmt> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<ForStmt> ForStmt::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kForStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<ForStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ForStmt> ForStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = ForStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool ForStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : ForStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<ForStmt> ForStmt::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<ForStmt, ir::Operation>> ForStmt::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kForStmtDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<ForStmt, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

gap::generator<ForStmt> ForStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ForStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ForStmt> ForStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<ForStmt> ForStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ForStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ForStmt> ForStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool ForStmt::contains(const Decl &decl) {
  for (auto &parent : ForStmt::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool ForStmt::contains(const Stmt &stmt) {
  for (auto &parent : ForStmt::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<ForStmt> ForStmt::by_id(const Index &index, EntityId eid) {
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

std::optional<ForStmt> ForStmt::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<ForStmt> ForStmt::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case ForStmt::static_kind():
      return reinterpret_cast<const ForStmt &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<ForStmt> ForStmt::from(const Reference &r) {
  return ForStmt::from(r.as_statement());
}

std::optional<ForStmt> ForStmt::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<ForStmt> ForStmt::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

Stmt ForStmt::body(void) const {
  RawEntityId eid = impl->reader.getVal9();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

std::optional<Expr> ForStmt::condition(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal10();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Expr::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

std::optional<VarDecl> ForStmt::condition_variable(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal11();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return VarDecl::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

std::optional<DeclStmt> ForStmt::condition_variable_declaration_statement(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal13();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return DeclStmt::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

Token ForStmt::for_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal14());
}

std::optional<Expr> ForStmt::increment(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal17();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Expr::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

std::optional<Stmt> ForStmt::initializer(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal18();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Stmt(std::move(eptr));
    }
  }
  return std::nullopt;
}

Token ForStmt::l_paren_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal19());
}

Token ForStmt::r_paren_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal20());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
