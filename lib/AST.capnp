# Copyright (c) 2022-present, Trail of Bits, Inc.
# All rights reserved.
#
# This source code is licensed in accordance with the terms specified in
# the LICENSE file found in the root directory of this source tree.

# Auto-generated file; do not modify!

@0xa04be7b45e95b659;

using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("mx::ast");

struct Decl @0xfb5879761ffaedb6{
  val4 @0 :UInt8;
  val7 @1 :UInt8;
  val10 @2 :UInt8;
  val33 @3 :UInt8;
  val34 @4 :UInt8;
  val54 @5 :UInt8;
  val58 @6 :UInt8;
  val59 @7 :UInt8;
  val69 @8 :UInt8;
  val73 @9 :UInt8;
  val74 @10 :UInt8;
  val75 @11 :UInt8;
  val76 @12 :UInt8;
  val77 @13 :UInt8;
  val114 @14 :UInt8;
  val150 @15 :UInt8;
  val3 @16 :List(UInt64);
  val40 @17 :List(UInt64);
  val41 @18 :List(UInt64);
  val51 @19 :List(UInt64);
  val147 @20 :List(UInt64);
  val162 @21 :List(UInt64);
  val167 @22 :List(UInt64);
  val171 @23 :List(UInt64);
  val323 @24 :List(UInt64);
  val334 @25 :List(UInt64);
  val341 @26 :List(UInt64);
  val342 @27 :List(UInt64);
  val343 @28 :List(UInt64);
  val344 @29 :List(UInt64);
  val345 @30 :List(UInt64);
  val346 @31 :List(UInt64);
  val52 @32 :Text;
  val53 @33 :Text;
  val0 @34 :UInt64;
  val1 @35 :UInt64;
  val5 @36 :UInt64;
  val6 @37 :UInt64;
  val11 @38 :UInt64;
  val35 @39 :UInt64;
  val36 @40 :UInt64;
  val37 @41 :UInt64;
  val38 @42 :UInt64;
  val45 @43 :UInt64;
  val46 @44 :UInt64;
  val47 @45 :UInt64;
  val55 @46 :UInt64;
  val56 @47 :UInt64;
  val57 @48 :UInt64;
  val67 @49 :UInt64;
  val68 @50 :UInt64;
  val70 @51 :UInt64;
  val71 @52 :UInt64;
  val72 @53 :UInt64;
  val110 @54 :UInt64;
  val111 @55 :UInt64;
  val112 @56 :UInt64;
  val113 @57 :UInt64;
  val115 @58 :UInt64;
  val116 @59 :UInt64;
  val146 @60 :UInt64;
  val148 @61 :UInt64;
  val149 @62 :UInt64;
  val151 @63 :UInt64;
  val163 @64 :UInt64;
  val164 @65 :UInt64;
  val338 @66 :UInt64;
  val339 @67 :UInt64;
  val2 @68 :Bool;
  val9 @69 :Bool;
  val12 @70 :Bool;
  val13 @71 :Bool;
  val14 @72 :Bool;
  val15 @73 :Bool;
  val16 @74 :Bool;
  val17 @75 :Bool;
  val18 @76 :Bool;
  val19 @77 :Bool;
  val20 @78 :Bool;
  val21 @79 :Bool;
  val22 @80 :Bool;
  val23 @81 :Bool;
  val24 @82 :Bool;
  val25 @83 :Bool;
  val26 @84 :Bool;
  val27 @85 :Bool;
  val28 @86 :Bool;
  val29 @87 :Bool;
  val30 @88 :Bool;
  val31 @89 :Bool;
  val32 @90 :Bool;
  val39 @91 :Bool;
  val42 @92 :Bool;
  val43 @93 :Bool;
  val44 @94 :Bool;
  val48 @95 :Bool;
  val49 @96 :Bool;
  val50 @97 :Bool;
  val60 @98 :Bool;
  val61 @99 :Bool;
  val62 @100 :Bool;
  val63 @101 :Bool;
  val64 @102 :Bool;
  val65 @103 :Bool;
  val66 @104 :Bool;
  val78 @105 :Bool;
  val79 @106 :Bool;
  val80 @107 :Bool;
  val81 @108 :Bool;
  val82 @109 :Bool;
  val83 @110 :Bool;
  val84 @111 :Bool;
  val85 @112 :Bool;
  val86 @113 :Bool;
  val87 @114 :Bool;
  val88 @115 :Bool;
  val89 @116 :Bool;
  val90 @117 :Bool;
  val91 @118 :Bool;
  val92 @119 :Bool;
  val93 @120 :Bool;
  val94 @121 :Bool;
  val95 @122 :Bool;
  val96 @123 :Bool;
  val97 @124 :Bool;
  val98 @125 :Bool;
  val99 @126 :Bool;
  val100 @127 :Bool;
  val101 @128 :Bool;
  val102 @129 :Bool;
  val103 @130 :Bool;
  val104 @131 :Bool;
  val105 @132 :Bool;
  val106 @133 :Bool;
  val107 @134 :Bool;
  val108 @135 :Bool;
  val109 @136 :Bool;
  val117 @137 :Bool;
  val118 @138 :Bool;
  val119 @139 :Bool;
  val120 @140 :Bool;
  val121 @141 :Bool;
  val122 @142 :Bool;
  val123 @143 :Bool;
  val124 @144 :Bool;
  val125 @145 :Bool;
  val126 @146 :Bool;
  val127 @147 :Bool;
  val128 @148 :Bool;
  val129 @149 :Bool;
  val130 @150 :Bool;
  val131 @151 :Bool;
  val132 @152 :Bool;
  val133 @153 :Bool;
  val134 @154 :Bool;
  val135 @155 :Bool;
  val136 @156 :Bool;
  val137 @157 :Bool;
  val138 @158 :Bool;
  val139 @159 :Bool;
  val140 @160 :Bool;
  val141 @161 :Bool;
  val142 @162 :Bool;
  val143 @163 :Bool;
  val144 @164 :Bool;
  val145 @165 :Bool;
  val152 @166 :Bool;
  val153 @167 :Bool;
  val154 @168 :Bool;
  val155 @169 :Bool;
  val156 @170 :Bool;
  val157 @171 :Bool;
  val158 @172 :Bool;
  val159 @173 :Bool;
  val160 @174 :Bool;
  val161 @175 :Bool;
  val165 @176 :Bool;
  val166 @177 :Bool;
  val168 @178 :Bool;
  val169 @179 :Bool;
  val170 @180 :Bool;
  val173 @181 :Bool;
  val174 @182 :Bool;
  val175 @183 :Bool;
  val176 @184 :Bool;
  val177 @185 :Bool;
  val178 @186 :Bool;
  val179 @187 :Bool;
  val180 @188 :Bool;
  val181 @189 :Bool;
  val182 @190 :Bool;
  val183 @191 :Bool;
  val184 @192 :Bool;
  val185 @193 :Bool;
  val186 @194 :Bool;
  val187 @195 :Bool;
  val188 @196 :Bool;
  val189 @197 :Bool;
  val190 @198 :Bool;
  val191 @199 :Bool;
  val192 @200 :Bool;
  val193 @201 :Bool;
  val194 @202 :Bool;
  val195 @203 :Bool;
  val196 @204 :Bool;
  val197 @205 :Bool;
  val198 @206 :Bool;
  val199 @207 :Bool;
  val200 @208 :Bool;
  val201 @209 :Bool;
  val202 @210 :Bool;
  val203 @211 :Bool;
  val204 @212 :Bool;
  val205 @213 :Bool;
  val206 @214 :Bool;
  val207 @215 :Bool;
  val208 @216 :Bool;
  val209 @217 :Bool;
  val210 @218 :Bool;
  val211 @219 :Bool;
  val212 @220 :Bool;
  val213 @221 :Bool;
  val214 @222 :Bool;
  val215 @223 :Bool;
  val216 @224 :Bool;
  val217 @225 :Bool;
  val218 @226 :Bool;
  val219 @227 :Bool;
  val220 @228 :Bool;
  val221 @229 :Bool;
  val222 @230 :Bool;
  val223 @231 :Bool;
  val224 @232 :Bool;
  val225 @233 :Bool;
  val226 @234 :Bool;
  val227 @235 :Bool;
  val228 @236 :Bool;
  val229 @237 :Bool;
  val230 @238 :Bool;
  val231 @239 :Bool;
  val232 @240 :Bool;
  val233 @241 :Bool;
  val234 @242 :Bool;
  val235 @243 :Bool;
  val236 @244 :Bool;
  val237 @245 :Bool;
  val238 @246 :Bool;
  val239 @247 :Bool;
  val240 @248 :Bool;
  val241 @249 :Bool;
  val242 @250 :Bool;
  val243 @251 :Bool;
  val244 @252 :Bool;
  val245 @253 :Bool;
  val246 @254 :Bool;
  val247 @255 :Bool;
  val248 @256 :Bool;
  val249 @257 :Bool;
  val250 @258 :Bool;
  val251 @259 :Bool;
  val252 @260 :Bool;
  val253 @261 :Bool;
  val254 @262 :Bool;
  val255 @263 :Bool;
  val256 @264 :Bool;
  val257 @265 :Bool;
  val258 @266 :Bool;
  val259 @267 :Bool;
  val260 @268 :Bool;
  val261 @269 :Bool;
  val262 @270 :Bool;
  val263 @271 :Bool;
  val264 @272 :Bool;
  val265 @273 :Bool;
  val266 @274 :Bool;
  val267 @275 :Bool;
  val268 @276 :Bool;
  val269 @277 :Bool;
  val270 @278 :Bool;
  val271 @279 :Bool;
  val272 @280 :Bool;
  val273 @281 :Bool;
  val274 @282 :Bool;
  val275 @283 :Bool;
  val276 @284 :Bool;
  val277 @285 :Bool;
  val278 @286 :Bool;
  val279 @287 :Bool;
  val280 @288 :Bool;
  val281 @289 :Bool;
  val282 @290 :Bool;
  val283 @291 :Bool;
  val284 @292 :Bool;
  val285 @293 :Bool;
  val286 @294 :Bool;
  val287 @295 :Bool;
  val288 @296 :Bool;
  val289 @297 :Bool;
  val290 @298 :Bool;
  val291 @299 :Bool;
  val292 @300 :Bool;
  val293 @301 :Bool;
  val294 @302 :Bool;
  val295 @303 :Bool;
  val296 @304 :Bool;
  val297 @305 :Bool;
  val298 @306 :Bool;
  val299 @307 :Bool;
  val300 @308 :Bool;
  val301 @309 :Bool;
  val302 @310 :Bool;
  val303 @311 :Bool;
  val304 @312 :Bool;
  val305 @313 :Bool;
  val306 @314 :Bool;
  val307 @315 :Bool;
  val308 @316 :Bool;
  val309 @317 :Bool;
  val310 @318 :Bool;
  val311 @319 :Bool;
  val312 @320 :Bool;
  val313 @321 :Bool;
  val314 @322 :Bool;
  val315 @323 :Bool;
  val316 @324 :Bool;
  val317 @325 :Bool;
  val318 @326 :Bool;
  val319 @327 :Bool;
  val320 @328 :Bool;
  val321 @329 :Bool;
  val322 @330 :Bool;
  val324 @331 :Bool;
  val325 @332 :Bool;
  val326 @333 :Bool;
  val327 @334 :Bool;
  val328 @335 :Bool;
  val329 @336 :Bool;
  val330 @337 :Bool;
  val331 @338 :Bool;
  val332 @339 :Bool;
  val333 @340 :Bool;
  val335 @341 :Bool;
  val336 @342 :Bool;
  val337 @343 :Bool;
  val340 @344 :Bool;
  val8 @345 :UInt32;
  val172 @346 :UInt32;
}

