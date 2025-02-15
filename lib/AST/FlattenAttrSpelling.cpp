// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/FlattenAttrSpelling.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(FlattenAttrSpelling e) {
  switch (e) {
    case FlattenAttrSpelling::GNU_FLATTEN: return "GNU_FLATTEN";
    case FlattenAttrSpelling::CXX11_GNU_FLATTEN: return "CXX11_GNU_FLATTEN";
    case FlattenAttrSpelling::C23_GNU_FLATTEN: return "C23_GNU_FLATTEN";
    case FlattenAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
