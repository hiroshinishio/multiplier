// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/Frontend/IncludeLikeMacroDirective.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class File;
class ImportMacroDirective;
class IncludeLikeMacroDirective;
class Macro;
class MacroDirective;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ImportMacroDirective : public IncludeLikeMacroDirective {
 private:
  friend class FragmentImpl;
  friend class IncludeLikeMacroDirective;
  friend class MacroDirective;
  friend class Macro;
 public:
  static gap::generator<ImportMacroDirective> in(const Index &index);
  static gap::generator<ImportMacroDirective> in(const Fragment &frag);
  static gap::generator<ImportMacroDirective> in(const File &file);
  inline static constexpr MacroKind static_kind(void) {
    return MacroKind::IMPORT_DIRECTIVE;
  }

  static gap::generator<ImportMacroDirective> containing(const Macro &macro);
  bool contains(const Macro &macro);

  static gap::generator<ImportMacroDirective> containing(const Token &token);
  bool contains(const Token &token);

  static std::optional<ImportMacroDirective> by_id(const Index &, EntityId);

  static std::optional<ImportMacroDirective> from_base(const Macro &parent);
  inline static std::optional<ImportMacroDirective> from(const Macro &parent) {
    return from_base(parent);
  }
  static std::optional<ImportMacroDirective> from(const std::optional<Macro> &parent);
  static std::optional<ImportMacroDirective> from(const Reference &r);
  static std::optional<ImportMacroDirective> from(const VariantEntity &e);
  static std::optional<ImportMacroDirective> from(const TokenContext &t);

};

static_assert(sizeof(ImportMacroDirective) == sizeof(IncludeLikeMacroDirective));

#endif
} // namespace mx
