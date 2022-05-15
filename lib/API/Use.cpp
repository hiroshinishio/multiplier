// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include "Use.h"

#include <type_traits>

#include "Fragment.h"

namespace mx {
namespace {

#define MX_VISIT_ENUM(cls, api_name, get_val, set_val, init_val, \
                      pasta_name, type, nth_list) \
    template <typename Reader> \
    inline static type Get_ ## cls ## _ ## pasta_name(const Reader &reader) { \
      return static_cast<type>(reader.get_val()); \
    }

#define MX_VISIT_PSEUDO_KIND(cls, get_val, set_val) \
    inline static PseudoKind Get_PseudoKind( \
        const mx::ast::Pseudo::Reader &reader, cls *) { \
      return static_cast<PseudoKind>(reader.get_val()); \
    }

#define DECLARE_FIND_READER_USES(reader_kind, name) \
    static void FindUses_ ## name ( \
        mx::RawEntityId eid, UseSelectorSet &selectors, \
        const mx::ast::reader_kind::Reader &, bool &found);

#define MX_BEGIN_VISIT_DECL(name) DECLARE_FIND_READER_USES(Decl, name)
#define MX_BEGIN_VISIT_STMT(name) DECLARE_FIND_READER_USES(Stmt, name)
#define MX_BEGIN_VISIT_TYPE(name) DECLARE_FIND_READER_USES(Type, name)
#define MX_BEGIN_VISIT_PSEUDO(name) DECLARE_FIND_READER_USES(Pseudo, name)

#include <multiplier/Visitor.inc.h>

#define DEFINE_FIND_READER_KIND_USES(reader_kind, name) \
    void FindUses_ ## name ( \
        mx::RawEntityId eid, UseSelectorSet &selectors, \
        const mx::ast::reader_kind::Reader &reader, bool &found) {

#define MX_VISIT_BASE(name, base_name) \
    FindUses_ ## base_name(eid, selectors, reader, found);

#define MX_VISIT_ENTITY(cls, api_name, get_val, set_val, init_val, \
                        pasta_name, type, nth_list, selector) \
    if (eid == reader.get_val()) { \
      found = true; \
      selectors.set(static_cast<unsigned>(selector)); \
    }

#define MX_VISIT_OPTIONAL_ENTITY MX_VISIT_ENTITY
#define MX_BEGIN_VISIT_DECL(name) DEFINE_FIND_READER_KIND_USES(Decl, name)
#define MX_BEGIN_VISIT_STMT(name) DEFINE_FIND_READER_KIND_USES(Stmt, name)
#define MX_BEGIN_VISIT_TYPE(name) DEFINE_FIND_READER_KIND_USES(Type, name)
#define MX_BEGIN_VISIT_PSEUDO(name) DEFINE_FIND_READER_KIND_USES(Pseudo, name)
#define MX_END_VISIT_DECL(name) }
#define MX_END_VISIT_STMT MX_END_VISIT_DECL
#define MX_END_VISIT_TYPE MX_END_VISIT_DECL
#define MX_END_VISIT_PSEUDO MX_END_VISIT_DECL
#include <multiplier/Visitor.inc.h>

}  // namespace

UseIteratorImpl::UseIteratorImpl(EntityProvider::Ptr ep_, const Decl &entity)
    : ep(std::move(ep_)) {
  ep->FillUses(ep, entity.id(), search_ids, fragment_ids);
}

UseIteratorImpl::UseIteratorImpl(EntityProvider::Ptr ep_, const Stmt &entity)
    : ep(std::move(ep_)),
      search_ids(1u),
      fragment_ids(1u) {
  search_ids[0] = entity.id();
  fragment_ids[0] = entity.fragment->fragment_id;
}

UseIteratorImpl::UseIteratorImpl(EntityProvider::Ptr ep_, const Type &entity)
    : ep(std::move(ep_)),
      search_ids(1u),
      fragment_ids(1u) {
  search_ids[0] = entity.id();
  fragment_ids[0] = entity.fragment->fragment_id;
}

UseIteratorImpl::UseIteratorImpl(FragmentImpl::Ptr frag, const Token &entity)
    : ep(frag->ep),
      search_ids(1u),
      fragment_ids(1u) {
  search_ids[0] = entity.id();
  fragment_ids[0] = frag->fragment_id;
}

