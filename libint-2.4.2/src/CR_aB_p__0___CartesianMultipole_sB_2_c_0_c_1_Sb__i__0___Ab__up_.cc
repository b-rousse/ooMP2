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
void CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp68);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp63);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp64);
LIBINT2_REALTYPE fp137;
fp137 = fp61 * fp57;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp1;
target[((hsi*84+83)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp61 * fp56;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp4;
target[((hsi*84+82)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp6);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp61 * fp55;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
target[((hsi*84+81)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp9);
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp61 * fp54;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp10;
target[((hsi*84+80)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp12);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp61 * fp53;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp13;
target[((hsi*84+79)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp15);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp61 * fp52;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp16;
target[((hsi*84+78)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp19);
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp61 * fp51;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp20;
target[((hsi*84+77)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp73);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp69);
LIBINT2_REALTYPE fp151;
fp151 = fp66 * fp57;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp4;
target[((hsi*84+76)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp66 * fp56;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp7;
target[((hsi*84+75)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp66 * fp55;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp10;
target[((hsi*84+74)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp66 * fp54;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp13;
target[((hsi*84+73)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp66 * fp53;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp16;
target[((hsi*84+72)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp66 * fp52;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp20;
target[((hsi*84+71)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_x[vi], fp73, fp78);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp74);
LIBINT2_REALTYPE fp163;
fp163 = fp71 * fp57;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
target[((hsi*84+70)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp71 * fp56;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp10;
target[((hsi*84+69)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp71 * fp55;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp13;
target[((hsi*84+68)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp71 * fp54;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp16;
target[((hsi*84+67)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp71 * fp53;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp20;
target[((hsi*84+66)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp83);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp74, fp79);
LIBINT2_REALTYPE fp173;
fp173 = fp76 * fp57;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp10;
target[((hsi*84+65)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp76 * fp56;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp13;
target[((hsi*84+64)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp76 * fp55;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp16;
target[((hsi*84+63)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp76 * fp54;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp20;
target[((hsi*84+62)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_x[vi], fp83, fp88);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp84);
LIBINT2_REALTYPE fp181;
fp181 = fp81 * fp57;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp13;
target[((hsi*84+61)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp81 * fp56;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp16;
target[((hsi*84+60)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp81 * fp55;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp20;
target[((hsi*84+59)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp88, fp89);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp84, fp91);
LIBINT2_REALTYPE fp187;
fp187 = fp86 * fp57;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp16;
target[((hsi*84+58)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp86 * fp56;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp20;
target[((hsi*84+57)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_x[vi] * fp89;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp90 + fp94;
LIBINT2_REALTYPE fp95;
fp95 = fp93 + fp96;
LIBINT2_REALTYPE fp191;
fp191 = fp95 * fp57;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp20;
target[((hsi*84+56)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp61 * fp50;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp23;
target[((hsi*84+55)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp25);
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp61 * fp49;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp26;
target[((hsi*84+54)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp28);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp61 * fp48;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp29;
target[((hsi*84+53)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp31);
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp61 * fp47;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp32;
target[((hsi*84+52)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp34);
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp61 * fp46;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp35;
target[((hsi*84+51)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp41, fp37);
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp61 * fp45;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp38;
target[((hsi*84+50)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp41);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp61 * fp44;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp42;
target[((hsi*84+49)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp66 * fp50;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp26;
target[((hsi*84+48)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp66 * fp49;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp29;
target[((hsi*84+47)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp66 * fp48;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp32;
target[((hsi*84+46)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp66 * fp47;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp35;
target[((hsi*84+45)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp66 * fp46;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp38;
target[((hsi*84+44)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp66 * fp45;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp42;
target[((hsi*84+43)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp71 * fp50;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp29;
target[((hsi*84+42)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp71 * fp49;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp32;
target[((hsi*84+41)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp71 * fp48;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp35;
target[((hsi*84+40)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp71 * fp47;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp38;
target[((hsi*84+39)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp71 * fp46;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp42;
target[((hsi*84+38)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp76 * fp50;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp32;
target[((hsi*84+37)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp76 * fp49;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp35;
target[((hsi*84+36)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp76 * fp48;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp38;
target[((hsi*84+35)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp76 * fp47;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp42;
target[((hsi*84+34)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp81 * fp50;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp35;
target[((hsi*84+33)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp81 * fp49;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp38;
target[((hsi*84+32)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp81 * fp48;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp42;
target[((hsi*84+31)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp86 * fp50;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp38;
target[((hsi*84+30)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp86 * fp49;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp42;
target[((hsi*84+29)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp95 * fp50;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp42;
target[((hsi*84+28)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp102, fp107);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp97, fp102);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_x[vi], fp98, fp103);
LIBINT2_REALTYPE fp249;
fp249 = fp100 * fp57;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp23;
target[((hsi*84+27)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp100 * fp56;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp26;
target[((hsi*84+26)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp100 * fp55;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp29;
target[((hsi*84+25)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp100 * fp54;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp32;
target[((hsi*84+24)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp100 * fp53;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp35;
target[((hsi*84+23)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp100 * fp52;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp38;
target[((hsi*84+22)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp100 * fp51;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp42;
target[((hsi*84+21)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_x[vi], fp107, fp112);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_x[vi], fp103, fp108);
LIBINT2_REALTYPE fp263;
fp263 = fp105 * fp57;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp26;
target[((hsi*84+20)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp105 * fp56;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp29;
target[((hsi*84+19)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp105 * fp55;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp32;
target[((hsi*84+18)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp105 * fp54;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp35;
target[((hsi*84+17)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp105 * fp53;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp38;
target[((hsi*84+16)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp105 * fp52;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp42;
target[((hsi*84+15)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->BO_x[vi], fp112, fp117);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp108, fp113);
LIBINT2_REALTYPE fp275;
fp275 = fp110 * fp57;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp29;
target[((hsi*84+14)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp110 * fp56;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp32;
target[((hsi*84+13)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp110 * fp55;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp35;
target[((hsi*84+12)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp110 * fp54;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp38;
target[((hsi*84+11)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp110 * fp53;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp42;
target[((hsi*84+10)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_x[vi], fp117, fp122);
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_x[vi], fp113, fp118);
LIBINT2_REALTYPE fp285;
fp285 = fp115 * fp57;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp32;
target[((hsi*84+9)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp115 * fp56;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp35;
target[((hsi*84+8)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp115 * fp55;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp38;
target[((hsi*84+7)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp115 * fp54;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp42;
target[((hsi*84+6)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->BO_x[vi], fp122, fp127);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_x[vi], fp118, fp123);
LIBINT2_REALTYPE fp293;
fp293 = fp120 * fp57;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp35;
target[((hsi*84+5)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp120 * fp56;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp38;
target[((hsi*84+4)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp120 * fp55;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp42;
target[((hsi*84+3)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->BO_x[vi], fp127, fp128);
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_x[vi], fp123, fp130);
LIBINT2_REALTYPE fp299;
fp299 = fp125 * fp57;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp38;
target[((hsi*84+2)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp125 * fp56;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp42;
target[((hsi*84+1)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp135;
fp135 = inteval->BO_x[vi] * fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_x[vi] * fp128;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp129 + fp133;
LIBINT2_REALTYPE fp134;
fp134 = fp132 + fp135;
LIBINT2_REALTYPE fp303;
fp303 = fp134 * fp57;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp42;
target[((hsi*84+0)*1+lsi)*1] = fp302;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 304 */
}

#ifdef __cplusplus
};
#endif
