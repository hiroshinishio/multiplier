// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/SwitchCase.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/Frontend/File.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/Frontend/Token.h>
#include <multiplier/AST/CaseStmt.h>
#include <multiplier/AST/DefaultStmt.h>

#include <multiplier/IR/HighLevel/Operation.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const StmtKind kSwitchCaseDerivedKinds[] = {
    CaseStmt::static_kind(),
    DefaultStmt::static_kind(),
};
}  // namespace

gap::generator<SwitchCase> SwitchCase::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kSwitchCaseDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<SwitchCase> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SwitchCase> SwitchCase::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kSwitchCaseDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<SwitchCase> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<SwitchCase> SwitchCase::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kSwitchCaseDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<SwitchCase> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<SwitchCase> SwitchCase::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = SwitchCase::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool SwitchCase::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : SwitchCase::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<SwitchCase> SwitchCase::from(const ir::Operation &op) {
  if (auto val = Stmt::from(op)) {
    return from_base(val.value());
  }
  return std::nullopt;
}

gap::generator<std::pair<SwitchCase, ir::Operation>> SwitchCase::in(const Compilation &tu) {
  for (std::pair<Stmt, ir::Operation> res : Stmt::in(tu, kSwitchCaseDerivedKinds)) {
    if (auto val = from_base(res.first)) {
      co_yield std::pair<SwitchCase, ir::Operation>(std::move(val.value()), std::move(res.second));
    }
  }
}

gap::generator<SwitchCase> SwitchCase::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SwitchCase::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SwitchCase> SwitchCase::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<SwitchCase> SwitchCase::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = SwitchCase::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<SwitchCase> SwitchCase::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool SwitchCase::contains(const Decl &decl) {
  for (auto &parent : SwitchCase::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool SwitchCase::contains(const Stmt &stmt) {
  for (auto &parent : SwitchCase::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<SwitchCase> SwitchCase::by_id(const Index &index, EntityId eid) {
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

std::optional<SwitchCase> SwitchCase::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<SwitchCase> SwitchCase::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case CaseStmt::static_kind():
    case DefaultStmt::static_kind():
      return reinterpret_cast<const SwitchCase &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<SwitchCase> SwitchCase::from(const Reference &r) {
  return SwitchCase::from(r.as_statement());
}

std::optional<SwitchCase> SwitchCase::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<SwitchCase> SwitchCase::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

Token SwitchCase::colon_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal9());
}

Token SwitchCase::keyword_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal10());
}

std::optional<SwitchCase> SwitchCase::next_switch_case(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal11();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return SwitchCase::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

Stmt SwitchCase::sub_statement(void) const {
  RawEntityId eid = impl->reader.getVal13();
  return Stmt(impl->ep->StmtFor(impl->ep, eid));
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
