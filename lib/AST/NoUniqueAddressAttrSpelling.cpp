// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/NoUniqueAddressAttrSpelling.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(NoUniqueAddressAttrSpelling e) {
  switch (e) {
    case NoUniqueAddressAttrSpelling::CXX11_NO_UNIQUE_ADDRESS: return "CXX11_NO_UNIQUE_ADDRESS";
    case NoUniqueAddressAttrSpelling::CXX11_MSVC_NO_UNIQUE_ADDRESS: return "CXX11_MSVC_NO_UNIQUE_ADDRESS";
    case NoUniqueAddressAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
