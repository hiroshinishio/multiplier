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
enum class OSReturnsRetainedAttrSpelling : unsigned char {
  GNU_OS_RETURNS_RETAINED,
  CXX11_CLANG_OS_RETURNS_RETAINED,
  C23_CLANG_OS_RETURNS_RETAINED,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(OSReturnsRetainedAttrSpelling) {
  return "OSReturnsRetainedAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(OSReturnsRetainedAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(OSReturnsRetainedAttrSpelling);

} // namespace mx
