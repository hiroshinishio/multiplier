#
# Copyright (c) 2023-present, Trail of Bits, Inc.
# All rights reserved.
#
# This source code is licensed in accordance with the terms specified in
# the LICENSE file found in the root directory of this source tree.
#

# Auto-generated file; do not modify!

from abc import ABC
from enum import IntEnum
from typing import Generator, Iterable, Mapping, Optional, overload, Sequence, Tuple
import pathlib
import multiplier
import multiplier.ir
import multiplier.ast
import multiplier.ir.abi
import multiplier.ir.llvm
import multiplier.ir.core
import multiplier.ir.meta
import multiplier.frontend
import multiplier.ir.memref
import multiplier.ir.builtin
import multiplier.ir.lowlevel
import multiplier.ir.highlevel
import multiplier.ir.unsupported

class AttributeKind(IntEnum):
  UNKNOWN = 0
  BUILTIN_TYPED = 1
  BUILTIN_ELEMENTS = 2
  BUILTIN_AFFINE_MAP = 3
  BUILTIN_ARRAY = 4
  BUILTIN_DENSE_ARRAY = 5
  BUILTIN_DENSE_INT_OR_FP_ELEMENTS = 6
  BUILTIN_DENSE_STRING_ELEMENTS = 7
  BUILTIN_DENSE_RESOURCE_ELEMENTS = 8
  BUILTIN_DICTIONARY = 9
  BUILTIN_FLOAT = 10
  BUILTIN_INTEGER = 11
  BUILTIN_INTEGER_SET = 12
  BUILTIN_OPAQUE = 13
  BUILTIN_SPARSE_ELEMENTS = 14
  BUILTIN_STRIDED_LAYOUT = 15
  BUILTIN_STRING = 16
  BUILTIN_SYMBOL_REF = 17
  BUILTIN_TYPE = 18
  BUILTIN_UNIT = 19
  BUILTIN_BOOL = 20
  BUILTIN_FLAT_SYMBOL_REF = 21
  BUILTIN_DENSE_INT_ELEMENTS = 22
  LLVM_C_CONV = 23
  LLVM_COMDAT = 24
  LLVM_LINKAGE = 25
  LLVM_FRAME_POINTER_KIND = 26
  LLVM_LOOP_VECTORIZE = 27
  LLVM_LOOP_INTERLEAVE = 28
  LLVM_LOOP_UNROLL = 29
  LLVM_LOOP_UNROLL_AND_JAM = 30
  LLVM_LOOP_LICM = 31
  LLVM_LOOP_DISTRIBUTE = 32
  LLVM_LOOP_PIPELINE = 33
  LLVM_LOOP_PEELED = 34
  LLVM_LOOP_UNSWITCH = 35
  LLVM_LOOP_ANNOTATION = 36
  LLVM_DI_EXPRESSION_ELEM = 37
  LLVM_DI_EXPRESSION = 38
  LLVM_DI_NULL_TYPE = 39
  LLVM_DI_BASIC_TYPE = 40
  LLVM_DI_COMPILE_UNIT = 41
  LLVM_DI_COMPOSITE_TYPE = 42
  LLVM_DI_DERIVED_TYPE = 43
  LLVM_DI_FILE = 44
  LLVM_DI_GLOBAL_VARIABLE_EXPRESSION = 45
  LLVM_DI_GLOBAL_VARIABLE = 46
  LLVM_DI_LEXICAL_BLOCK = 47
  LLVM_DI_LEXICAL_BLOCK_FILE = 48
  LLVM_DI_LOCAL_VARIABLE = 49
  LLVM_DI_SUBPROGRAM = 50
  LLVM_DI_MODULE = 51
  LLVM_DI_NAMESPACE = 52
  LLVM_DI_SUBRANGE = 53
  LLVM_DI_SUBROUTINE_TYPE = 54
  LLVM_DI_LABEL = 55
  LLVM_MEMORY_EFFECTS = 56
  LLVM_ALIAS_SCOPE_DOMAIN = 57
  LLVM_ALIAS_SCOPE = 58
  LLVM_ACCESS_GROUP = 59
  LLVM_TBAA_ROOT = 60
  LLVM_TBAA_MEMBER = 61
  LLVM_TBAA_TYPE_DESCRIPTOR = 62
  LLVM_TBAA_TAG = 63
  LLVM_V_SCALE_RANGE = 64
  LLVM_TARGET_FEATURES = 65
  LLVM_INTEGER_OVERFLOW_FLAGS = 66
  LLVM_FASTMATH_FLAGS = 67
  HL_ANNOTATION = 68
  HL_FORMAT = 69
  HL_SECTION = 70
  HL_ALIAS = 71
  HL_ALIGNED = 72
  HL_ALWAYS_INLINE = 73
  HL_NO_INLINE = 74
  HL_CONST = 75
  HL_LOADER_UNINITIALIZED = 76
  HL_NO_INSTRUMENT_FUNCTION = 77
  HL_PACKED = 78
  HL_PURE = 79
  HL_WARN_UNUSED_RESULT = 80
  HL_RESTRICT = 81
  HL_NO_THROW = 82
  HL_NON_NULL = 83
  HL_LEAF = 84
  HL_COLD = 85
  HL_TRANSPARENT_UNION = 86
  HL_RETURNS_TWICE = 87
  HL_MAY_ALIAS = 88
  HL_UNUSED = 89
  HL_USED = 90
  HL_GNU_INLINE = 91
  HL_NO_CF_CHECK = 92
  HL_AVAILABLE_ONLY_IN_DEFAULT_EVAL_METHOD = 93
  HL_AVAILABILITY_ATTR = 94
  HL_ASM_LABEL = 95
  HL_MODE = 96
  HL_BUILTIN = 97
  HL_ALLOC_ALIGN = 98
  HL_ALLOC_SIZE = 99
  HL_DEPRECATED = 100
  HL_MAX_FIELD_ALIGNMENT = 101
  HL_CV_QUALIFIERS = 102
  HL_UCV_QUALIFIERS = 103
  HL_CVR_QUALIFIERS = 104
  HL_OFFSET_OF_NODE = 105
  CORE_BOOLEAN = 106
  CORE_INTEGER = 107
  CORE_FLOAT = 108
  CORE_VOID = 109
  CORE_SOURCE_LANGUAGE = 110
  CORE_GLOBAL_LINKAGE_KIND = 111
  META_IDENTIFIER = 112

