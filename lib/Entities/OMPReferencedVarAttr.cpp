// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/OMPReferencedVarAttr.h>

#include <multiplier/Entities/Attr.h>
#include <multiplier/Entities/Expr.h>
#include <multiplier/Entities/Token.h>

#include "../EntityProvider.h"
#include "../Attr.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<OMPReferencedVarAttr> OMPReferencedVarAttr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = OMPReferencedVarAttr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool OMPReferencedVarAttr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : OMPReferencedVarAttr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<OMPReferencedVarAttr> OMPReferencedVarAttr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<AttrId>(vid)) {
    return OMPReferencedVarAttr::from(index.attribute(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const AttrKind kOMPReferencedVarAttrDerivedKinds[] = {
    OMPReferencedVarAttr::static_kind(),
};

std::optional<OMPReferencedVarAttr> OMPReferencedVarAttr::from(const Attr &parent) {
  switch (parent.kind()) {
    case OMPReferencedVarAttr::static_kind():
      return reinterpret_cast<const OMPReferencedVarAttr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<OMPReferencedVarAttr> OMPReferencedVarAttr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (AttrKind k : kOMPReferencedVarAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k)) {
      if (std::optional<OMPReferencedVarAttr> e = OMPReferencedVarAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPReferencedVarAttr> OMPReferencedVarAttr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (AttrKind k : kOMPReferencedVarAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
      if (std::optional<OMPReferencedVarAttr> e = OMPReferencedVarAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPReferencedVarAttr> OMPReferencedVarAttr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (AttrKind k : kOMPReferencedVarAttrDerivedKinds) {
      for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
        if (std::optional<OMPReferencedVarAttr> e = OMPReferencedVarAttr::from(Attr(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<OMPReferencedVarAttr> OMPReferencedVarAttr::from(const Reference &r) {
  return OMPReferencedVarAttr::from(r.as_attribute());
}

std::optional<OMPReferencedVarAttr> OMPReferencedVarAttr::from(const TokenContext &t) {
  return OMPReferencedVarAttr::from(t.as_attribute());
}

Expr OMPReferencedVarAttr::reference(void) const {
  RawEntityId eid = impl->reader.getVal8();
  return Expr::from(Stmt(impl->ep->StmtFor(impl->ep, eid))).value();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
