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
class NoDebugAttr;
class Token;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class NoDebugAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<NoDebugAttr> in(const Fragment &frag);
  static gap::generator<NoDebugAttr> in(const File &file);
  static gap::generator<NoDebugAttr> in(const Index &index);
  static gap::generator<NoDebugAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<NoDebugAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::NO_DEBUG;
  }

  static std::optional<NoDebugAttr> from(const Attr &parent);

  inline static std::optional<NoDebugAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return NoDebugAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<NoDebugAttr> from(const Reference &r);
  static std::optional<NoDebugAttr> from(const TokenContext &t);

};

static_assert(sizeof(NoDebugAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
