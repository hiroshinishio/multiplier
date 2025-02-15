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
enum class ObjCMethodFamilyAttrSpelling : unsigned char {
  GNU_OBJC_METHOD_FAMILY,
  CXX11_CLANG_OBJC_METHOD_FAMILY,
  C23_CLANG_OBJC_METHOD_FAMILY,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(ObjCMethodFamilyAttrSpelling) {
  return "ObjCMethodFamilyAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(ObjCMethodFamilyAttrSpelling) {
  return 4;
}

MX_EXPORT const char *EnumeratorName(ObjCMethodFamilyAttrSpelling);

} // namespace mx
