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
class PragmaClangDataSectionAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT PragmaClangDataSectionAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<PragmaClangDataSectionAttr> in(const Index &index);
  static gap::generator<PragmaClangDataSectionAttr> in(const Fragment &frag);
  static gap::generator<PragmaClangDataSectionAttr> in(const File &file);
  static gap::generator<PragmaClangDataSectionAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::PRAGMA_CLANG_DATA_SECTION;
  }

  static std::optional<PragmaClangDataSectionAttr> by_id(const Index &, EntityId);

  static std::optional<PragmaClangDataSectionAttr> from_base(const Attr &parent);
  inline static std::optional<PragmaClangDataSectionAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<PragmaClangDataSectionAttr> from(const std::optional<Attr> &parent);
  static std::optional<PragmaClangDataSectionAttr> from(const Reference &r);
  static std::optional<PragmaClangDataSectionAttr> from(const VariantEntity &e);
  static std::optional<PragmaClangDataSectionAttr> from(const TokenContext &t);

  std::string_view name(void) const;
  uint32_t name_length(void) const;
};

static_assert(sizeof(PragmaClangDataSectionAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
