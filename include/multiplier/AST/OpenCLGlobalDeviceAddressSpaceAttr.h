// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/TypeAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Attr;
class File;
class OpenCLGlobalDeviceAddressSpaceAttr;
class Token;
class TypeAttr;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT OpenCLGlobalDeviceAddressSpaceAttr : public TypeAttr {
 private:
  friend class FragmentImpl;
  friend class TypeAttr;
  friend class Attr;
 public:
  static gap::generator<OpenCLGlobalDeviceAddressSpaceAttr> in(const Index &index);
  static gap::generator<OpenCLGlobalDeviceAddressSpaceAttr> in(const Fragment &frag);
  static gap::generator<OpenCLGlobalDeviceAddressSpaceAttr> in(const File &file);
  static gap::generator<OpenCLGlobalDeviceAddressSpaceAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::OPEN_CL_GLOBAL_DEVICE_ADDRESS_SPACE;
  }

  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> by_id(const Index &, EntityId);

  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from_base(const Attr &parent);
  inline static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from(const std::optional<Attr> &parent);
  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from(const Reference &r);
  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from(const VariantEntity &e);
  static std::optional<OpenCLGlobalDeviceAddressSpaceAttr> from(const TokenContext &t);

};

static_assert(sizeof(OpenCLGlobalDeviceAddressSpaceAttr) == sizeof(TypeAttr));

#endif
} // namespace mx