class ValueKind(IntEnum):
  OPERATION_RESULT = 0
  BLOCK_ARGUMENT = 1

class OperationKind(IntEnum):
  UNKNOWN = 0
  BUILTIN_MODULE = 1
  BUILTIN_UNREALIZED_CONVERSION_CAST = 2
  LLVM_ASHR = 3
  LLVM_ADD = 4
  LLVM_ADDRSPACECAST = 5
  LLVM_MLIR_ADDRESSOF = 6
  LLVM_ALLOCA = 7
  LLVM_AND = 8
  LLVM_CMPXCHG = 9
  LLVM_ATOMICRMW = 10
  LLVM_BITCAST = 11
  LLVM_BR = 12
  LLVM_CALL_INTRINSIC = 13
  LLVM_CALL = 14
  LLVM_COMDAT = 15
  LLVM_COMDAT_SELECTOR = 16
  LLVM_COND_BR = 17
  LLVM_MLIR_CONSTANT = 18
  LLVM_EXTRACTELEMENT = 19
  LLVM_EXTRACTVALUE = 20
  LLVM_FADD = 21
  LLVM_FCMP = 22
  LLVM_FDIV = 23
  LLVM_FMUL = 24
  LLVM_FNEG = 25
  LLVM_FPEXT = 26
  LLVM_FPTOSI = 27
  LLVM_FPTOUI = 28
  LLVM_FPTRUNC = 29
  LLVM_FREM = 30
  LLVM_FSUB = 31
  LLVM_FENCE = 32
  LLVM_FREEZE = 33
  LLVM_GETELEMENTPTR = 34
  LLVM_MLIR_GLOBAL_CTORS = 35
  LLVM_MLIR_GLOBAL_DTORS = 36
  LLVM_MLIR_GLOBAL = 37
  LLVM_ICMP = 38
  LLVM_INLINE_ASM = 39
  LLVM_INSERTELEMENT = 40
  LLVM_INSERTVALUE = 41
  LLVM_INTTOPTR = 42
  LLVM_INVOKE = 43
  LLVM_FUNC = 44
  LLVM_LSHR = 45
  LLVM_LANDINGPAD = 46
  LLVM_LINKER_OPTIONS = 47
  LLVM_LOAD = 48
  LLVM_MUL = 49
  LLVM_MLIR_NONE = 50
  LLVM_OR = 51
  LLVM_MLIR_POISON = 52
  LLVM_PTRTOINT = 53
  LLVM_RESUME = 54
  LLVM_RETURN = 55
  LLVM_SDIV = 56
  LLVM_SEXT = 57
  LLVM_SITOFP = 58
  LLVM_SREM = 59
  LLVM_SELECT = 60
  LLVM_SHL = 61
  LLVM_SHUFFLEVECTOR = 62
  LLVM_STORE = 63
  LLVM_SUB = 64
  LLVM_SWITCH = 65
  LLVM_TRUNC = 66
  LLVM_UDIV = 67
  LLVM_UITOFP = 68
  LLVM_UREM = 69
  LLVM_MLIR_UNDEF = 70
  LLVM_UNREACHABLE = 71
  LLVM_XOR = 72
  LLVM_ZEXT = 73
  LLVM_MLIR_ZERO = 74
  LLVM_INTR_ABS = 75
  LLVM_INTR_ANNOTATION = 76
  LLVM_INTR_ASSUME = 77
  LLVM_INTR_BITREVERSE = 78
  LLVM_INTR_BSWAP = 79
  LLVM_INTR_COPYSIGN = 80
  LLVM_INTR_CORO_ALIGN = 81
  LLVM_INTR_CORO_BEGIN = 82
  LLVM_INTR_CORO_END = 83
  LLVM_INTR_CORO_FREE = 84
  LLVM_INTR_CORO_ID = 85
  LLVM_INTR_CORO_PROMISE = 86
  LLVM_INTR_CORO_RESUME = 87
  LLVM_INTR_CORO_SAVE = 88
  LLVM_INTR_CORO_SIZE = 89
  LLVM_INTR_CORO_SUSPEND = 90
  LLVM_INTR_COS = 91
  LLVM_INTR_CTLZ = 92
  LLVM_INTR_CTTZ = 93
  LLVM_INTR_CTPOP = 94
  LLVM_INTR_DBG_DECLARE = 95
  LLVM_INTR_DBG_LABEL = 96
  LLVM_INTR_DBG_VALUE = 97
  LLVM_INTR_DEBUGTRAP = 98
  LLVM_INTR_EH_TYPEID_FOR = 99
  LLVM_INTR_EXP2 = 100
  LLVM_INTR_EXP = 101
  LLVM_INTR_EXPECT = 102
  LLVM_INTR_EXPECT_WITH_PROBABILITY = 103
  LLVM_INTR_FABS = 104
  LLVM_INTR_CEIL = 105
  LLVM_INTR_FLOOR = 106
  LLVM_INTR_FMA = 107
  LLVM_INTR_FMULADD = 108
  LLVM_INTR_TRUNC = 109
  LLVM_INTR_FSHL = 110
  LLVM_INTR_FSHR = 111
  LLVM_INTR_GET_ACTIVE_LANE_MASK = 112
  LLVM_INTR_INVARIANT_END = 113
  LLVM_INTR_INVARIANT_START = 114
  LLVM_INTR_IS_CONSTANT = 115
  LLVM_INTR_IS_FPCLASS = 116
  LLVM_INTR_LIFETIME_END = 117
  LLVM_INTR_LIFETIME_START = 118
  LLVM_INTR_LLRINT = 119
  LLVM_INTR_LLROUND = 120
  LLVM_INTR_LOG10 = 121
  LLVM_INTR_LOG2 = 122
  LLVM_INTR_LOG = 123
  LLVM_INTR_LRINT = 124
  LLVM_INTR_LROUND = 125
  LLVM_INTR_MASKED_LOAD = 126
  LLVM_INTR_MASKED_STORE = 127
  LLVM_INTR_MATRIX_COLUMN_MAJOR_LOAD = 128
  LLVM_INTR_MATRIX_COLUMN_MAJOR_STORE = 129
  LLVM_INTR_MATRIX_MULTIPLY = 130
  LLVM_INTR_MATRIX_TRANSPOSE = 131
  LLVM_INTR_MAXNUM = 132
  LLVM_INTR_MAXIMUM = 133
  LLVM_INTR_MEMCPY_INLINE = 134
  LLVM_INTR_MEMCPY = 135
  LLVM_INTR_MEMMOVE = 136
  LLVM_INTR_MEMSET = 137
  LLVM_INTR_MINNUM = 138
  LLVM_INTR_MINIMUM = 139
  LLVM_INTR_NEARBYINT = 140
  LLVM_INTR_EXPERIMENTAL_NOALIAS_SCOPE_DECL = 141
  LLVM_INTR_POWI = 142
  LLVM_INTR_POW = 143
  LLVM_INTR_PREFETCH = 144
  LLVM_INTR_PTR_ANNOTATION = 145
  LLVM_INTR_RINT = 146
  LLVM_INTR_ROUNDEVEN = 147
  LLVM_INTR_ROUND = 148
  LLVM_INTR_SADD_SAT = 149
  LLVM_INTR_SADD_WITH_OVERFLOW = 150
  LLVM_INTR_SMAX = 151
  LLVM_INTR_SMIN = 152
  LLVM_INTR_SMUL_WITH_OVERFLOW = 153
  LLVM_INTR_SSA_COPY = 154
  LLVM_INTR_SSHL_SAT = 155
  LLVM_INTR_SSUB_SAT = 156
  LLVM_INTR_SSUB_WITH_OVERFLOW = 157
  LLVM_INTR_SIN = 158
  LLVM_INTR_SQRT = 159
  LLVM_INTR_STACKRESTORE = 160
  LLVM_INTR_STACKSAVE = 161
  LLVM_INTR_EXPERIMENTAL_STEPVECTOR = 162
  LLVM_INTR_THREADLOCAL_ADDRESS = 163
  LLVM_INTR_TRAP = 164
  LLVM_INTR_UADD_SAT = 165
  LLVM_INTR_UADD_WITH_OVERFLOW = 166
  LLVM_INTR_UBSANTRAP = 167
  LLVM_INTR_UMAX = 168
  LLVM_INTR_UMIN = 169
  LLVM_INTR_UMUL_WITH_OVERFLOW = 170
  LLVM_INTR_USHL_SAT = 171
  LLVM_INTR_USUB_SAT = 172
  LLVM_INTR_USUB_WITH_OVERFLOW = 173
  LLVM_INTR_VP_ASHR = 174
  LLVM_INTR_VP_ADD = 175
  LLVM_INTR_VP_AND = 176
  LLVM_INTR_VP_FADD = 177
  LLVM_INTR_VP_FDIV = 178
  LLVM_INTR_VP_FMULADD = 179
  LLVM_INTR_VP_FMUL = 180
  LLVM_INTR_VP_FNEG = 181
  LLVM_INTR_VP_FPEXT = 182
  LLVM_INTR_VP_FPTOSI = 183
  LLVM_INTR_VP_FPTOUI = 184
  LLVM_INTR_VP_FPTRUNC = 185
  LLVM_INTR_VP_FREM = 186
  LLVM_INTR_VP_FSUB = 187
  LLVM_INTR_VP_FMA = 188
  LLVM_INTR_VP_INTTOPTR = 189
  LLVM_INTR_VP_LSHR = 190
  LLVM_INTR_VP_LOAD = 191
  LLVM_INTR_VP_MERGE = 192
  LLVM_INTR_VP_MUL = 193
  LLVM_INTR_VP_OR = 194
  LLVM_INTR_VP_PTRTOINT = 195
  LLVM_INTR_VP_REDUCE_ADD = 196
  LLVM_INTR_VP_REDUCE_AND = 197
  LLVM_INTR_VP_REDUCE_FADD = 198
  LLVM_INTR_VP_REDUCE_FMAX = 199
  LLVM_INTR_VP_REDUCE_FMIN = 200
  LLVM_INTR_VP_REDUCE_FMUL = 201
  LLVM_INTR_VP_REDUCE_MUL = 202
  LLVM_INTR_VP_REDUCE_OR = 203
  LLVM_INTR_VP_REDUCE_SMAX = 204
  LLVM_INTR_VP_REDUCE_SMIN = 205
  LLVM_INTR_VP_REDUCE_UMAX = 206
  LLVM_INTR_VP_REDUCE_UMIN = 207
  LLVM_INTR_VP_REDUCE_XOR = 208
  LLVM_INTR_VP_SDIV = 209
  LLVM_INTR_VP_SEXT = 210
  LLVM_INTR_VP_SITOFP = 211
  LLVM_INTR_VP_SREM = 212
  LLVM_INTR_VP_SELECT = 213
  LLVM_INTR_VP_SHL = 214
  LLVM_INTR_VP_STORE = 215
  LLVM_INTR_EXPERIMENTAL_VP_STRIDED_LOAD = 216
  LLVM_INTR_EXPERIMENTAL_VP_STRIDED_STORE = 217
  LLVM_INTR_VP_SUB = 218
  LLVM_INTR_VP_TRUNC = 219
  LLVM_INTR_VP_UDIV = 220
  LLVM_INTR_VP_UITOFP = 221
  LLVM_INTR_VP_UREM = 222
  LLVM_INTR_VP_XOR = 223
  LLVM_INTR_VP_ZEXT = 224
  LLVM_INTR_VACOPY = 225
  LLVM_INTR_VAEND = 226
  LLVM_INTR_VASTART = 227
  LLVM_INTR_VAR_ANNOTATION = 228
  LLVM_INTR_MASKED_COMPRESSSTORE = 229
  LLVM_INTR_MASKED_EXPANDLOAD = 230
  LLVM_INTR_MASKED_GATHER = 231
  LLVM_INTR_MASKED_SCATTER = 232
  LLVM_INTR_VECTOR_EXTRACT = 233
  LLVM_INTR_VECTOR_INSERT = 234
  LLVM_INTR_VECTOR_REDUCE_ADD = 235
  LLVM_INTR_VECTOR_REDUCE_AND = 236
  LLVM_INTR_VECTOR_REDUCE_FADD = 237
  LLVM_INTR_VECTOR_REDUCE_FMAX = 238
  LLVM_INTR_VECTOR_REDUCE_FMAXIMUM = 239
  LLVM_INTR_VECTOR_REDUCE_FMIN = 240
  LLVM_INTR_VECTOR_REDUCE_FMINIMUM = 241
  LLVM_INTR_VECTOR_REDUCE_FMUL = 242
  LLVM_INTR_VECTOR_REDUCE_MUL = 243
  LLVM_INTR_VECTOR_REDUCE_OR = 244
  LLVM_INTR_VECTOR_REDUCE_SMAX = 245
  LLVM_INTR_VECTOR_REDUCE_SMIN = 246
  LLVM_INTR_VECTOR_REDUCE_UMAX = 247
  LLVM_INTR_VECTOR_REDUCE_UMIN = 248
  LLVM_INTR_VECTOR_REDUCE_XOR = 249
  LLVM_INTR_VSCALE = 250
  MEMREF_ASSUME_ALIGNMENT = 251
  MEMREF_ATOMIC_RMW = 252
  MEMREF_ATOMIC_YIELD = 253
  MEMREF_COPY = 254
  MEMREF_GENERIC_ATOMIC_RMW = 255
  MEMREF_LOAD = 256
  MEMREF_ALLOC = 257
  MEMREF_ALLOCA = 258
  MEMREF_ALLOCA_SCOPE = 259
  MEMREF_ALLOCA_SCOPE_RETURN = 260
  MEMREF_CAST = 261
  MEMREF_COLLAPSE_SHAPE = 262
  MEMREF_DEALLOC = 263
  MEMREF_DIM = 264
  MEMREF_DMA_START = 265
  MEMREF_DMA_WAIT = 266
  MEMREF_EXPAND_SHAPE = 267
  MEMREF_EXTRACT_ALIGNED_POINTER_AS_INDEX = 268
  MEMREF_EXTRACT_STRIDED_METADATA = 269
  MEMREF_GET_GLOBAL = 270
  MEMREF_GLOBAL = 271
  MEMREF_MEMORY_SPACE_CAST = 272
  MEMREF_PREFETCH = 273
  MEMREF_RANK = 274
  MEMREF_REALLOC = 275
  MEMREF_REINTERPRET_CAST = 276
  MEMREF_RESHAPE = 277
  MEMREF_STORE = 278
  MEMREF_TRANSPOSE = 279
  MEMREF_VIEW = 280
  MEMREF_SUBVIEW = 281
  ABI_CALL_ARGS = 282
  ABI_CALL_EXEC = 283
  ABI_CALL = 284
  ABI_CALL_RETS = 285
  ABI_DIRECT = 286
  ABI_EPILOGUE = 287
  ABI_FUNC = 288
  ABI_INDIRECT = 289
  ABI_PROLOGUE = 290
  ABI_RET_DIRECT = 291
  ABI_YIELD = 292
  LL_ALLOCA = 293
  LL_ARG_ALLOCA = 294
  LL_BR = 295
  LL_CONCAT = 296
  LL_COND_BR = 297
  LL_COND_SCOPE_RET = 298
  LL_EXTRACT = 299
  LL_INITIALIZE = 300
  LL_INLINE_SCOPE = 301
  LL_LOAD = 302
  LL_FUNC = 303
  LL_GEP = 304
  LL_RETURN = 305
  LL_SCOPE = 306
  LL_SCOPE_RECURSE = 307
  LL_SCOPE_RET = 308
  LL_STORE = 309
  LL_SUBSCRIPT = 310
  LL_UNINITIALIZED_VAR = 311
  HL_ACCESS = 312
  HL_ASSIGN_FADD = 313
  HL_FADD = 314
  HL_ASSIGN_ADD = 315
  HL_ADD = 316
  HL_LABELADDR = 317
  HL_ADDRESSOF = 318
  HL_ALIGNOF_EXPR = 319
  HL_ALIGNOF_TYPE = 320
  HL_ASM = 321
  HL_ASSIGN = 322
  HL_ASSIGN_BIN_ASHR = 323
  HL_BIN_ASHR = 324
  HL_ASSIGN_BIN_AND = 325
  HL_BIN_AND = 326
  HL_BIN_COMMA = 327
  HL_BIN_LAND = 328
  HL_BIN_LOR = 329
  HL_ASSIGN_BIN_LSHR = 330
  HL_BIN_LSHR = 331
  HL_ASSIGN_BIN_OR = 332
  HL_BIN_OR = 333
  HL_ASSIGN_BIN_SHL = 334
  HL_BIN_SHL = 335
  HL_ASSIGN_BIN_XOR = 336
  HL_BIN_XOR = 337
  HL_BUILTIN_BITCAST = 338
  HL_CSTYLE_CAST = 339
  HL_CALL = 340
  HL_CLASS = 341
  HL_CMP = 342
  HL_COMPOUND_LITERAL = 343
  HL_CONST = 344
  HL_BASE = 345
  HL_CXXSTRUCT = 346
  HL_REF = 347
  HL_DEREF = 348
  HL_ASSIGN_FDIV = 349
  HL_FDIV = 350
  HL_ASSIGN_SDIV = 351
  HL_SDIV = 352
  HL_ASSIGN_UDIV = 353
  HL_UDIV = 354
  HL_ENUM_CONST = 355
  HL_ENUM = 356
  HL_ENUMREF = 357
  HL_EXPR = 358
  HL_GNU_EXTENSION = 359
  HL_FCMP = 360
  HL_FIELD = 361
  HL_FUNCREF = 362
  HL_GLOBREF = 363
  HL_BINARY_COND = 364
  HL_BREAK = 365
  HL_CASE = 366
  HL_COND = 367
  HL_COND_YIELD = 368
  HL_CONTINUE = 369
  HL_DEFAULT = 370
  HL_DO = 371
  HL_EMPTY_DECL = 372
  HL_FOR = 373
  HL_FUNC = 374
  HL_GOTO = 375
  HL_IF = 376
  HL_INDIRECT_GOTO = 377
  HL_LABEL_DECL = 378
  HL_LABEL = 379
  HL_SKIP = 380
  HL_SWITCH = 381
  HL_TYPE_YIELD = 382
  HL_VALUE_YIELD = 383
  HL_VAR = 384
  HL_WHILE = 385
  HL_IMAG = 386
  HL_IMPLICIT_CAST = 387
  HL_INDIRECT_CALL = 388
  HL_INITLIST = 389
  HL_CONST_INIT = 390
  HL_LNOT = 391
  HL_MINUS = 392
  HL_ASSIGN_FMUL = 393
  HL_FMUL = 394
  HL_ASSIGN_MUL = 395
  HL_MUL = 396
  HL_NOT = 397
  HL_OFFSETOF_EXPR = 398
  HL_OPAQUE_EXPR = 399
  HL_PLUS = 400
  HL_POST_DEC = 401
  HL_POST_INC = 402
  HL_PRE_DEC = 403
  HL_PRE_INC = 404
  HL_PREDEFINED_EXPR = 405
  HL_PREFERRED_ALIGNOF_EXPR = 406
  HL_PREFERRED_ALIGNOF_TYPE = 407
  HL_REAL = 408
  HL_MEMBER = 409
  HL_ASSIGN_FREM = 410
  HL_FREM = 411
  HL_ASSIGN_SREM = 412
  HL_SREM = 413
  HL_ASSIGN_UREM = 414
  HL_UREM = 415
  HL_RETURN = 416
  HL_SIZEOF_EXPR = 417
  HL_SIZEOF_TYPE = 418
  HL_STMT_EXPR = 419
  HL_STRUCT = 420
  HL_ASSIGN_FSUB = 421
  HL_FSUB = 422
  HL_ASSIGN_SUB = 423
  HL_SUB = 424
  HL_SUBSCRIPT = 425
  HL_THIS = 426
  HL_TRANSLATION_UNIT = 427
  HL_ALIAS = 428
  HL_TYPE = 429
  HL_TYPEDEF = 430
  HL_TYPEOF_EXPR = 431
  HL_UNION = 432
  HL_UNREACHABLE = 433
  HL_VA_ARG_EXPR = 434
  CORE_BIN_LAND = 435
  CORE_BIN_LOR = 436
  CORE_IMPLICIT_RETURN = 437
  CORE_LAZY_OP = 438
  CORE_SCOPE = 439
  CORE_SELECT = 440
  UNSUP_DECL = 441
  UNSUP_STMT = 442

