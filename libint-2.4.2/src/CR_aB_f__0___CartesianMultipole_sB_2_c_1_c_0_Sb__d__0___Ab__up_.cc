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
void CR_aB_f__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp49);
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp62);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp57);
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_x[vi], fp53, fp58);
LIBINT2_REALTYPE fp129;
fp129 = fp55 * fp50;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp0;
target[((hsi*60+59)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp45);
LIBINT2_REALTYPE fp131;
fp131 = fp55 * fp46;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp1;
target[((hsi*60+58)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp133;
fp133 = fp55 * fp43;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*60+57)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp63);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp65);
LIBINT2_REALTYPE fp135;
fp135 = fp60 * fp50;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp1;
target[((hsi*60+56)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp60 * fp46;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp2;
target[((hsi*60+55)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp64 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = fp67 + fp70;
LIBINT2_REALTYPE fp139;
fp139 = fp69 * fp50;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp2;
target[((hsi*60+54)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp38, fp39);
LIBINT2_REALTYPE fp141;
fp141 = fp55 * fp40;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp3;
target[((hsi*60+53)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp35);
LIBINT2_REALTYPE fp143;
fp143 = fp55 * fp36;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp4;
target[((hsi*60+52)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp32 + fp34;
LIBINT2_REALTYPE fp145;
fp145 = fp55 * fp33;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp5;
target[((hsi*60+51)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp60 * fp40;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp4;
target[((hsi*60+50)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp60 * fp36;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp5;
target[((hsi*60+49)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp69 * fp40;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp5;
target[((hsi*60+48)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp29);
LIBINT2_REALTYPE fp153;
fp153 = fp55 * fp30;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp6;
target[((hsi*60+47)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp25);
LIBINT2_REALTYPE fp155;
fp155 = fp55 * fp26;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp7;
target[((hsi*60+46)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp157;
fp157 = fp55 * fp23;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp8;
target[((hsi*60+45)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp60 * fp30;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp7;
target[((hsi*60+44)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp60 * fp26;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp8;
target[((hsi*60+43)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp69 * fp30;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp8;
target[((hsi*60+42)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_y[vi], fp18, fp19);
LIBINT2_REALTYPE fp165;
fp165 = fp55 * fp20;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp9;
target[((hsi*60+41)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp19, fp15);
LIBINT2_REALTYPE fp167;
fp167 = fp55 * fp16;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp10;
target[((hsi*60+40)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp169;
fp169 = fp55 * fp13;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp11;
target[((hsi*60+39)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp60 * fp20;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp10;
target[((hsi*60+38)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp60 * fp16;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp11;
target[((hsi*60+37)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp69 * fp20;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp11;
target[((hsi*60+36)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_x[vi], fp76, fp81);
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp76);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_x[vi], fp72, fp77);
LIBINT2_REALTYPE fp177;
fp177 = fp74 * fp50;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp3;
target[((hsi*60+35)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp74 * fp46;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp4;
target[((hsi*60+34)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp74 * fp43;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp5;
target[((hsi*60+33)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_x[vi], fp81, fp82);
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_x[vi], fp77, fp84);
LIBINT2_REALTYPE fp183;
fp183 = fp79 * fp50;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp4;
target[((hsi*60+32)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp79 * fp46;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp5;
target[((hsi*60+31)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_x[vi] * fp82;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp83 + fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp86 + fp89;
LIBINT2_REALTYPE fp187;
fp187 = fp88 * fp50;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp5;
target[((hsi*60+30)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp74 * fp40;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp6;
target[((hsi*60+29)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp74 * fp36;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp7;
target[((hsi*60+28)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp74 * fp33;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp8;
target[((hsi*60+27)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp79 * fp40;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp7;
target[((hsi*60+26)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp79 * fp36;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp8;
target[((hsi*60+25)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp88 * fp40;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp8;
target[((hsi*60+24)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp74 * fp30;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp9;
target[((hsi*60+23)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp74 * fp26;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp10;
target[((hsi*60+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp74 * fp23;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp11;
target[((hsi*60+21)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp79 * fp30;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp10;
target[((hsi*60+20)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp79 * fp26;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp11;
target[((hsi*60+19)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp88 * fp30;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp11;
target[((hsi*60+18)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_x[vi], fp95, fp100);
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp90, fp95);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp96);
LIBINT2_REALTYPE fp213;
fp213 = fp93 * fp50;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp6;
target[((hsi*60+17)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp93 * fp46;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp7;
target[((hsi*60+16)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp93 * fp43;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp8;
target[((hsi*60+15)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp101);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp96, fp103);
LIBINT2_REALTYPE fp219;
fp219 = fp98 * fp50;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp7;
target[((hsi*60+14)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp98 * fp46;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp8;
target[((hsi*60+13)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_x[vi] * fp103;
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_x[vi] * fp101;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp102 + fp106;
LIBINT2_REALTYPE fp107;
fp107 = fp105 + fp108;
LIBINT2_REALTYPE fp223;
fp223 = fp107 * fp50;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp8;
target[((hsi*60+12)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp93 * fp40;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp9;
target[((hsi*60+11)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp93 * fp36;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp10;
target[((hsi*60+10)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp93 * fp33;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp11;
target[((hsi*60+9)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp98 * fp40;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp10;
target[((hsi*60+8)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp98 * fp36;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp11;
target[((hsi*60+7)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp107 * fp40;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp11;
target[((hsi*60+6)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_x[vi], fp114, fp119);
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp109, fp114);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp110, fp115);
LIBINT2_REALTYPE fp237;
fp237 = fp112 * fp50;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp9;
target[((hsi*60+5)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp112 * fp46;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp10;
target[((hsi*60+4)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp112 * fp43;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp11;
target[((hsi*60+3)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_x[vi], fp119, fp120);
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_x[vi], fp115, fp122);
LIBINT2_REALTYPE fp243;
fp243 = fp117 * fp50;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp10;
target[((hsi*60+2)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp117 * fp46;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
target[((hsi*60+1)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp127;
fp127 = inteval->BO_x[vi] * fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->BO_x[vi] * fp120;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp121 + fp125;
LIBINT2_REALTYPE fp126;
fp126 = fp124 + fp127;
LIBINT2_REALTYPE fp247;
fp247 = fp126 * fp50;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp11;
target[((hsi*60+0)*1+lsi)*1] = fp246;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 248 */
}

#ifdef __cplusplus
};
#endif
