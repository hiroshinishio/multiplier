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
enum class IBOutletCollectionAttrSpelling : unsigned char {
  GNU_IBOUTLETCOLLECTION,
  CXX11_CLANG_IBOUTLETCOLLECTION,
  C23_CLANG_IBOUTLETCOLLECTION,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(IBOutletCollectionAttrSpelling) {
  return "IBOutletCollectionAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(IBOutletCollectionAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(IBOutletCollectionAttrSpelling);

} // namespace mx
