// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include "File.h"

#include <cassert>
#include <multiplier/Frontend/TokenKind.h>

namespace mx {
namespace {

// A zero-sized string view that nontheless has a valid `.data()` pointer.
static const std::string_view kEmptyStringView("");

}  // namespace

FileImpl::~FileImpl(void) noexcept {}

FileImpl::FileImpl(
    EntityProviderPtr ep_, kj::Array<capnp::word> data_, RawEntityId id_)
    : EntityImpl<rpc::File>(std::move(ep_), kj::mv(data_)),
      file_token_reader(this),
      file_id(EntityId(id_).Extract<FileId>()->file_id),
      num_tokens(reader.getTokenKinds().size()) {
  assert((num_tokens + 1u) == reader.getTokenOffsets().size());
}

// Return the data of the file.
std::string_view FileImpl::Data(void) const & noexcept {
  if (reader.hasData()) {
    if (auto data = reader.getData(); auto size = data.size()) {
      return std::string_view(data.cStr(), size);
    }
  }
  return kEmptyStringView;
}

// Return the number of tokens in the file.
unsigned ReadFileTokensFromFile::NumTokens(void) const {
  return file->num_tokens;
}

// Return the kind of the Nth token.
TokenKind ReadFileTokensFromFile::NthTokenKind(unsigned ti) const {
  if (ti < file->num_tokens) {
    return static_cast<TokenKind>(file->reader.getTokenKinds()[ti]);
  } else {
    return TokenKind::UNKNOWN;
  }
}

// Return the data of the Nth token.
std::string_view ReadFileTokensFromFile::NthTokenData(
    unsigned token_index) const {
  if (token_index < file->num_tokens) {
    auto tor = file->reader.getTokenOffsets();
    auto bo = tor[token_index];
    auto eo = tor[token_index + 1u];
    return std::string_view(&(file->reader.getData().cStr()[bo]), eo - bo);
  } else {
    return kEmptyStringView;
  }
}

// Return the id of the token from which the Nth token is derived.
EntityId ReadFileTokensFromFile::NthDerivedTokenId(unsigned) const {
  return kInvalidEntityId;
}

// Return the id of the parsed token which is derived from the Nth token.
EntityId ReadFileTokensFromFile::NthParsedTokenId(unsigned) const {
  return kInvalidEntityId;
}

// Return the id of the macro containing the Nth token.
EntityId ReadFileTokensFromFile::NthContainingMacroId(unsigned) const {
  return kInvalidEntityId;
}

// Return an entity id associated with the Nth token.
EntityId ReadFileTokensFromFile::NthRelatedEntityId(unsigned) const {
  return kInvalidEntityId;
}

// Return the entity associated with the Nth token.
VariantEntity ReadFileTokensFromFile::NthRelatedEntity(EntityOffset) const {
  return NotAnEntity{};
}

// Return the id of the Nth token.
EntityId ReadFileTokensFromFile::NthTokenId(unsigned ti) const {
  if (ti < file->num_tokens) {
    FileTokenId id;
    id.file_id = file->file_id;
    id.kind = static_cast<TokenKind>(file->reader.getTokenKinds()[ti]);
    id.offset = ti;
    return id;
  } else {
    return kInvalidEntityId;
  }
}

EntityId ReadFileTokensFromFile::NthFileTokenId(unsigned token_index) const {
  return NthTokenId(token_index);
}

// Returns `true` if `this` is logically equivalent to `that`.
bool ReadFileTokensFromFile::Equals(const class TokenReader *that_) const {
  if (!dynamic_cast<const ReadFileTokensFromFile *>(that_)) {
    return false;
  } else if (this == that_) {
    return true;
  }

  auto that = that_->OwningFile();
  if (file == that) {
    return true;
  }

  if (!that || that->file_id != file->file_id ||
      that->ep.get() != file->ep.get()) {
    return false;
  }

  return true;
}

const FileImpl *ReadFileTokensFromFile::OwningFile(void) const noexcept {
  return file;
}

}  // namespace mx