class BasicBlockOrder(IntEnum):
  PRE_ORDER = 0
  POST_ORDER = 1

class TypeKind(IntEnum):
  UNKNOWN = 0
  BUILTIN_SHAPED = 1
  BUILTIN_FLOAT = 2
  BUILTIN_COMPLEX = 3
  BUILTIN_FLOAT8_E5_M2 = 4
  BUILTIN_FLOAT8_E4_M3_FN = 5
  BUILTIN_FLOAT8_E5_M2_FNUZ = 6
  BUILTIN_FLOAT8_E4_M3_FNUZ = 7
  BUILTIN_FLOAT8_E4_M3_B11_FNUZ = 8
  BUILTIN_B_FLOAT16 = 9
  BUILTIN_FLOAT16 = 10
  BUILTIN_FLOAT_TF32 = 11
  BUILTIN_FLOAT32 = 12
  BUILTIN_FLOAT64 = 13
  BUILTIN_FLOAT80 = 14
  BUILTIN_FLOAT128 = 15
  BUILTIN_FUNCTION = 16
  BUILTIN_INDEX = 17
  BUILTIN_INTEGER = 18
  BUILTIN_MEM_REF = 19
  BUILTIN_NONE = 20
  BUILTIN_OPAQUE = 21
  BUILTIN_RANKED_TENSOR = 22
  BUILTIN_TUPLE = 23
  BUILTIN_UNRANKED_MEM_REF = 24
  BUILTIN_UNRANKED_TENSOR = 25
  BUILTIN_VECTOR = 26
  LLVM_ARRAY = 27
  LLVM_FUNCTION = 28
  LLVM_POINTER = 29
  LLVM_FIXED_VECTOR = 30
  LLVM_SCALABLE_VECTOR = 31
  LLVM_TARGET_EXT = 32
  HL_RECORD = 33
  HL_ENUM = 34
  HL_TYPEDEF = 35
  HL_ELABORATED = 36
  HL_LABEL = 37
  HL_PAREN = 38
  HL_L_VALUE = 39
  HL_R_VALUE = 40
  HL_VOID = 41
  HL_BOOL = 42
  HL_CHAR = 43
  HL_SHORT = 44
  HL_INT = 45
  HL_LONG = 46
  HL_LONG_LONG = 47
  HL_INT128 = 48
  HL_HALF = 49
  HL_B_FLOAT16 = 50
  HL_FLOAT = 51
  HL_DOUBLE = 52
  HL_LONG_DOUBLE = 53
  HL_FLOAT128 = 54
  HL_COMPLEX = 55
  HL_POINTER = 56
  HL_ARRAY = 57
  HL_VECTOR = 58
  HL_DECAYED = 59
  HL_ATTRIBUTED = 60
  HL_ADJUSTED = 61
  HL_REFERENCE = 62
  HL_TYPE_OF_EXPR = 63
  HL_TYPE_OF_TYPE = 64
  HL_AUTO = 65
  HL_ATOMIC = 66
  CORE_FUNCTION = 67
  UNSUP_UNSUPPORTED = 68

