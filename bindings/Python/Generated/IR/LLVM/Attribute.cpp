// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/IR/LLVM/Attribute.h>

#include <multiplier/AST.h>
#include <multiplier/Fragment.h>
#include <multiplier/Frontend.h>
#include <multiplier/Index.h>
#include <multiplier/IR.h>
#include <multiplier/Re2.h>

#include <cassert>
#include <new>

#include "Binding.h"
#include "Error.h"
#include "Types.h"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wc99-extensions"
#pragma GCC diagnostic ignored "-Wunused-function"
namespace {
using T = mx::ir::llvm::Attribute;

struct O final : public ::PyObject {

  // When initialized, points to `backing_storage`.
  T *data{nullptr};

  // Aligned storage for `T`. Pointed to by `data`.
  alignas(alignof(T)) char backing_storage[sizeof(T)];  
};

inline static O *O_cast(void *obj) noexcept {
  return reinterpret_cast<O *>(obj);
}

inline static const O *O_cast(const void *obj) noexcept {
  return reinterpret_cast<const O *>(obj);
}

inline static T *T_cast(void *obj) noexcept {
  return O_cast(obj)->data;
}

inline static const T *T_cast(const void *obj) noexcept {
  return O_cast(obj)->data;
}

}  // namespace
namespace mx {

namespace {
static PyTypeObject *gType = nullptr;
}  // namespace

template <>
PyTypeObject *PythonBinding<T>::type(void) noexcept {
  return gType;
}

template <>
std::optional<T> PythonBinding<T>::from_python(BorrowedPyObject *obj) noexcept {
  if (!obj) {
    return std::nullopt;
  }

  PyTypeObject * const tp = Py_TYPE(obj);
  if (tp < &(gTypes[891]) || tp >= &(gTypes[937])) {
    return std::nullopt;
  }

  return *T_cast(obj);
}

template <>
SharedPyObject *PythonBinding<T>::to_python(T val) noexcept {
  PyTypeObject *tp = nullptr;
  switch (val.kind()) {
    default:
      assert(false);
      tp = gType;
      break;

    case mx::ir::llvm::CConvAttr::static_kind():
      tp = &(gTypes[892]);
      break;

    case mx::ir::llvm::ComdatAttr::static_kind():
      tp = &(gTypes[893]);
      break;

    case mx::ir::llvm::LinkageAttr::static_kind():
      tp = &(gTypes[894]);
      break;

    case mx::ir::llvm::FramePointerKindAttr::static_kind():
      tp = &(gTypes[895]);
      break;

    case mx::ir::llvm::LoopVectorizeAttr::static_kind():
      tp = &(gTypes[896]);
      break;

    case mx::ir::llvm::LoopInterleaveAttr::static_kind():
      tp = &(gTypes[897]);
      break;

    case mx::ir::llvm::LoopUnrollAttr::static_kind():
      tp = &(gTypes[898]);
      break;

    case mx::ir::llvm::LoopUnrollAndJamAttr::static_kind():
      tp = &(gTypes[899]);
      break;

    case mx::ir::llvm::LoopLICMAttr::static_kind():
      tp = &(gTypes[900]);
      break;

    case mx::ir::llvm::LoopDistributeAttr::static_kind():
      tp = &(gTypes[901]);
      break;

    case mx::ir::llvm::LoopPipelineAttr::static_kind():
      tp = &(gTypes[902]);
      break;

    case mx::ir::llvm::LoopPeeledAttr::static_kind():
      tp = &(gTypes[903]);
      break;

    case mx::ir::llvm::LoopUnswitchAttr::static_kind():
      tp = &(gTypes[904]);
      break;

    case mx::ir::llvm::LoopAnnotationAttr::static_kind():
      tp = &(gTypes[905]);
      break;

    case mx::ir::llvm::DIExpressionElemAttr::static_kind():
      tp = &(gTypes[906]);
      break;

    case mx::ir::llvm::DIExpressionAttr::static_kind():
      tp = &(gTypes[907]);
      break;

    case mx::ir::llvm::DINullTypeAttr::static_kind():
      tp = &(gTypes[908]);
      break;

    case mx::ir::llvm::DIBasicTypeAttr::static_kind():
      tp = &(gTypes[909]);
      break;

    case mx::ir::llvm::DICompileUnitAttr::static_kind():
      tp = &(gTypes[910]);
      break;

    case mx::ir::llvm::DICompositeTypeAttr::static_kind():
      tp = &(gTypes[911]);
      break;

    case mx::ir::llvm::DIDerivedTypeAttr::static_kind():
      tp = &(gTypes[912]);
      break;

    case mx::ir::llvm::DIFileAttr::static_kind():
      tp = &(gTypes[913]);
      break;

    case mx::ir::llvm::DIGlobalVariableExpressionAttr::static_kind():
      tp = &(gTypes[914]);
      break;

    case mx::ir::llvm::DIGlobalVariableAttr::static_kind():
      tp = &(gTypes[915]);
      break;

    case mx::ir::llvm::DILexicalBlockAttr::static_kind():
      tp = &(gTypes[916]);
      break;

    case mx::ir::llvm::DILexicalBlockFileAttr::static_kind():
      tp = &(gTypes[917]);
      break;

    case mx::ir::llvm::DILocalVariableAttr::static_kind():
      tp = &(gTypes[918]);
      break;

    case mx::ir::llvm::DISubprogramAttr::static_kind():
      tp = &(gTypes[919]);
      break;

    case mx::ir::llvm::DIModuleAttr::static_kind():
      tp = &(gTypes[920]);
      break;

    case mx::ir::llvm::DINamespaceAttr::static_kind():
      tp = &(gTypes[921]);
      break;

    case mx::ir::llvm::DISubrangeAttr::static_kind():
      tp = &(gTypes[922]);
      break;

    case mx::ir::llvm::DISubroutineTypeAttr::static_kind():
      tp = &(gTypes[923]);
      break;

    case mx::ir::llvm::DILabelAttr::static_kind():
      tp = &(gTypes[924]);
      break;

    case mx::ir::llvm::MemoryEffectsAttr::static_kind():
      tp = &(gTypes[925]);
      break;

    case mx::ir::llvm::AliasScopeDomainAttr::static_kind():
      tp = &(gTypes[926]);
      break;

    case mx::ir::llvm::AliasScopeAttr::static_kind():
      tp = &(gTypes[927]);
      break;

    case mx::ir::llvm::AccessGroupAttr::static_kind():
      tp = &(gTypes[928]);
      break;

    case mx::ir::llvm::TBAARootAttr::static_kind():
      tp = &(gTypes[929]);
      break;

    case mx::ir::llvm::TBAAMemberAttr::static_kind():
      tp = &(gTypes[930]);
      break;

    case mx::ir::llvm::TBAATypeDescriptorAttr::static_kind():
      tp = &(gTypes[931]);
      break;

    case mx::ir::llvm::TBAATagAttr::static_kind():
      tp = &(gTypes[932]);
      break;

    case mx::ir::llvm::VScaleRangeAttr::static_kind():
      tp = &(gTypes[933]);
      break;

    case mx::ir::llvm::TargetFeaturesAttr::static_kind():
      tp = &(gTypes[934]);
      break;

    case mx::ir::llvm::IntegerOverflowFlagsAttr::static_kind():
      tp = &(gTypes[935]);
      break;

    case mx::ir::llvm::FastmathFlagsAttr::static_kind():
      tp = &(gTypes[936]);
      break;

  }
  auto ret = tp->tp_alloc(tp, 0);
  if (auto obj = O_cast(ret)) {
    obj->data = new (obj->backing_storage) T(std::move(val));
  }
  return ret;
}

namespace {
static PyTypeObject *InitType(void) noexcept;
}  // namespace

template <>
bool PythonBinding<T>::load(BorrowedPyObject *module) noexcept {
  if (!gType) {
    gType = InitType();
    if (!gType) {
      return false;
    }
  }

  auto tp_obj = reinterpret_cast<BorrowedPyObject *>(gType);
  if (0 != PyModule_AddObjectRef(module, "Attribute", tp_obj)) {
    return false;
  }

  return true;
}

namespace {
static PyGetSetDef gProperties[] = {
  {}  // Sentinel.
};
}  // namespace

namespace {
static PyMethodDef gMethods[] = {
  {
    "FROM",
    reinterpret_cast<PyCFunction>(
        +[] (BorrowedPyObject *, BorrowedPyObject * const *args, int num_args) -> SharedPyObject * {
          (void) args;
          while (num_args == 1) {
            auto arg_0 = ::mx::from_python<mx::ir::Attribute>(args[0]);
            if (!arg_0.has_value()) {
              break;
            }

            return ::mx::to_python(T::from(arg_0.value()));
          }

          PyErrorStreamer(PyExc_TypeError)
              << "Invalid arguments passed to 'FROM'";
          return nullptr;
        }),
    METH_FASTCALL | METH_STATIC,
    PyDoc_STR("Wrapper for mx::ir::llvm::Attribute::from"),
  },
  {}  // Sentinel.
};
}  // namespace

namespace {

PyTypeObject *InitType(void) noexcept {
  PyTypeObject * const tp = &(gTypes[891]);
  tp->tp_basicsize = sizeof(O);
  tp->tp_itemsize = 0;
  tp->tp_dealloc = [] (::PyObject *obj) {
    if (auto *data = T_cast(obj)) {
      data->~T();
    }
    PyObject_Free(obj);
  };
  tp->tp_name = "multiplier.ir.llvm.Attribute";
  tp->tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_DISALLOW_INSTANTIATION;
  tp->tp_doc = PyDoc_STR("Wrapper for mx::ir::llvm::::Attribute");
  tp->tp_as_number = nullptr;
  tp->tp_as_sequence = nullptr;
  tp->tp_as_mapping = nullptr;
  tp->tp_hash = gTypes[867].tp_hash;
  tp->tp_richcompare = gTypes[867].tp_richcompare;
  tp->tp_iter = nullptr;
  tp->tp_methods = gMethods;
  tp->tp_getset = gProperties;
  tp->tp_base = &(gTypes[867]);
  tp->tp_init = [] (BorrowedPyObject *self, BorrowedPyObject *args, BorrowedPyObject *kwargs) -> int {
    if (kwargs && (!PyMapping_Check(kwargs) || PyMapping_Size(kwargs))) {
      PyErrorStreamer(PyExc_TypeError)
          << "'Attribute.__init__' does not take any keyword arguments";
      return -1;
    }

    if (!args || !PySequence_Check(args)) {
      PyErrorStreamer(PyExc_TypeError)
          << "Invalid positional arguments passed to 'Attribute.__init__'";
      return -1;
    }

    auto obj = O_cast(self);
    auto num_args = PySequence_Size(args);
    
    (void) obj;
    (void) num_args;
    PyErrorStreamer(PyExc_TypeError)
        << "Class 'Attribute' cannot be directly instantiated";
    return -1;

  };
  tp->tp_alloc = PyType_GenericAlloc;
  tp->tp_new = nullptr;

  if (0 != PyType_Ready(tp)) {
    return nullptr;
  }

  return tp;
}

}  // namespace

#pragma GCC diagnostic pop
}  // namespace mx
