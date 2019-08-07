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
void CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_y[vi], fp72, fp73);
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_y[vi], fp71, fp72);
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp74, fp76);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_x[vi], fp80, fp83);
LIBINT2_REALTYPE fp119;
fp119 = fp81 * fp78;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp0;
target[((hsi*63+62)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_y[vi], fp73, fp66);
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_y[vi], fp76, fp67);
LIBINT2_REALTYPE fp121;
fp121 = fp81 * fp69;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp1;
target[((hsi*63+61)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_y[vi], fp66, fp61);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp67, fp62);
LIBINT2_REALTYPE fp123;
fp123 = fp81 * fp64;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp2;
target[((hsi*63+60)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_y[vi], fp61, fp56);
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp62, fp57);
LIBINT2_REALTYPE fp125;
fp125 = fp81 * fp59;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp3;
target[((hsi*63+59)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp51);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp57, fp52);
LIBINT2_REALTYPE fp127;
fp127 = fp81 * fp54;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp4;
target[((hsi*63+58)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp129;
fp129 = fp81 * fp49;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp5;
target[((hsi*63+57)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_x[vi], fp83, fp86);
LIBINT2_REALTYPE fp131;
fp131 = fp84 * fp78;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp1;
target[((hsi*63+56)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp84 * fp69;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*63+55)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp84 * fp64;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp3;
target[((hsi*63+54)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp84 * fp59;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp4;
target[((hsi*63+53)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp84 * fp54;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp5;
target[((hsi*63+52)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->BO_x[vi], fp86, fp89);
LIBINT2_REALTYPE fp141;
fp141 = fp87 * fp78;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp2;
target[((hsi*63+51)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp87 * fp69;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp3;
target[((hsi*63+50)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp87 * fp64;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp4;
target[((hsi*63+49)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp87 * fp59;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp5;
target[((hsi*63+48)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp92);
LIBINT2_REALTYPE fp149;
fp149 = fp90 * fp78;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp3;
target[((hsi*63+47)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp90 * fp69;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp4;
target[((hsi*63+46)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp90 * fp64;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp5;
target[((hsi*63+45)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_x[vi], fp92, fp95);
LIBINT2_REALTYPE fp155;
fp155 = fp93 * fp78;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp4;
target[((hsi*63+44)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp93 * fp69;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp5;
target[((hsi*63+43)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp96 + fp98;
LIBINT2_REALTYPE fp159;
fp159 = fp97 * fp78;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp5;
target[((hsi*63+42)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_y[vi], fp38, fp39);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp38);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp40, fp42);
LIBINT2_REALTYPE fp161;
fp161 = fp81 * fp44;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp6;
target[((hsi*63+41)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp32);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp33);
LIBINT2_REALTYPE fp163;
fp163 = fp81 * fp35;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
target[((hsi*63+40)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp27);
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp28);
LIBINT2_REALTYPE fp165;
fp165 = fp81 * fp30;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
target[((hsi*63+39)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp22);
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp23);
LIBINT2_REALTYPE fp167;
fp167 = fp81 * fp25;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp9;
target[((hsi*63+38)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp22, fp17);
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp18);
LIBINT2_REALTYPE fp169;
fp169 = fp81 * fp20;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp10;
target[((hsi*63+37)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp15;
fp15 = fp13 + fp16;
LIBINT2_REALTYPE fp171;
fp171 = fp81 * fp15;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp11;
target[((hsi*63+36)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp84 * fp44;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp7;
target[((hsi*63+35)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp84 * fp35;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp8;
target[((hsi*63+34)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp84 * fp30;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp9;
target[((hsi*63+33)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp84 * fp25;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp10;
target[((hsi*63+32)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp84 * fp20;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp11;
target[((hsi*63+31)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp87 * fp44;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp8;
target[((hsi*63+30)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp87 * fp35;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp9;
target[((hsi*63+29)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp87 * fp30;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp10;
target[((hsi*63+28)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp87 * fp25;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp11;
target[((hsi*63+27)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp90 * fp44;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp9;
target[((hsi*63+26)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp90 * fp35;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp10;
target[((hsi*63+25)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp90 * fp30;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp11;
target[((hsi*63+24)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp93 * fp44;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp10;
target[((hsi*63+23)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp93 * fp35;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp11;
target[((hsi*63+22)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp97 * fp44;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp11;
target[((hsi*63+21)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_x[vi], fp99, fp102);
LIBINT2_REALTYPE fp203;
fp203 = fp100 * fp78;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp6;
target[((hsi*63+20)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp100 * fp69;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
target[((hsi*63+19)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp100 * fp64;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
target[((hsi*63+18)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp100 * fp59;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp9;
target[((hsi*63+17)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp100 * fp54;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp10;
target[((hsi*63+16)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp100 * fp49;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp11;
target[((hsi*63+15)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp102, fp105);
LIBINT2_REALTYPE fp215;
fp215 = fp103 * fp78;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp7;
target[((hsi*63+14)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp103 * fp69;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp8;
target[((hsi*63+13)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp103 * fp64;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp9;
target[((hsi*63+12)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp103 * fp59;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp10;
target[((hsi*63+11)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp103 * fp54;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp11;
target[((hsi*63+10)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_x[vi], fp105, fp108);
LIBINT2_REALTYPE fp225;
fp225 = fp106 * fp78;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp8;
target[((hsi*63+9)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp106 * fp69;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp9;
target[((hsi*63+8)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp106 * fp64;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp10;
target[((hsi*63+7)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp106 * fp59;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp11;
target[((hsi*63+6)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_x[vi], fp108, fp111);
LIBINT2_REALTYPE fp233;
fp233 = fp109 * fp78;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp9;
target[((hsi*63+5)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp109 * fp69;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp10;
target[((hsi*63+4)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp109 * fp64;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp11;
target[((hsi*63+3)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp111, fp114);
LIBINT2_REALTYPE fp239;
fp239 = fp112 * fp78;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp10;
target[((hsi*63+2)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp112 * fp69;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp11;
target[((hsi*63+1)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp115 + fp117;
LIBINT2_REALTYPE fp243;
fp243 = fp116 * fp78;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp11;
target[((hsi*63+0)*1+lsi)*1] = fp242;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 244 */
}

#ifdef __cplusplus
};
#endif
