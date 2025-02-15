// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/CoroutineBodyStmt.h>
#include <multiplier/AST/CompoundStmt.h>
#include <multiplier/AST/Decl.h>
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
static const StmtKind kCoroutineBodyStmtDerivedKinds[] = {
    CoroutineBodyStmt::static_kind(),
};
}  // namespace

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kCoroutineBodyStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<CoroutineBodyStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kCoroutineBodyStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<CoroutineBodyStmt> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kCoroutineBodyStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<CoroutineBodyStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = CoroutineBodyStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool CoroutineBodyStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : CoroutineBodyStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<CoroutineBodyStmt, ir::Operation>> CoroutineBodyStmt::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kCoroutineBodyStmtDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<CoroutineBodyStmt, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CoroutineBodyStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CoroutineBodyStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CoroutineBodyStmt> CoroutineBodyStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool CoroutineBodyStmt::contains(const Decl &decl) {
  for (auto &parent : CoroutineBodyStmt::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool CoroutineBodyStmt::contains(const Stmt &stmt) {
  for (auto &parent : CoroutineBodyStmt::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::by_id(const Index &index, EntityId eid) {
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

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case CoroutineBodyStmt::static_kind():
      return reinterpret_cast<const CoroutineBodyStmt &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from(const Reference &r) {
  return CoroutineBodyStmt::from(r.as_statement());
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<CoroutineBodyStmt> CoroutineBodyStmt::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

gap::generator<Stmt> CoroutineBodyStmt::children_excl_body(void) const & {
  auto list = impl->reader.getVal15();
  EntityProviderPtr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d15 = ep->StmtFor(ep, v)) {
      co_yield Stmt(std::move(d15));
    }
  }
  co_return;
}

Expr CoroutineBodyStmt::allocate(void) const {
  RawEntityId eid = impl->reader.getVal9();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

CompoundStmt CoroutineBodyStmt::body(void) const {
  RawEntityId eid = impl->reader.getVal10();
  return CompoundStmt::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Expr CoroutineBodyStmt::deallocate(void) const {
  RawEntityId eid = impl->reader.getVal11();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Stmt CoroutineBodyStmt::exception_handler(void) const {
  RawEntityId eid = impl->reader.getVal13();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

Stmt CoroutineBodyStmt::fallthrough_handler(void) const {
  RawEntityId eid = impl->reader.getVal14();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

Stmt CoroutineBodyStmt::final_suspend_statement(void) const {
  RawEntityId eid = impl->reader.getVal17();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

Stmt CoroutineBodyStmt::initializer_suspend_statement(void) const {
  RawEntityId eid = impl->reader.getVal18();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

unsigned CoroutineBodyStmt::num_parameter_moves(void) const {
  return impl->reader.getVal27().size();
}

std::optional<Stmt> CoroutineBodyStmt::nth_parameter_move(unsigned n) const {
  auto list = impl->reader.getVal27();
  if (n >= list.size()) {
    return std::nullopt;
  }
  const EntityProviderPtr &ep = impl->ep;
  auto v = list[n];
  auto e = ep->StmtFor(ep, v);
  if (!e) {
    return std::nullopt;
  }
  return Stmt(std::move(e));
}

gap::generator<Stmt> CoroutineBodyStmt::parameter_moves(void) const & {
  auto list = impl->reader.getVal27();
  EntityProviderPtr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d27 = ep->StmtFor(ep, v)) {
      co_yield Stmt(std::move(d27));
    }
  }
  co_return;
}

VarDecl CoroutineBodyStmt::promise_declaration(void) const {
  RawEntityId eid = impl->reader.getVal19();
  return VarDecl::from_base(impl->ep->DeclFor(impl->ep, eid)).value();
}

Stmt CoroutineBodyStmt::promise_declaration_statement(void) const {
  RawEntityId eid = impl->reader.getVal20();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

std::optional<Stmt> CoroutineBodyStmt::result_declaration(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal21();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Stmt(std::move(eptr));
    }
  }
  return std::nullopt;
}

Stmt CoroutineBodyStmt::return_statement(void) const {
  RawEntityId eid = impl->reader.getVal22();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

std::optional<Stmt> CoroutineBodyStmt::return_statement_on_alloc_failure(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal31();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Stmt(std::move(eptr));
    }
  }
  return std::nullopt;
}

Expr CoroutineBodyStmt::return_value(void) const {
  RawEntityId eid = impl->reader.getVal32();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Expr CoroutineBodyStmt::return_value_initializer(void) const {
  RawEntityId eid = impl->reader.getVal33();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

bool CoroutineBodyStmt::has_dependent_promise_type(void) const {
  return impl->reader.getVal12();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
