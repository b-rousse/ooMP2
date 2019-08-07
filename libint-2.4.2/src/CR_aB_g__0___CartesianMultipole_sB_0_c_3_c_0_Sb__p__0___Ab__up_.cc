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
void CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src1[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_y[vi], fp113, fp114);
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_y[vi], fp112, fp113);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->BO_y[vi], fp115, fp117);
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src1[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_y[vi], fp109, fp112);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_y[vi], fp110, fp115);
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->BO_y[vi], fp119, fp121);
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp125 * fp123;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp0;
target[((hsi*45+44)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_y[vi] * fp121;
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_y[vi] * fp117;
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_y[vi] * fp114;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src1[((hsi*25+4)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp102 + fp104;
LIBINT2_REALTYPE fp105;
fp105 = fp103 + fp106;
LIBINT2_REALTYPE fp107;
fp107 = fp105 + fp108;
LIBINT2_REALTYPE fp138;
fp138 = fp125 * fp107;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp1;
target[((hsi*45+43)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp126 * fp123;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp1;
target[((hsi*45+42)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_y[vi], fp90, fp91);
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src1[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_y[vi], fp89, fp90);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_y[vi], fp92, fp94);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->BO_y[vi], fp86, fp89);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp92);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_y[vi], fp96, fp98);
LIBINT2_REALTYPE fp142;
fp142 = fp125 * fp100;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp2;
target[((hsi*45+41)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp94;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*25+9)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp79 + fp81;
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp144;
fp144 = fp125 * fp84;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp3;
target[((hsi*45+40)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp126 * fp100;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp3;
target[((hsi*45+39)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_y[vi], fp67, fp68);
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_y[vi], fp66, fp67);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_y[vi], fp69, fp71);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp63, fp66);
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_y[vi], fp64, fp69);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_y[vi], fp73, fp75);
LIBINT2_REALTYPE fp148;
fp148 = fp125 * fp77;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp4;
target[((hsi*45+38)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp68;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*25+14)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp150;
fp150 = fp125 * fp61;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp5;
target[((hsi*45+37)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp126 * fp77;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp5;
target[((hsi*45+36)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*25+18)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp44, fp45);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp44);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp48);
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_y[vi], fp40, fp43);
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp46);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp50, fp52);
LIBINT2_REALTYPE fp154;
fp154 = fp125 * fp54;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp6;
target[((hsi*45+35)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*25+19)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp156;
fp156 = fp125 * fp38;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp7;
target[((hsi*45+34)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp126 * fp54;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp7;
target[((hsi*45+33)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*25+23)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*25+22)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_y[vi], fp21, fp22);
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_y[vi], fp20, fp21);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp25);
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp17, fp20);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp18, fp23);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp29);
LIBINT2_REALTYPE fp160;
fp160 = fp125 * fp31;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp8;
target[((hsi*45+32)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*25+24)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp15;
fp15 = fp13 + fp16;
LIBINT2_REALTYPE fp162;
fp162 = fp125 * fp15;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp9;
target[((hsi*45+31)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp126 * fp31;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp9;
target[((hsi*45+30)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp127 * fp123;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp2;
target[((hsi*45+29)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp127 * fp107;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp3;
target[((hsi*45+28)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp128 * fp123;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp3;
target[((hsi*45+27)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp127 * fp100;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp4;
target[((hsi*45+26)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp127 * fp84;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp5;
target[((hsi*45+25)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp128 * fp100;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp5;
target[((hsi*45+24)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp127 * fp77;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp6;
target[((hsi*45+23)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp127 * fp61;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp7;
target[((hsi*45+22)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp128 * fp77;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp7;
target[((hsi*45+21)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp127 * fp54;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp8;
target[((hsi*45+20)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp127 * fp38;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp9;
target[((hsi*45+19)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp128 * fp54;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp9;
target[((hsi*45+18)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src0[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp129 * fp123;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp4;
target[((hsi*45+17)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp129 * fp107;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp5;
target[((hsi*45+16)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp130 * fp123;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp5;
target[((hsi*45+15)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp129 * fp100;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp6;
target[((hsi*45+14)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp129 * fp84;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp7;
target[((hsi*45+13)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp130 * fp100;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp7;
target[((hsi*45+12)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp129 * fp77;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp8;
target[((hsi*45+11)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp204;
fp204 = fp129 * fp61;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp9;
target[((hsi*45+10)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp130 * fp77;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp9;
target[((hsi*45+9)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp131 * fp123;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp6;
target[((hsi*45+8)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp210;
fp210 = fp131 * fp107;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp7;
target[((hsi*45+7)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp132 * fp123;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp7;
target[((hsi*45+6)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp214;
fp214 = fp131 * fp100;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp8;
target[((hsi*45+5)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp131 * fp84;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp9;
target[((hsi*45+4)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp132 * fp100;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp9;
target[((hsi*45+3)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*25+20)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp133 * fp123;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp8;
target[((hsi*45+2)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp133 * fp107;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp9;
target[((hsi*45+1)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*25+21)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp134 * fp123;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp9;
target[((hsi*45+0)*1+lsi)*1] = fp223;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 225 */
}

#ifdef __cplusplus
};
#endif