struct Stmt @0x91127d30fade9a32{
  val100 @0 :UInt32;
  val61 @1 :List(Text);
  val62 @2 :List(Text);
  val63 @3 :List(Text);
  val64 @4 :List(Text);
  val66 @5 :List(Text);
  val68 @6 :List(Text);
  val4 @7 :List(UInt64);
  val15 @8 :List(UInt64);
  val26 @9 :List(UInt64);
  val27 @10 :List(UInt64);
  val28 @11 :List(UInt64);
  val29 @12 :List(UInt64);
  val52 @13 :List(UInt64);
  val53 @14 :List(UInt64);
  val54 @15 :List(UInt64);
  val67 @16 :List(UInt64);
  val7 @17 :UInt8;
  val56 @18 :UInt8;
  val69 @19 :UInt8;
  val89 @20 :UInt8;
  val91 @21 :UInt8;
  val60 @22 :Text;
  val65 @23 :Text;
  val12 @24 :Bool;
  val16 @25 :Bool;
  val23 @26 :Bool;
  val24 @27 :Bool;
  val25 @28 :Bool;
  val57 @29 :Bool;
  val58 @30 :Bool;
  val59 @31 :Bool;
  val70 @32 :Bool;
  val71 @33 :Bool;
  val72 @34 :Bool;
  val73 @35 :Bool;
  val74 @36 :Bool;
  val75 @37 :Bool;
  val76 @38 :Bool;
  val77 @39 :Bool;
  val78 @40 :Bool;
  val79 @41 :Bool;
  val80 @42 :Bool;
  val81 @43 :Bool;
  val82 @44 :Bool;
  val83 @45 :Bool;
  val84 @46 :Bool;
  val85 @47 :Bool;
  val86 @48 :Bool;
  val87 @49 :Bool;
  val88 @50 :Bool;
  val90 @51 :Bool;
  val92 @52 :Bool;
  val93 @53 :Bool;
  val94 @54 :Bool;
  val95 @55 :Bool;
  val96 @56 :Bool;
  val97 @57 :Bool;
  val98 @58 :Bool;
  val99 @59 :Bool;
  val0 @60 :UInt64;
  val1 @61 :UInt64;
  val2 @62 :UInt64;
  val3 @63 :UInt64;
  val5 @64 :UInt64;
  val6 @65 :UInt64;
  val8 @66 :UInt64;
  val9 @67 :UInt64;
  val10 @68 :UInt64;
  val11 @69 :UInt64;
  val13 @70 :UInt64;
  val14 @71 :UInt64;
  val17 @72 :UInt64;
  val18 @73 :UInt64;
  val19 @74 :UInt64;
  val20 @75 :UInt64;
  val21 @76 :UInt64;
  val22 @77 :UInt64;
  val30 @78 :UInt64;
  val31 @79 :UInt64;
  val32 @80 :UInt64;
  val33 @81 :UInt64;
  val34 @82 :UInt64;
  val35 @83 :UInt64;
  val36 @84 :UInt64;
  val37 @85 :UInt64;
  val38 @86 :UInt64;
  val39 @87 :UInt64;
  val40 @88 :UInt64;
  val41 @89 :UInt64;
  val42 @90 :UInt64;
  val43 @91 :UInt64;
  val44 @92 :UInt64;
  val45 @93 :UInt64;
  val46 @94 :UInt64;
  val47 @95 :UInt64;
  val48 @96 :UInt64;
  val49 @97 :UInt64;
  val50 @98 :UInt64;
  val51 @99 :UInt64;
  val55 @100 :UInt64;
}

