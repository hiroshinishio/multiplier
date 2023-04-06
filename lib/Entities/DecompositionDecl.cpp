// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/DecompositionDecl.h>

#include <multiplier/Entities/BindingDecl.h>
#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/DeclaratorDecl.h>
#include <multiplier/Entities/NamedDecl.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/ValueDecl.h>
#include <multiplier/Entities/VarDecl.h>

#include "../API.h"
#include "../Decl.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<DecompositionDecl> DecompositionDecl::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = DecompositionDecl::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool DecompositionDecl::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : DecompositionDecl::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<DecompositionDecl> DecompositionDecl::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = DecompositionDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = DecompositionDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool DecompositionDecl::contains(const Decl &decl) {
  for (auto &parent : DecompositionDecl::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool DecompositionDecl::contains(const Stmt &stmt) {
  for (auto &parent : DecompositionDecl::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

DecompositionDecl DecompositionDecl::canonical_declaration(void) const {
  if (auto canon = DecompositionDecl::from(this->Decl::canonical_declaration())) {
    return std::move(canon.value());
  }
  for (DecompositionDecl redecl : redeclarations()) {
    return redecl;
  }
  __builtin_unreachable();
}

std::optional<DecompositionDecl> DecompositionDecl::definition(void) const {
  return DecompositionDecl::from(this->Decl::definition());
}

gap::generator<DecompositionDecl> DecompositionDecl::redeclarations(void) const & {
  for (Decl r : Decl::redeclarations()) {
    if (std::optional<DecompositionDecl> dr = DecompositionDecl::from(r)) {
      co_yield std::move(dr.value());
      continue;
    }
    assert(false);
  // Wrong type?
  }
  co_return;
}

std::optional<DecompositionDecl> DecompositionDecl::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<DeclId>(vid)) {
    return DecompositionDecl::from(index.declaration(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const DeclKind kDecompositionDeclDerivedKinds[] = {
    DecompositionDecl::static_kind(),
};

std::optional<DecompositionDecl> DecompositionDecl::from(const Decl &parent) {
  switch (parent.kind()) {
    case DecompositionDecl::static_kind():
      return reinterpret_cast<const DecompositionDecl &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (DeclKind k : kDecompositionDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k)) {
      if (std::optional<DecompositionDecl> e = DecompositionDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (DeclKind k : kDecompositionDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
      if (std::optional<DecompositionDecl> e = DecompositionDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<DecompositionDecl> DecompositionDecl::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (DeclKind k : kDecompositionDeclDerivedKinds) {
      for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
        if (std::optional<DecompositionDecl> e = DecompositionDecl::from(Decl(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<DecompositionDecl> DecompositionDecl::from(const Reference &r) {
  return DecompositionDecl::from(r.as_declaration());
}

std::optional<DecompositionDecl> DecompositionDecl::from(const TokenContext &t) {
  return DecompositionDecl::from(t.as_declaration());
}

unsigned DecompositionDecl::num_bindings(void) const {
  return impl->reader.getVal50().size();
}

std::optional<BindingDecl> DecompositionDecl::nth_binding(unsigned n) const {
  auto list = impl->reader.getVal50();
  if (n >= list.size()) {
    return std::nullopt;
  }
  const EntityProvider::Ptr &ep = impl->ep;
  auto v = list[n];
  auto e = ep->DeclFor(ep, v);
  if (!e) {
    return std::nullopt;
  }
  return BindingDecl::from(Decl(std::move(e)));
}

gap::generator<BindingDecl> DecompositionDecl::bindings(void) const & {
  auto list = impl->reader.getVal50();
  EntityProvider::Ptr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d50 = ep->DeclFor(ep, v)) {
      if (auto e = BindingDecl::from(Decl(std::move(d50)))) {
        co_yield std::move(*e);
      }
    }
  }
  co_return;
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
