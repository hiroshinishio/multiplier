// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <multiplier/AST/ObjCContainerDecl.h>

namespace mx {
class EntityProvider;
class Fragment;
class Index;
class Reference;
class Decl;
class File;
class NamedDecl;
class ObjCContainerDecl;
class ObjCImplDecl;
class ObjCInterfaceDecl;
class ObjCPropertyImplDecl;
class Stmt;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class MX_EXPORT ObjCImplDecl : public ObjCContainerDecl {
 private:
  friend class FragmentImpl;
  friend class ObjCContainerDecl;
  friend class NamedDecl;
  friend class Decl;
 public:
  static gap::generator<ObjCImplDecl> in(const Index &index);
  static gap::generator<ObjCImplDecl> in(const Fragment &frag);
  static gap::generator<ObjCImplDecl> in(const File &file);
  static gap::generator<ObjCImplDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;

  static std::optional<ObjCImplDecl> from(const ir::Operation &op);
  static gap::generator<std::pair<ObjCImplDecl, ir::Operation>> in(const Compilation &tu);
  static gap::generator<ObjCImplDecl> containing(const Decl &decl);
  static gap::generator<ObjCImplDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<ObjCImplDecl> containing(const Stmt &stmt);
  static gap::generator<ObjCImplDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  ObjCImplDecl canonical_declaration(void) const;
  std::optional<ObjCImplDecl> definition(void) const;
  gap::generator<ObjCImplDecl> redeclarations(void) const &;
  static std::optional<ObjCImplDecl> by_id(const Index &, EntityId);

  static std::optional<ObjCImplDecl> from_base(const Decl &parent);
  inline static std::optional<ObjCImplDecl> from(const Decl &parent) {
    return from_base(parent);
  }
  static std::optional<ObjCImplDecl> from(const std::optional<Decl> &parent);
  static std::optional<ObjCImplDecl> from(const Reference &r);
  static std::optional<ObjCImplDecl> from(const VariantEntity &e);
  static std::optional<ObjCImplDecl> from(const TokenContext &t);

  ObjCInterfaceDecl class_interface(void) const;
  std::optional<ObjCPropertyImplDecl> nth_property_implementation(unsigned n) const;
  unsigned num_property_implementations(void) const;
  gap::generator<ObjCPropertyImplDecl> property_implementations(void) const &;
};

static_assert(sizeof(ObjCImplDecl) == sizeof(ObjCContainerDecl));

#endif
} // namespace mx
