// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "InheritableAttr.h"

namespace mx {
class EntityProvider;
class Index;
class Attr;
class InheritableAttr;
class MSStructAttr;
class Token;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MSStructAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<MSStructAttr> in(const Fragment &frag);
  static gap::generator<MSStructAttr> in(const File &file);
  static gap::generator<MSStructAttr> in(const Index &index);
  static gap::generator<MSStructAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<MSStructAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::MS_STRUCT;
  }

  static std::optional<MSStructAttr> from(const Attr &parent);

  inline static std::optional<MSStructAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return MSStructAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<MSStructAttr> from(const Reference &r);
  static std::optional<MSStructAttr> from(const TokenContext &t);

};

static_assert(sizeof(MSStructAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
