// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/OSReturnsRetainedAttrSpelling.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(OSReturnsRetainedAttrSpelling e) {
  switch (e) {
    case OSReturnsRetainedAttrSpelling::GNU_OS_RETURNS_RETAINED: return "GNU_OS_RETURNS_RETAINED";
    case OSReturnsRetainedAttrSpelling::CXX11_CLANG_OS_RETURNS_RETAINED: return "CXX11_CLANG_OS_RETURNS_RETAINED";
    case OSReturnsRetainedAttrSpelling::C23_CLANG_OS_RETURNS_RETAINED: return "C23_CLANG_OS_RETURNS_RETAINED";
    case OSReturnsRetainedAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
