// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/InheritableAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class InheritableAttr;
class Token;
class UnsafeBufferUsageAttr;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT UnsafeBufferUsageAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<UnsafeBufferUsageAttr> in(const Index &index);
  static gap::generator<UnsafeBufferUsageAttr> in(const Fragment &frag);
  static gap::generator<UnsafeBufferUsageAttr> in(const File &file);
  static gap::generator<UnsafeBufferUsageAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::UNSAFE_BUFFER_USAGE;
  }

  static std::optional<UnsafeBufferUsageAttr> by_id(const Index &, EntityId);

  static std::optional<UnsafeBufferUsageAttr> from_base(const Attr &parent);
  inline static std::optional<UnsafeBufferUsageAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<UnsafeBufferUsageAttr> from(const std::optional<Attr> &parent);
  static std::optional<UnsafeBufferUsageAttr> from(const Reference &r);
  static std::optional<UnsafeBufferUsageAttr> from(const VariantEntity &e);
  static std::optional<UnsafeBufferUsageAttr> from(const TokenContext &t);

};

static_assert(sizeof(UnsafeBufferUsageAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