bool UseIteratorImpl::FindNextDecl(UseIteratorBase &self) {
  if (self.list_offset >= self.use.fragment->num_decls) {
    return false;
  }

  self.use.offset = self.list_offset++;
  mx::ast::Decl::Reader reader = self.use.fragment->NthDecl(self.use.offset);
  bool found = false;

  self.use.selectors.reset();

  for (auto eid : search_ids) {
    switch (Get_Decl_Kind(reader)) {

#define MX_BEGIN_VISIT_ABSTRACT_DECL(name)
#define MX_BEGIN_VISIT_DECL(name) \
    case name::static_kind(): \
      FindUses_ ## name (eid, self.use.selectors, reader, found); \
      break;

#include <multiplier/Visitor.inc.h>

    }
  }

  return found;
}

bool UseIteratorImpl::FindNextStmt(UseIteratorBase &self) {
  if (self.list_offset >= self.use.fragment->num_stmts) {
    return false;
  }

  self.use.offset = self.list_offset++;
  mx::ast::Stmt::Reader reader = self.use.fragment->NthStmt(self.use.offset);
  bool found = false;

  self.use.selectors.reset();

  for (auto eid : search_ids) {
    switch (Get_Stmt_Kind(reader)) {

#define MX_BEGIN_VISIT_ABSTRACT_STMT(name)
#define MX_BEGIN_VISIT_STMT(name) \
    case name::static_kind(): \
      FindUses_ ## name (eid, self.use.selectors, reader, found); \
      break;

#include <multiplier/Visitor.inc.h>

    }
  }

  return found;
}

bool UseIteratorImpl::FindNextType(UseIteratorBase &self) {
  if (self.list_offset >= self.use.fragment->num_types) {
    return false;
  }

  self.use.offset = self.list_offset++;
  mx::ast::Type::Reader reader = self.use.fragment->NthType(self.use.offset);
  bool found = false;

  self.use.selectors.reset();

  for (auto eid : search_ids) {
    switch (Get_Type_Kind(reader)) {

#define MX_BEGIN_VISIT_ABSTRACT_TYPE(name)
#define MX_BEGIN_VISIT_TYPE(name) \
    case name::static_kind(): \
      FindUses_ ## name (eid, self.use.selectors, reader, found); \
      break;

#include <multiplier/Visitor.inc.h>

    }
  }

  return found;
}

bool UseIteratorImpl::FindNextPseudo(UseIteratorBase &self) {
  if (self.list_offset >= self.use.fragment->num_pseudos) {
    return false;
  }

  TemplateArgument *dummy = nullptr;
  self.use.offset = self.list_offset++;
  self.use.selectors.reset();
  mx::ast::Pseudo::Reader reader =
      self.use.fragment->NthPseudo(self.use.offset);
  bool found = false;

  for (auto eid : search_ids) {
    switch (Get_PseudoKind(reader, dummy)) {
      case PseudoKind::CXX_BASE_SPECIFIER:
        self.use.kind = UseKind::CXX_BASE_SPECIFIER;
        FindUses_CXXBaseSpecifier(eid, self.use.selectors, reader, found);
        break;
      case PseudoKind::TEMPLATE_ARGUMENT:
        self.use.kind = UseKind::TEMPLATE_ARGUMENT;
        FindUses_TemplateArgument(eid, self.use.selectors, reader, found);
        break;
      case PseudoKind::TEMPLATE_PARAMETER_LIST:
        self.use.kind = UseKind::TEMPLATE_PARAMETER_LIST;
        FindUses_TemplateParameterList(eid, self.use.selectors, reader, found);
        break;
    }
  }

  return found;
}

