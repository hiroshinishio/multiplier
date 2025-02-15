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
enum class TypeVisibilityAttrSpelling : unsigned char {
  GNU_TYPE_VISIBILITY,
  CXX11_CLANG_TYPE_VISIBILITY,
  C23_CLANG_TYPE_VISIBILITY,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(TypeVisibilityAttrSpelling) {
  return "TypeVisibilityAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(TypeVisibilityAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(TypeVisibilityAttrSpelling);

} // namespace mx
