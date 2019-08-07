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
void CR_aB_d__0___CartesianMultipole_sB_0_c_3_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->BO_y[vi], fp135, fp136);
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->BO_y[vi], fp134, fp135);
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->BO_y[vi], fp137, fp139);
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->BO_y[vi], fp131, fp134);
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->BO_y[vi], fp132, fp137);
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->BO_y[vi], fp141, fp143);
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp147 * fp145;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp0;
target[((hsi*90+89)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_y[vi], fp136, fp124);
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->BO_y[vi], fp139, fp125);
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->BO_y[vi], fp143, fp127);
LIBINT2_REALTYPE fp165;
fp165 = fp147 * fp129;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp1;
target[((hsi*90+88)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_y[vi], fp124, fp117);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_y[vi], fp125, fp118);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_y[vi], fp127, fp120);
LIBINT2_REALTYPE fp167;
fp167 = fp147 * fp122;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp2;
target[((hsi*90+87)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->BO_y[vi], fp117, fp110);
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->BO_y[vi], fp118, fp111);
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_y[vi], fp120, fp113);
LIBINT2_REALTYPE fp169;
fp169 = fp147 * fp115;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp3;
target[((hsi*90+86)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_y[vi] * fp111;
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp110;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp103 + fp105;
LIBINT2_REALTYPE fp106;
fp106 = fp104 + fp107;
LIBINT2_REALTYPE fp108;
fp108 = fp106 + fp109;
LIBINT2_REALTYPE fp171;
fp171 = fp147 * fp108;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp4;
target[((hsi*90+85)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp148 * fp145;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp1;
target[((hsi*90+84)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp148 * fp129;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp2;
target[((hsi*90+83)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp148 * fp122;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp3;
target[((hsi*90+82)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp148 * fp115;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp4;
target[((hsi*90+81)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp149 * fp145;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp2;
target[((hsi*90+80)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp149 * fp129;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp3;
target[((hsi*90+79)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp149 * fp122;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp4;
target[((hsi*90+78)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp150 * fp145;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp3;
target[((hsi*90+77)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp150 * fp129;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp4;
target[((hsi*90+76)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp151 * fp145;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp4;
target[((hsi*90+75)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_y[vi], fp91, fp92);
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_y[vi], fp90, fp91);
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->BO_y[vi], fp93, fp95);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp90);
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->BO_y[vi], fp88, fp93);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_y[vi], fp97, fp99);
LIBINT2_REALTYPE fp193;
fp193 = fp147 * fp101;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp5;
target[((hsi*90+74)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_y[vi], fp92, fp80);
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_y[vi], fp95, fp81);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_y[vi], fp99, fp83);
LIBINT2_REALTYPE fp195;
fp195 = fp147 * fp85;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp6;
target[((hsi*90+73)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_y[vi], fp80, fp73);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_y[vi], fp81, fp74);
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp83, fp76);
LIBINT2_REALTYPE fp197;
fp197 = fp147 * fp78;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp7;
target[((hsi*90+72)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_y[vi], fp73, fp66);
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_y[vi], fp74, fp67);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_y[vi], fp76, fp69);
LIBINT2_REALTYPE fp199;
fp199 = fp147 * fp71;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp8;
target[((hsi*90+71)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_y[vi] * fp67;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp59 + fp61;
LIBINT2_REALTYPE fp62;
fp62 = fp60 + fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp62 + fp65;
LIBINT2_REALTYPE fp201;
fp201 = fp147 * fp64;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp9;
target[((hsi*90+70)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp148 * fp101;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp6;
target[((hsi*90+69)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp148 * fp85;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp7;
target[((hsi*90+68)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp148 * fp78;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp8;
target[((hsi*90+67)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp148 * fp71;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp9;
target[((hsi*90+66)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp149 * fp101;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp7;
target[((hsi*90+65)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp149 * fp85;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp8;
target[((hsi*90+64)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp149 * fp78;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp9;
target[((hsi*90+63)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp150 * fp101;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp8;
target[((hsi*90+62)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp150 * fp85;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp9;
target[((hsi*90+61)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp151 * fp101;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp9;
target[((hsi*90+60)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp48);
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp47);
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp51);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp46);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_y[vi], fp44, fp49);
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_y[vi], fp53, fp55);
LIBINT2_REALTYPE fp223;
fp223 = fp147 * fp57;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp10;
target[((hsi*90+59)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp36);
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_y[vi], fp51, fp37);
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp39);
LIBINT2_REALTYPE fp225;
fp225 = fp147 * fp41;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp11;
target[((hsi*90+58)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp29);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp30);
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp32);
LIBINT2_REALTYPE fp227;
fp227 = fp147 * fp34;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp12;
target[((hsi*90+57)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp22);
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp23);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp25);
LIBINT2_REALTYPE fp229;
fp229 = fp147 * fp27;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp13;
target[((hsi*90+56)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp18;
fp18 = fp16 + fp19;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp231;
fp231 = fp147 * fp20;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp14;
target[((hsi*90+55)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp148 * fp57;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp11;
target[((hsi*90+54)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp148 * fp41;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp12;
target[((hsi*90+53)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp148 * fp34;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp13;
target[((hsi*90+52)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp148 * fp27;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp14;
target[((hsi*90+51)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp149 * fp57;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp12;
target[((hsi*90+50)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp149 * fp41;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp13;
target[((hsi*90+49)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp149 * fp34;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp14;
target[((hsi*90+48)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp150 * fp57;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp13;
target[((hsi*90+47)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp150 * fp41;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp14;
target[((hsi*90+46)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp151 * fp57;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp14;
target[((hsi*90+45)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp152 * fp145;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp5;
target[((hsi*90+44)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp152 * fp129;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp6;
target[((hsi*90+43)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp152 * fp122;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp7;
target[((hsi*90+42)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp152 * fp115;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp8;
target[((hsi*90+41)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp152 * fp108;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp9;
target[((hsi*90+40)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp153 * fp145;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp6;
target[((hsi*90+39)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp153 * fp129;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp7;
target[((hsi*90+38)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp153 * fp122;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp8;
target[((hsi*90+37)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp153 * fp115;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp9;
target[((hsi*90+36)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp154 * fp145;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp7;
target[((hsi*90+35)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp154 * fp129;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp8;
target[((hsi*90+34)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp154 * fp122;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp9;
target[((hsi*90+33)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp155 * fp145;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp8;
target[((hsi*90+32)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp155 * fp129;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp9;
target[((hsi*90+31)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp156 * fp145;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp9;
target[((hsi*90+30)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp152 * fp101;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp10;
target[((hsi*90+29)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp152 * fp85;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp11;
target[((hsi*90+28)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp152 * fp78;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp12;
target[((hsi*90+27)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp152 * fp71;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp13;
target[((hsi*90+26)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp152 * fp64;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp14;
target[((hsi*90+25)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp153 * fp101;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp11;
target[((hsi*90+24)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp153 * fp85;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp12;
target[((hsi*90+23)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp153 * fp78;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp13;
target[((hsi*90+22)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp153 * fp71;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp14;
target[((hsi*90+21)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp154 * fp101;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp12;
target[((hsi*90+20)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp154 * fp85;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp13;
target[((hsi*90+19)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp154 * fp78;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp14;
target[((hsi*90+18)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp155 * fp101;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp13;
target[((hsi*90+17)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp155 * fp85;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp14;
target[((hsi*90+16)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp156 * fp101;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp14;
target[((hsi*90+15)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp157 * fp145;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp10;
target[((hsi*90+14)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp157 * fp129;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp11;
target[((hsi*90+13)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp157 * fp122;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp12;
target[((hsi*90+12)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp157 * fp115;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp13;
target[((hsi*90+11)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp157 * fp108;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp14;
target[((hsi*90+10)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp158 * fp145;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp11;
target[((hsi*90+9)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp158 * fp129;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp12;
target[((hsi*90+8)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp158 * fp122;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp13;
target[((hsi*90+7)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp158 * fp115;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp14;
target[((hsi*90+6)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp159 * fp145;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp12;
target[((hsi*90+5)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp159 * fp129;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp13;
target[((hsi*90+4)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp159 * fp122;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp14;
target[((hsi*90+3)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp160 * fp145;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp13;
target[((hsi*90+2)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp160 * fp129;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp14;
target[((hsi*90+1)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp161 * fp145;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp14;
target[((hsi*90+0)*1+lsi)*1] = fp340;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 342 */
}

#ifdef __cplusplus
};
#endif