class Attribute(object):
  kind: multiplier.ir.AttributeKind

class Value(object):
  kind: multiplier.ir.ValueKind
  type: multiplier.ir.Type
  uses: Iterable[multiplier.ir.Operand]

class Argument(multiplier.ir.Value):
  index: int

  @staticmethod
  def static_kind() -> multiplier.ir.ValueKind:
    ...

  @staticmethod
  def FROM(val: multiplier.ir.Value) -> Optional[multiplier.ir.Argument]:
    ...

class Result(multiplier.ir.Value):
  operation: multiplier.ir.Operation
  index: int

  @staticmethod
  def static_kind() -> multiplier.ir.ValueKind:
    ...

  @staticmethod
  def of(arg_0: multiplier.ir.Operation) -> Optional[multiplier.ir.Result]:
    ...

  @staticmethod
  def FROM(arg_0: multiplier.ir.Value) -> Optional[multiplier.ir.Result]:
    ...

class Block(object):
  num_arguments: int
  arguments: Iterable[multiplier.ir.Argument]
  operations: Iterable[multiplier.ir.Operation]
  reverse_operations: Iterable[multiplier.ir.Operation]
  uses: Iterable[multiplier.ir.Label]
  terminator: multiplier.ir.Operation

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Argument) -> multiplier.ir.Block:
    ...

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Operation) -> Optional[multiplier.ir.Block]:
    ...

  def nth_argument(self, arg_0: int) -> Optional[multiplier.ir.Argument]:
    ...

