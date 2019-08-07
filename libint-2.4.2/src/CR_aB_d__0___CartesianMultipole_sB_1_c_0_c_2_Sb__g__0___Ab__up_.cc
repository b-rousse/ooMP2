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
void CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_2_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp102, fp105);
LIBINT2_REALTYPE fp151;
fp151 = fp103 * fp101;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp3;
target[((hsi*90+89)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp10);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp103 * fp100;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp8;
target[((hsi*90+88)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp15);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp11);
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp103 * fp99;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp13;
target[((hsi*90+87)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp22);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp16);
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp103 * fp98;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp18;
target[((hsi*90+86)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp23, fp25);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp103 * fp97;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp27;
target[((hsi*90+85)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_x[vi], fp105, fp108);
LIBINT2_REALTYPE fp161;
fp161 = fp106 * fp101;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp8;
target[((hsi*90+84)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp106 * fp100;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp13;
target[((hsi*90+83)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp106 * fp99;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp18;
target[((hsi*90+82)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp106 * fp98;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp27;
target[((hsi*90+81)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_x[vi], fp108, fp111);
LIBINT2_REALTYPE fp169;
fp169 = fp109 * fp101;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp13;
target[((hsi*90+80)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp109 * fp100;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp18;
target[((hsi*90+79)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp109 * fp99;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp27;
target[((hsi*90+78)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp111, fp114);
LIBINT2_REALTYPE fp175;
fp175 = fp112 * fp101;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp18;
target[((hsi*90+77)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp112 * fp100;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp27;
target[((hsi*90+76)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp115 + fp117;
LIBINT2_REALTYPE fp179;
fp179 = fp116 * fp101;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp27;
target[((hsi*90+75)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_z[vi], fp39, fp34);
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp103 * fp96;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp32;
target[((hsi*90+74)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp44, fp39);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp35);
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp103 * fp95;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp37;
target[((hsi*90+73)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_z[vi], fp51, fp44);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp40);
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp103 * fp94;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp42;
target[((hsi*90+72)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp51);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_z[vi], fp54, fp45);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp103 * fp93;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp47;
target[((hsi*90+71)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp50);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp54);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp103 * fp92;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp56;
target[((hsi*90+70)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp106 * fp96;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp37;
target[((hsi*90+69)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp106 * fp95;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp42;
target[((hsi*90+68)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp106 * fp94;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp47;
target[((hsi*90+67)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp106 * fp93;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp56;
target[((hsi*90+66)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp109 * fp96;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp42;
target[((hsi*90+65)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp109 * fp95;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp47;
target[((hsi*90+64)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp109 * fp94;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp56;
target[((hsi*90+63)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp112 * fp96;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp47;
target[((hsi*90+62)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp112 * fp95;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp56;
target[((hsi*90+61)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp116 * fp96;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp56;
target[((hsi*90+60)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp68, fp63);
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp103 * fp91;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp61;
target[((hsi*90+59)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_z[vi], fp73, fp68);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp69, fp64);
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp103 * fp90;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp66;
target[((hsi*90+58)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp73);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_z[vi], fp74, fp69);
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp103 * fp89;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp71;
target[((hsi*90+57)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_z[vi], fp79, fp80);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_z[vi], fp83, fp74);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp103 * fp88;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp76;
target[((hsi*90+56)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_z[vi], fp78, fp79);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_z[vi], fp81, fp83);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp103 * fp87;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp85;
target[((hsi*90+55)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp106 * fp91;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp66;
target[((hsi*90+54)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp106 * fp90;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp71;
target[((hsi*90+53)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp106 * fp89;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp76;
target[((hsi*90+52)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp106 * fp88;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp85;
target[((hsi*90+51)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp109 * fp91;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp71;
target[((hsi*90+50)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp109 * fp90;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp76;
target[((hsi*90+49)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp109 * fp89;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp85;
target[((hsi*90+48)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp112 * fp91;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp76;
target[((hsi*90+47)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp112 * fp90;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp85;
target[((hsi*90+46)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp116 * fp91;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp85;
target[((hsi*90+45)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_x[vi], fp118, fp121);
LIBINT2_REALTYPE fp241;
fp241 = fp119 * fp101;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp32;
target[((hsi*90+44)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp119 * fp100;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp37;
target[((hsi*90+43)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp119 * fp99;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp42;
target[((hsi*90+42)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp119 * fp98;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp47;
target[((hsi*90+41)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp119 * fp97;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp56;
target[((hsi*90+40)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_x[vi], fp121, fp124);
LIBINT2_REALTYPE fp251;
fp251 = fp122 * fp101;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp37;
target[((hsi*90+39)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp122 * fp100;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp42;
target[((hsi*90+38)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp122 * fp99;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp47;
target[((hsi*90+37)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp122 * fp98;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp56;
target[((hsi*90+36)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_x[vi], fp124, fp127);
LIBINT2_REALTYPE fp259;
fp259 = fp125 * fp101;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp42;
target[((hsi*90+35)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp125 * fp100;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp47;
target[((hsi*90+34)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp125 * fp99;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp56;
target[((hsi*90+33)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_x[vi], fp127, fp130);
LIBINT2_REALTYPE fp265;
fp265 = fp128 * fp101;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp47;
target[((hsi*90+32)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp128 * fp100;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp56;
target[((hsi*90+31)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_x[vi] * fp130;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp131 + fp133;
LIBINT2_REALTYPE fp269;
fp269 = fp132 * fp101;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp56;
target[((hsi*90+30)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp119 * fp96;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp61;
target[((hsi*90+29)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp119 * fp95;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp66;
target[((hsi*90+28)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp119 * fp94;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp71;
target[((hsi*90+27)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp119 * fp93;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp76;
target[((hsi*90+26)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp119 * fp92;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp85;
target[((hsi*90+25)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp122 * fp96;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp66;
target[((hsi*90+24)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp122 * fp95;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp71;
target[((hsi*90+23)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp122 * fp94;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp76;
target[((hsi*90+22)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp122 * fp93;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp85;
target[((hsi*90+21)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp125 * fp96;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp71;
target[((hsi*90+20)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp125 * fp95;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp76;
target[((hsi*90+19)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp125 * fp94;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp85;
target[((hsi*90+18)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp128 * fp96;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp76;
target[((hsi*90+17)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp128 * fp95;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp85;
target[((hsi*90+16)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp132 * fp96;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp85;
target[((hsi*90+15)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->BO_x[vi], fp134, fp137);
LIBINT2_REALTYPE fp301;
fp301 = fp135 * fp101;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp61;
target[((hsi*90+14)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp135 * fp100;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp66;
target[((hsi*90+13)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp135 * fp99;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp71;
target[((hsi*90+12)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp135 * fp98;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp76;
target[((hsi*90+11)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp135 * fp97;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp85;
target[((hsi*90+10)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_x[vi], fp137, fp140);
LIBINT2_REALTYPE fp311;
fp311 = fp138 * fp101;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp66;
target[((hsi*90+9)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp138 * fp100;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp71;
target[((hsi*90+8)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp138 * fp99;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp76;
target[((hsi*90+7)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp138 * fp98;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp85;
target[((hsi*90+6)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->BO_x[vi], fp140, fp143);
LIBINT2_REALTYPE fp319;
fp319 = fp141 * fp101;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp71;
target[((hsi*90+5)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp141 * fp100;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp76;
target[((hsi*90+4)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp141 * fp99;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp85;
target[((hsi*90+3)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp143, fp146);
LIBINT2_REALTYPE fp325;
fp325 = fp144 * fp101;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp76;
target[((hsi*90+2)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp144 * fp100;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp85;
target[((hsi*90+1)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp146;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp147 + fp149;
LIBINT2_REALTYPE fp329;
fp329 = fp148 * fp101;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp85;
target[((hsi*90+0)*1+lsi)*1] = fp328;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 330 */
}

#ifdef __cplusplus
};
#endif
