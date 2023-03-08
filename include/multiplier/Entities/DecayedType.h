// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "AdjustedType.h"

namespace mx {
class EntityProvider;
class Index;
class AdjustedType;
class DecayedType;
class Token;
class Type;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class DecayedType : public AdjustedType {
 private:
  friend class FragmentImpl;
  friend class AdjustedType;
  friend class Type;
 public:
  static gap::generator<DecayedType> in(const Fragment &frag);
  static gap::generator<DecayedType> in(const File &file);
  static gap::generator<DecayedType> in(const Index &index);
  static gap::generator<DecayedType> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<DecayedType> by_id(const Index &, EntityId);

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::DECAYED;
  }

  static std::optional<DecayedType> from(const Type &parent);

  inline static std::optional<DecayedType> from(const std::optional<Type> &parent) {
    if (parent) {
      return DecayedType::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<DecayedType> from(const Reference &r);
  static std::optional<DecayedType> from(const TokenContext &t);

};

static_assert(sizeof(DecayedType) == sizeof(AdjustedType));

#endif
} // namespace mx