class Label(object):
  operation: multiplier.ir.Operation
  block: multiplier.ir.Block
  index: int

class Operation(multiplier.Entity):
  kind_name: str
  kind: multiplier.ir.OperationKind
  num_operands: int
  operands: Iterable[multiplier.ir.Operand]
  num_results: int
  results: Iterable[multiplier.ir.Result]
  num_regions: int
  regions: Iterable[multiplier.ir.Region]
  only_region: Optional[multiplier.ir.Region]
  only_region_blocks: Iterable[multiplier.ir.Block]
  uses: Iterable[multiplier.ir.Operand]
  previous: Optional[multiplier.ir.Operation]
  next: Optional[multiplier.ir.Operation]
  is_terminator: bool
  defined_symbol: Optional[multiplier.ir.Symbol]

  @staticmethod
  def classify(arg_0: str) -> multiplier.ir.OperationKind:
    ...

  @overload
  @staticmethod
  def producing(val: multiplier.ir.Result) -> multiplier.ir.Operation:
    ...

  @overload
  @staticmethod
  def producing(val: multiplier.ir.Value) -> Optional[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Region) -> multiplier.ir.Operation:
    ...

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Block) -> multiplier.ir.Operation:
    ...

  @overload
  @staticmethod
  def first_from(that: multiplier.ast.Decl) -> Optional[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def first_from(that: multiplier.ast.Decl, arg_1: multiplier.ir.OperationKind) -> Optional[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def first_from(that: multiplier.ast.Stmt) -> Optional[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def first_from(that: multiplier.ast.Stmt, arg_1: multiplier.ir.OperationKind) -> Optional[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def all_from(that: multiplier.ast.Decl) -> Iterable[multiplier.ir.Operation]:
    ...

  @overload
  @staticmethod
  def all_from(that: multiplier.ast.Stmt) -> Iterable[multiplier.ir.Operation]:
    ...

  @staticmethod
  def defining(symbol: multiplier.ir.Symbol) -> multiplier.ir.Operation:
    ...

  def nth_operand(self, arg_0: int) -> Optional[multiplier.ir.Operand]:
    ...

  def nth_result(self, arg_0: int) -> Optional[multiplier.ir.Result]:
    ...

  def nth_region(self, arg_0: int) -> Optional[multiplier.ir.Region]:
    ...

class Operand(object):
  operation: multiplier.ir.Operation
  index: int
  value: multiplier.ir.Value

class Symbol(object):
  operation: multiplier.ir.Operation
  name: str
  references: Iterable[multiplier.ir.Operation]

  @staticmethod
  def FROM(arg_0: multiplier.ir.Operation) -> Optional[multiplier.ir.Symbol]:
    ...

class Region(object):
  num_blocks: int
  blocks: Iterable[multiplier.ir.Block]
  reverse_blocks: Iterable[multiplier.ir.Block]
  entry_block: multiplier.ir.Block
  num_entry_block_arguments: int
  entry_block_arguments: Iterable[multiplier.ir.Argument]

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Block) -> multiplier.ir.Region:
    ...

  @overload
  @staticmethod
  def containing(arg_0: multiplier.ir.Operation) -> Optional[multiplier.ir.Region]:
    ...

  def nth_block(self, arg_0: int) -> Optional[multiplier.ir.Block]:
    ...

  def nth_entry_block_argument(self, arg_0: int) -> Optional[multiplier.ir.Argument]:
    ...

class Type(object):
  kind: multiplier.ir.TypeKind