struct Type @0xd739e808bc1b3fd7{
  val68 @0 :UInt16;
  val13 @1 :UInt8;
  val14 @2 :UInt8;
  val16 @3 :UInt8;
  val27 @4 :UInt8;
  val65 @5 :UInt8;
  val66 @6 :UInt8;
  val67 @7 :UInt8;
  val23 @8 :List(UInt64);
  val59 @9 :List(UInt64);
  val62 @10 :List(UInt64);
  val64 @11 :List(UInt64);
  val0 @12 :UInt64;
  val1 @13 :UInt64;
  val3 @14 :UInt64;
  val4 @15 :UInt64;
  val6 @16 :UInt64;
  val15 @17 :UInt64;
  val19 @18 :UInt64;
  val25 @19 :UInt64;
  val26 @20 :UInt64;
  val60 @21 :UInt64;
  val61 @22 :UInt64;
  val63 @23 :UInt64;
  val2 @24 :Bool;
  val5 @25 :Bool;
  val7 @26 :Bool;
  val8 @27 :Bool;
  val9 @28 :Bool;
  val10 @29 :Bool;
  val11 @30 :Bool;
  val12 @31 :Bool;
  val17 @32 :Bool;
  val18 @33 :Bool;
  val20 @34 :Bool;
  val21 @35 :Bool;
  val22 @36 :Bool;
  val28 @37 :Bool;
  val29 @38 :Bool;
  val30 @39 :Bool;
  val31 @40 :Bool;
  val32 @41 :Bool;
  val33 @42 :Bool;
  val34 @43 :Bool;
  val35 @44 :Bool;
  val36 @45 :Bool;
  val37 @46 :Bool;
  val38 @47 :Bool;
  val39 @48 :Bool;
  val40 @49 :Bool;
  val41 @50 :Bool;
  val42 @51 :Bool;
  val43 @52 :Bool;
  val44 @53 :Bool;
  val45 @54 :Bool;
  val46 @55 :Bool;
  val47 @56 :Bool;
  val48 @57 :Bool;
  val49 @58 :Bool;
  val50 @59 :Bool;
  val51 @60 :Bool;
  val52 @61 :Bool;
  val53 @62 :Bool;
  val54 @63 :Bool;
  val55 @64 :Bool;
  val56 @65 :Bool;
  val57 @66 :Bool;
  val58 @67 :Bool;
  val24 @68 :UInt32;
}

