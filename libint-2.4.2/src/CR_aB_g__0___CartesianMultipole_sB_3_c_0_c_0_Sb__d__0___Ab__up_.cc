/*
 *  Copyright (C) 2004-2017 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>

#ifdef __cplusplus
extern "C" {
#endif
void CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp44, fp47);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp37, fp44);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp45);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_x[vi], fp30, fp37);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp31, fp38);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_x[vi], fp33, fp40);
LIBINT2_REALTYPE fp181;
fp181 = fp35 * fp29;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp0;
target[((hsi*90+89)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp35 * fp28;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp1;
target[((hsi*90+88)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp35 * fp27;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp2;
target[((hsi*90+87)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp47, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp50);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_x[vi], fp40, fp54);
LIBINT2_REALTYPE fp187;
fp187 = fp42 * fp29;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp1;
target[((hsi*90+86)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp42 * fp28;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp2;
target[((hsi*90+85)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp48;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp49 + fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp191;
fp191 = fp58 * fp29;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp2;
target[((hsi*90+84)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp35 * fp26;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp3;
target[((hsi*90+83)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp35 * fp25;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp4;
target[((hsi*90+82)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp35 * fp24;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp5;
target[((hsi*90+81)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp42 * fp26;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp4;
target[((hsi*90+80)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp42 * fp25;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp5;
target[((hsi*90+79)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp58 * fp26;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp5;
target[((hsi*90+78)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp35 * fp23;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp6;
target[((hsi*90+77)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp35 * fp22;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp7;
target[((hsi*90+76)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp35 * fp21;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp8;
target[((hsi*90+75)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp42 * fp23;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp7;
target[((hsi*90+74)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp42 * fp22;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp8;
target[((hsi*90+73)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp58 * fp23;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp8;
target[((hsi*90+72)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp35 * fp20;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp9;
target[((hsi*90+71)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp35 * fp19;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp10;
target[((hsi*90+70)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp35 * fp18;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp11;
target[((hsi*90+69)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp42 * fp20;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp10;
target[((hsi*90+68)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp42 * fp19;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp11;
target[((hsi*90+67)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp58 * fp20;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp11;
target[((hsi*90+66)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp35 * fp17;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp12;
target[((hsi*90+65)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp35 * fp16;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp13;
target[((hsi*90+64)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp35 * fp15;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp14;
target[((hsi*90+63)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp42 * fp17;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp13;
target[((hsi*90+62)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp42 * fp16;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp14;
target[((hsi*90+61)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp58 * fp17;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp14;
target[((hsi*90+60)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_x[vi], fp74, fp77);
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_x[vi], fp67, fp74);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp75);
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp60, fp67);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp61, fp68);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp70);
LIBINT2_REALTYPE fp241;
fp241 = fp65 * fp29;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp3;
target[((hsi*90+59)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp65 * fp28;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp4;
target[((hsi*90+58)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp65 * fp27;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp5;
target[((hsi*90+57)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp77, fp78);
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_x[vi], fp75, fp80);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp84);
LIBINT2_REALTYPE fp247;
fp247 = fp72 * fp29;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp4;
target[((hsi*90+56)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp72 * fp28;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp5;
target[((hsi*90+55)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp78;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp79 + fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp82 + fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp86 + fp89;
LIBINT2_REALTYPE fp251;
fp251 = fp88 * fp29;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp5;
target[((hsi*90+54)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp65 * fp26;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp6;
target[((hsi*90+53)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp65 * fp25;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp7;
target[((hsi*90+52)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp65 * fp24;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp8;
target[((hsi*90+51)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp72 * fp26;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp7;
target[((hsi*90+50)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp72 * fp25;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp8;
target[((hsi*90+49)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp88 * fp26;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp8;
target[((hsi*90+48)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp65 * fp23;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp9;
target[((hsi*90+47)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp65 * fp22;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp10;
target[((hsi*90+46)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp65 * fp21;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp11;
target[((hsi*90+45)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp72 * fp23;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp10;
target[((hsi*90+44)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp72 * fp22;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp11;
target[((hsi*90+43)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp88 * fp23;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp11;
target[((hsi*90+42)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp65 * fp20;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp12;
target[((hsi*90+41)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp65 * fp19;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp13;
target[((hsi*90+40)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp65 * fp18;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp14;
target[((hsi*90+39)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp72 * fp20;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp13;
target[((hsi*90+38)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp72 * fp19;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp14;
target[((hsi*90+37)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp88 * fp20;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp14;
target[((hsi*90+36)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_x[vi], fp104, fp107);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp97, fp104);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_x[vi], fp98, fp105);
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp90, fp97);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp98);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_x[vi], fp93, fp100);
LIBINT2_REALTYPE fp289;
fp289 = fp95 * fp29;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp6;
target[((hsi*90+35)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp95 * fp28;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp7;
target[((hsi*90+34)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp95 * fp27;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp8;
target[((hsi*90+33)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp107, fp108);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_x[vi], fp105, fp110);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp114);
LIBINT2_REALTYPE fp295;
fp295 = fp102 * fp29;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp7;
target[((hsi*90+32)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp102 * fp28;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp8;
target[((hsi*90+31)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp119;
fp119 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_x[vi] * fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->BO_x[vi] * fp108;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp109 + fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp112 + fp117;
LIBINT2_REALTYPE fp118;
fp118 = fp116 + fp119;
LIBINT2_REALTYPE fp299;
fp299 = fp118 * fp29;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp8;
target[((hsi*90+30)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp95 * fp26;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp9;
target[((hsi*90+29)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp95 * fp25;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp10;
target[((hsi*90+28)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp95 * fp24;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp11;
target[((hsi*90+27)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp102 * fp26;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp10;
target[((hsi*90+26)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp102 * fp25;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp11;
target[((hsi*90+25)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp118 * fp26;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp11;
target[((hsi*90+24)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp95 * fp23;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp12;
target[((hsi*90+23)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp95 * fp22;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp13;
target[((hsi*90+22)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp95 * fp21;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp14;
target[((hsi*90+21)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp102 * fp23;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp13;
target[((hsi*90+20)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp102 * fp22;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp14;
target[((hsi*90+19)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp118 * fp23;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp14;
target[((hsi*90+18)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->BO_x[vi], fp134, fp137);
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_x[vi], fp127, fp134);
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->BO_x[vi], fp128, fp135);
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->BO_x[vi], fp120, fp127);
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->BO_x[vi], fp121, fp128);
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_x[vi], fp123, fp130);
LIBINT2_REALTYPE fp325;
fp325 = fp125 * fp29;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp9;
target[((hsi*90+17)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp125 * fp28;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp10;
target[((hsi*90+16)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp125 * fp27;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp11;
target[((hsi*90+15)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BO_x[vi], fp137, fp138);
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp135, fp140);
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->BO_x[vi], fp130, fp144);
LIBINT2_REALTYPE fp331;
fp331 = fp132 * fp29;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp10;
target[((hsi*90+14)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp132 * fp28;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp11;
target[((hsi*90+13)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp144;
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_x[vi] * fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_x[vi] * fp138;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp139 + fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp142 + fp147;
LIBINT2_REALTYPE fp148;
fp148 = fp146 + fp149;
LIBINT2_REALTYPE fp335;
fp335 = fp148 * fp29;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp11;
target[((hsi*90+12)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp125 * fp26;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp12;
target[((hsi*90+11)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp125 * fp25;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp13;
target[((hsi*90+10)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp125 * fp24;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp14;
target[((hsi*90+9)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp132 * fp26;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp13;
target[((hsi*90+8)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp132 * fp25;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp14;
target[((hsi*90+7)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp148 * fp26;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp14;
target[((hsi*90+6)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->BO_x[vi], fp164, fp167);
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->BO_x[vi], fp157, fp164);
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BO_x[vi], fp158, fp165);
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->BO_x[vi], fp150, fp157);
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->BO_x[vi], fp151, fp158);
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->BO_x[vi], fp153, fp160);
LIBINT2_REALTYPE fp349;
fp349 = fp155 * fp29;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp12;
target[((hsi*90+5)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp155 * fp28;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp13;
target[((hsi*90+4)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp155 * fp27;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp14;
target[((hsi*90+3)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->BO_x[vi], fp167, fp168);
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->BO_x[vi], fp165, fp170);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BO_x[vi], fp160, fp174);
LIBINT2_REALTYPE fp355;
fp355 = fp162 * fp29;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp13;
target[((hsi*90+2)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp162 * fp28;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp14;
target[((hsi*90+1)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp179;
fp179 = inteval->BO_x[vi] * fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->BO_x[vi] * fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->BO_x[vi] * fp168;
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src0[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp169 + fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp172 + fp177;
LIBINT2_REALTYPE fp178;
fp178 = fp176 + fp179;
LIBINT2_REALTYPE fp359;
fp359 = fp178 * fp29;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp14;
target[((hsi*90+0)*1+lsi)*1] = fp358;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 360 */
}

#ifdef __cplusplus
};
#endif
