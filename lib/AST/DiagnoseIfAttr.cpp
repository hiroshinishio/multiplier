// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/DiagnoseIfAttr.h>
#include <multiplier/AST/Attr.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/Frontend/File.h>
#include <multiplier/AST/InheritableAttr.h>
#include <multiplier/AST/NamedDecl.h>
#include <multiplier/Frontend/Token.h>

#include "../EntityProvider.h"
#include "../Attr.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

namespace {
static const AttrKind kDiagnoseIfAttrDerivedKinds[] = {
    DiagnoseIfAttr::static_kind(),
};
}  // namespace

gap::generator<DiagnoseIfAttr> DiagnoseIfAttr::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (AttrKind k : kDiagnoseIfAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k)) {
      if (std::optional<DiagnoseIfAttr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<DiagnoseIfAttr> DiagnoseIfAttr::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (AttrKind k : kDiagnoseIfAttrDerivedKinds) {
      for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
        if (std::optional<DiagnoseIfAttr> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

gap::generator<DiagnoseIfAttr> DiagnoseIfAttr::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (AttrKind k : kDiagnoseIfAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
      if (std::optional<DiagnoseIfAttr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<DiagnoseIfAttr> DiagnoseIfAttr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = DiagnoseIfAttr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool DiagnoseIfAttr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : DiagnoseIfAttr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<AttrId>(vid)) {
    if (auto base = index.attribute(eid.Pack())) {
      return from_base(base.value());
    }
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::from(const std::optional<Attr> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::from_base(const Attr &parent) {
  switch (parent.kind()) {
    case DiagnoseIfAttr::static_kind():
      return reinterpret_cast<const DiagnoseIfAttr &>(parent);
    default:
      return std::nullopt;
  }
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::from(const Reference &r) {
  return DiagnoseIfAttr::from(r.as_attribute());
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::from(const VariantEntity &e) {
  if (!std::holds_alternative<Attr>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Attr>(e));
}

std::optional<DiagnoseIfAttr> DiagnoseIfAttr::from(const TokenContext &t) {
  if (auto base = t.as_attribute()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

bool DiagnoseIfAttr::argument_dependent(void) const {
  return impl->reader.getVal15();
}

Expr DiagnoseIfAttr::condition(void) const {
  RawEntityId eid = impl->reader.getVal10();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

DiagnoseIfAttrDiagnosticType DiagnoseIfAttr::diagnostic_type(void) const {
  return static_cast<DiagnoseIfAttrDiagnosticType>(impl->reader.getVal13());
}

std::string_view DiagnoseIfAttr::message(void) const {
  capnp::Text::Reader data = impl->reader.getVal11();
  return std::string_view(data.cStr(), data.size());
}

uint32_t DiagnoseIfAttr::message_length(void) const {
  return impl->reader.getVal12();
}

NamedDecl DiagnoseIfAttr::parent(void) const {
  RawEntityId eid = impl->reader.getVal23();
  return NamedDecl::from_base(impl->ep->DeclFor(impl->ep, eid)).value();
}

bool DiagnoseIfAttr::is_error(void) const {
  return impl->reader.getVal16();
}

bool DiagnoseIfAttr::is_warning(void) const {
  return impl->reader.getVal17();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