struct Attr @0xe5b70746662da9f3{
  val24 @0 :UInt32;
  val10 @1 :UInt8;
  val18 @2 :UInt8;
  val19 @3 :UInt8;
  val0 @4 :UInt64;
  val6 @5 :UInt64;
  val7 @6 :UInt64;
  val8 @7 :UInt64;
  val20 @8 :UInt64;
  val23 @9 :UInt64;
  val1 @10 :Bool;
  val2 @11 :Bool;
  val3 @12 :Bool;
  val4 @13 :Bool;
  val11 @14 :Bool;
  val12 @15 :Bool;
  val13 @16 :Bool;
  val14 @17 :Bool;
  val15 @18 :Bool;
  val16 @19 :Bool;
  val25 @20 :Bool;
  val26 @21 :Bool;
  val27 @22 :Bool;
  val9 @23 :Text;
  val21 @24 :Text;
  val22 @25 :Text;
  val5 @26 :UInt16;
  val17 @27 :UInt16;
}

struct Macro @0xf88157fb8bf2eeff{
  val3 @0 :Bool;
  val13 @1 :Bool;
  val2 @2 :List(UInt64);
  val4 @3 :List(UInt64);
  val9 @4 :List(UInt64);
  val10 @5 :List(UInt64);
  val12 @6 :UInt32;
  val1 @7 :UInt64;
  val5 @8 :UInt64;
  val6 @9 :UInt64;
  val7 @10 :UInt64;
  val8 @11 :UInt64;
  val11 @12 :UInt64;
  val0 @13 :UInt8;
}

