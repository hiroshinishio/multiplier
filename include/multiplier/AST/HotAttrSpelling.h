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
enum class HotAttrSpelling : unsigned char {
  GNU_HOT,
  CXX11_GNU_HOT,
  C23_GNU_HOT,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(HotAttrSpelling) {
  return "HotAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(HotAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(HotAttrSpelling);

} // namespace mx
