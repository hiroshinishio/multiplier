// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/ArgumentWithTypeTagAttrSpelling.h>
#include <multiplier/AST/InheritableAttr.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class ArgumentWithTypeTagAttr;
class Attr;
class File;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ArgumentWithTypeTagAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ArgumentWithTypeTagAttr> in(const Index &index);
  static gap::generator<ArgumentWithTypeTagAttr> in(const Fragment &frag);
  static gap::generator<ArgumentWithTypeTagAttr> in(const File &file);
  static gap::generator<ArgumentWithTypeTagAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ARGUMENT_WITH_TYPE_TAG;
  }

  static std::optional<ArgumentWithTypeTagAttr> by_id(const Index &, EntityId);

  static std::optional<ArgumentWithTypeTagAttr> from_base(const Attr &parent);
  inline static std::optional<ArgumentWithTypeTagAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<ArgumentWithTypeTagAttr> from(const std::optional<Attr> &parent);
  static std::optional<ArgumentWithTypeTagAttr> from(const Reference &r);
  static std::optional<ArgumentWithTypeTagAttr> from(const VariantEntity &e);
  static std::optional<ArgumentWithTypeTagAttr> from(const TokenContext &t);

  bool is_pointer(void) const;
  ArgumentWithTypeTagAttrSpelling semantic_spelling(void) const;
};

static_assert(sizeof(ArgumentWithTypeTagAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