struct TemplateArgument @0xb5127dad01992f67{
  val13 @0 :List(UInt64);
  val3 @1 :Bool;
  val4 @2 :Bool;
  val5 @3 :Bool;
  val6 @4 :Bool;
  val7 @5 :Bool;
  val2 @6 :UInt8;
  val0 @7 :UInt64;
  val1 @8 :UInt64;
  val8 @9 :UInt64;
  val9 @10 :UInt64;
  val10 @11 :UInt64;
  val11 @12 :UInt64;
  val12 @13 :UInt64;
}

struct TemplateParameterList @0xee0d4e6aba92fdde{
  val9 @0 :List(UInt64);
  val1 @1 :Bool;
  val2 @2 :Bool;
  val3 @3 :UInt64;
  val4 @4 :UInt64;
  val5 @5 :UInt64;
  val6 @6 :UInt64;
  val7 @7 :UInt64;
  val8 @8 :UInt64;
  val0 @9 :UInt32;
}

struct CXXBaseSpecifier @0x8e0e4024ab6be99f{
  val5 @0 :UInt8;
  val9 @1 :UInt8;
  val10 @2 :UInt8;
  val4 @3 :Bool;
  val6 @4 :Bool;
  val7 @5 :Bool;
  val0 @6 :UInt64;
  val1 @7 :UInt64;
  val2 @8 :UInt64;
  val3 @9 :UInt64;
  val8 @10 :UInt64;
  val11 @11 :UInt64;
}

struct Designator @0x8fa2d595d812339e{
  val2 @0 :Bool;
  val3 @1 :Bool;
  val4 @2 :Bool;
  val0 @3 :UInt64;
  val1 @4 :UInt64;
  val5 @5 :UInt64;
  val6 @6 :UInt64;
  val7 @7 :UInt64;
  val8 @8 :UInt64;
  val9 @9 :UInt64;
  val10 @10 :UInt64;
  val11 @11 :UInt64;
  val12 @12 :UInt64;
}

struct CXXCtorInitializer @0x96ba2ce1a1157040{
  val9 @0 :UInt64;
  val10 @1 :UInt64;
  val11 @2 :UInt64;
  val12 @3 :UInt64;
  val13 @4 :UInt64;
  val14 @5 :UInt64;
  val15 @6 :UInt64;
  val16 @7 :UInt64;
  val17 @8 :UInt64;
  val18 @9 :UInt64;
  val0 @10 :Bool;
  val1 @11 :Bool;
  val2 @12 :Bool;
  val3 @13 :Bool;
  val4 @14 :Bool;
  val5 @15 :Bool;
  val6 @16 :Bool;
  val7 @17 :Bool;
  val8 @18 :Bool;
}

