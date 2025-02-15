// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/ObjCClassStubAttrSpelling.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(ObjCClassStubAttrSpelling e) {
  switch (e) {
    case ObjCClassStubAttrSpelling::GNU_OBJC_CLASS_STUB: return "GNU_OBJC_CLASS_STUB";
    case ObjCClassStubAttrSpelling::CXX11_CLANG_OBJC_CLASS_STUB: return "CXX11_CLANG_OBJC_CLASS_STUB";
    case ObjCClassStubAttrSpelling::C23_CLANG_OBJC_CLASS_STUB: return "C23_CLANG_OBJC_CLASS_STUB";
    case ObjCClassStubAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
