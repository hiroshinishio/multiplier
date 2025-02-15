// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "../Compiler.h"

#include <cstdint>

namespace mx {
enum class ObjCDirectMembersAttrSpelling : unsigned char {
  GNU_OBJC_DIRECT_MEMBERS,
  CXX11_CLANG_OBJC_DIRECT_MEMBERS,
  C23_CLANG_OBJC_DIRECT_MEMBERS,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(ObjCDirectMembersAttrSpelling) {
  return "ObjCDirectMembersAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(ObjCDirectMembersAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(ObjCDirectMembersAttrSpelling);

} // namespace mx