bool UseIteratorImpl::FindNext(UseIteratorBase &self) {
  for (;;) {
    if (!self.use.fragment) {
      if (self.fragment_offset >= fragment_ids.size()) {
        return false;

      } else {
        self.use.fragment = ep->FragmentFor(
            ep, fragment_ids[self.fragment_offset++]);
        if (!self.use.fragment) {
          continue;  // Skip to next; didn't find for some reason.
        }
      }
    }

    switch (self.use.kind) {
      case UseKind::DECLARATION:
        if (FindNextDecl(self)) {
          return true;

        } else {
          // Skip to next list; didn't find.
          self.use.kind = UseKind::STATEMENT;
          self.list_offset = 0u;
          continue;
        }
      case UseKind::STATEMENT:
        if (FindNextStmt(self)) {
          return true;
        } else {
          // Skip to next list; didn't find.
          self.use.kind = UseKind::TYPE;
          self.list_offset = 0u;
          continue;
        }
      case UseKind::TYPE:
        if (FindNextType(self)) {
          return true;
        } else {
          // Skip to next list; didn't find.
          self.use.kind = UseKind::CXX_BASE_SPECIFIER;
          self.list_offset = 0u;
          continue;
        }
      case UseKind::CXX_BASE_SPECIFIER:
      case UseKind::TEMPLATE_ARGUMENT:
      case UseKind::TEMPLATE_PARAMETER_LIST:
        if (FindNextPseudo(self)) {
          return true;

        } else {
          // Skip to next fragment; didn't find.
          self.use.fragment.reset();
          self.list_offset = 0u;
          self.use.kind = UseKind::DECLARATION;
          continue;
        }
    }
  }

  return false;
}

void UseIteratorBase::Advance(void) {
  if (!impl->FindNext(*this)) {
    impl.reset();
  }
}

UseBase::~UseBase(void) {}

UseBase::UseBase(Decl entity, UseSelectorSet selectors_)
    : selectors(std::move(selectors_)),
      fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::DECLARATION) {}

UseBase::UseBase(Stmt entity, UseSelectorSet selectors_)
    : selectors(std::move(selectors_)),
      fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::STATEMENT) {}

UseBase::UseBase(Type entity, UseSelectorSet selectors_)
    : selectors(std::move(selectors_)),
      fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::TYPE) {}

UseBase::UseBase(CXXBaseSpecifier entity, UseSelectorSet selectors_)
    : selectors(std::move(selectors_)),
      fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::CXX_BASE_SPECIFIER) {}

UseBase::UseBase(TemplateArgument entity, UseSelectorSet selectors_)
    : selectors(std::move(selectors_)),
      fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::TEMPLATE_ARGUMENT) {}

UseBase::UseBase(TemplateParameterList entity, UseSelectorSet selectors_)
    : fragment(std::move(entity.fragment)),
      offset(entity.offset),
      kind(UseKind::TEMPLATE_PARAMETER_LIST) {}

std::optional<Decl> UseBase::as_declaration(void) const {
  if (kind == UseKind::DECLARATION && fragment && offset < fragment->num_decls) {
    return Decl(fragment, offset);
  } else {
    return std::nullopt;
  }
}

std::optional<Stmt> UseBase::as_statement(void) const {
  if (kind == UseKind::STATEMENT && fragment && offset < fragment->num_stmts) {
    return Stmt(fragment, offset);
  } else {
    return std::nullopt;
  }
}

std::optional<Type> UseBase::as_type(void) const {
  if (kind == UseKind::TYPE && fragment && offset < fragment->num_types) {
    return Type(fragment, offset);
  } else {
    return std::nullopt;
  }
}

std::optional<CXXBaseSpecifier> UseBase::as_cxx_base_specifier(void) const {
  if (kind == UseKind::CXX_BASE_SPECIFIER && fragment &&
      offset < fragment->num_pseudos) {
    return CXXBaseSpecifier(fragment, offset);
  } else {
    return std::nullopt;
  }
}

std::optional<TemplateArgument> UseBase::as_template_argument(void) const {
  if (kind == UseKind::TEMPLATE_ARGUMENT && fragment &&
      offset < fragment->num_pseudos) {
    return TemplateArgument(fragment, offset);
  } else {
    return std::nullopt;
  }
}

std::optional<TemplateParameterList>
UseBase::as_template_parameter_list(void) const {
  if (kind == UseKind::TEMPLATE_PARAMETER_LIST && fragment &&
      offset < fragment->num_pseudos) {
    return TemplateParameterList(fragment, offset);
  } else {
    return std::nullopt;
  }
}

}  // namespace mx
