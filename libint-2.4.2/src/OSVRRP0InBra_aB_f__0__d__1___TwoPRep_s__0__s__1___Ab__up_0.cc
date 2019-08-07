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
void OSVRRP0InBra_aB_f__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp332;
fp332 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp332 * src4[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+17)*1+lsi)*1], src2[((hsi*18+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp3;
fp3 = fp337 * fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+35)*1+lsi)*1], fp7);
LIBINT2_REALTYPE fp2;
fp2 = fp6 - fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp322;
fp322 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp322 * src4[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+16)*1+lsi)*1], src2[((hsi*18+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = fp337 * fp13;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+34)*1+lsi)*1], fp16);
LIBINT2_REALTYPE fp11;
fp11 = fp15 - fp12;
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*60+58)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+15)*1+lsi)*1], src2[((hsi*18+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp19;
fp19 = fp337 * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+33)*1+lsi)*1], fp23);
LIBINT2_REALTYPE fp18;
fp18 = fp22 - fp19;
target[((hsi*60+57)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp26;
fp26 = fp322 * src4[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+14)*1+lsi)*1], src2[((hsi*18+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp28;
fp28 = fp337 * fp29;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+32)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp27;
fp27 = fp31 - fp28;
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
target[((hsi*60+56)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+13)*1+lsi)*1], src2[((hsi*18+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp35;
fp35 = fp337 * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+31)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp34;
fp34 = fp38 - fp35;
target[((hsi*60+55)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+12)*1+lsi)*1], src2[((hsi*18+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp42;
fp42 = fp337 * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+30)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp41;
fp41 = fp45 - fp42;
target[((hsi*60+54)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
fp49 = fp332 * src4[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+11)*1+lsi)*1], src2[((hsi*18+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp51;
fp51 = fp241 * fp109;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+29)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp50;
fp50 = fp52 - fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*60+53)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
fp56 = fp322 * src4[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+10)*1+lsi)*1], src2[((hsi*18+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = fp241 * fp118;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+28)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
target[((hsi*60+52)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+9)*1+lsi)*1], src2[((hsi*18+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp63;
fp63 = fp241 * fp127;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_z[vi] * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
target[((hsi*60+51)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp68;
fp68 = fp322 * src4[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+8)*1+lsi)*1], src2[((hsi*18+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp70;
fp70 = fp241 * fp134;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp72);
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*60+50)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+7)*1+lsi)*1], src2[((hsi*18+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp75;
fp75 = fp241 * fp143;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp77);
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
target[((hsi*60+49)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+6)*1+lsi)*1], src2[((hsi*18+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp80;
fp80 = fp241 * fp150;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp82);
LIBINT2_REALTYPE fp79;
fp79 = fp81 - fp80;
target[((hsi*60+48)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp85;
fp85 = fp332 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_z[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp87);
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*60+47)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp90;
fp90 = fp322 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+22)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*60+46)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+21)*1+lsi)*1], fp95);
target[((hsi*60+45)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp140;
fp140 = fp322 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp99);
LIBINT2_REALTYPE fp97;
fp97 = fp98 + fp140;
target[((hsi*60+44)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp102);
target[((hsi*60+43)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+18)*1+lsi)*1], fp105);
target[((hsi*60+42)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp108;
fp108 = fp337 * fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_y[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+23)*1+lsi)*1], fp112);
LIBINT2_REALTYPE fp107;
fp107 = fp111 - fp108;
target[((hsi*60+41)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp115;
fp115 = fp322 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp337 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+22)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp116;
fp116 = fp120 - fp117;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*60+40)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp124;
fp124 = fp332 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp337 * fp127;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+21)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp125;
fp125 = fp129 - fp126;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
target[((hsi*60+39)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp133;
fp133 = fp337 * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_y[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+20)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp132;
fp132 = fp136 - fp133;
target[((hsi*60+38)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp142;
fp142 = fp337 * fp143;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_y[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+19)*1+lsi)*1], fp146);
LIBINT2_REALTYPE fp141;
fp141 = fp145 - fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
target[((hsi*60+37)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp149;
fp149 = fp337 * fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_y[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+18)*1+lsi)*1], fp153);
LIBINT2_REALTYPE fp148;
fp148 = fp152 - fp149;
target[((hsi*60+36)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp156;
fp156 = fp332 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+5)*1+lsi)*1], src2[((hsi*18+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp209;
fp209 = fp241 * fp292;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_z[vi] * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp157;
fp157 = fp158 - fp209;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
target[((hsi*60+35)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp162;
fp162 = fp322 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+4)*1+lsi)*1], src2[((hsi*18+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp216;
fp216 = fp241 * fp299;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp165);
LIBINT2_REALTYPE fp163;
fp163 = fp164 - fp216;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
target[((hsi*60+34)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+3)*1+lsi)*1], src2[((hsi*18+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp223;
fp223 = fp241 * fp306;
LIBINT2_REALTYPE fp169;
fp169 = inteval->WP_z[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+15)*1+lsi)*1], fp169);
LIBINT2_REALTYPE fp167;
fp167 = fp168 - fp223;
target[((hsi*60+33)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp172;
fp172 = fp322 * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+2)*1+lsi)*1], src2[((hsi*18+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp228;
fp228 = fp241 * fp315;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_z[vi] * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp173;
fp173 = fp174 - fp228;
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
target[((hsi*60+32)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp326;
LIBINT2_REALTYPE fp325;
fp325 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+1)*1+lsi)*1], src2[((hsi*18+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp235;
fp235 = fp241 * fp325;
LIBINT2_REALTYPE fp179;
fp179 = inteval->WP_z[vi] * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp179);
LIBINT2_REALTYPE fp177;
fp177 = fp178 - fp235;
target[((hsi*60+31)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp336;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*18+0)*1+lsi)*1], src2[((hsi*18+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp335;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WP_z[vi] * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+12)*1+lsi)*1], fp183);
LIBINT2_REALTYPE fp181;
fp181 = fp182 - fp240;
target[((hsi*60+30)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp186;
fp186 = fp332 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_z[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp188);
LIBINT2_REALTYPE fp185;
fp185 = fp187 + fp186;
target[((hsi*60+29)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp191;
fp191 = fp322 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->WP_z[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+10)*1+lsi)*1], fp193);
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*60+28)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_z[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+9)*1+lsi)*1], fp196);
target[((hsi*60+27)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp233;
fp233 = fp322 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_z[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp200);
LIBINT2_REALTYPE fp198;
fp198 = fp199 + fp233;
target[((hsi*60+26)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WP_z[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp203);
target[((hsi*60+25)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp206;
fp206 = inteval->WP_z[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+6)*1+lsi)*1], fp206);
target[((hsi*60+24)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp211;
fp211 = inteval->WP_y[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+11)*1+lsi)*1], fp211);
LIBINT2_REALTYPE fp208;
fp208 = fp210 - fp209;
target[((hsi*60+23)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp214;
fp214 = fp322 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->WP_y[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+10)*1+lsi)*1], fp218);
LIBINT2_REALTYPE fp215;
fp215 = fp217 - fp216;
LIBINT2_REALTYPE fp213;
fp213 = fp215 + fp214;
target[((hsi*60+22)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp221;
fp221 = fp332 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_y[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+9)*1+lsi)*1], fp225);
LIBINT2_REALTYPE fp222;
fp222 = fp224 - fp223;
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
target[((hsi*60+21)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp230;
fp230 = inteval->WP_y[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+8)*1+lsi)*1], fp230);
LIBINT2_REALTYPE fp227;
fp227 = fp229 - fp228;
target[((hsi*60+20)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp237;
fp237 = inteval->WP_y[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+7)*1+lsi)*1], fp237);
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
LIBINT2_REALTYPE fp232;
fp232 = fp234 + fp233;
target[((hsi*60+19)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp243;
fp243 = inteval->WP_y[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+6)*1+lsi)*1], fp243);
LIBINT2_REALTYPE fp239;
fp239 = fp242 - fp240;
target[((hsi*60+18)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp246;
fp246 = fp332 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_z[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+5)*1+lsi)*1], fp248);
LIBINT2_REALTYPE fp245;
fp245 = fp247 + fp246;
target[((hsi*60+17)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = inteval->WP_z[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp252);
LIBINT2_REALTYPE fp250;
fp250 = fp251 + fp321;
target[((hsi*60+16)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp255;
fp255 = inteval->WP_z[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+3)*1+lsi)*1], fp255);
target[((hsi*60+15)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp283;
fp283 = fp322 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = inteval->WP_z[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp259);
LIBINT2_REALTYPE fp257;
fp257 = fp258 + fp283;
target[((hsi*60+14)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WP_z[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+1)*1+lsi)*1], fp262);
target[((hsi*60+13)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp265;
fp265 = inteval->WP_z[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+0)*1+lsi)*1], fp265);
target[((hsi*60+12)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WP_y[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+5)*1+lsi)*1], fp268);
target[((hsi*60+11)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp312;
fp312 = fp322 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = inteval->WP_y[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+4)*1+lsi)*1], fp272);
LIBINT2_REALTYPE fp270;
fp270 = fp271 + fp312;
target[((hsi*60+10)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp275;
fp275 = fp332 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->WP_y[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp277);
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
target[((hsi*60+9)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp280;
fp280 = inteval->WP_y[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp279;
fp279 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+2)*1+lsi)*1], fp280);
target[((hsi*60+8)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp285;
fp285 = inteval->WP_y[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp285);
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
target[((hsi*60+7)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp288;
fp288 = inteval->WP_y[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
LIBINT2_REALTYPE fp287;
fp287 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+0)*1+lsi)*1], fp288);
target[((hsi*60+6)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp291;
fp291 = fp337 * fp292;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WP_x[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+5)*1+lsi)*1], fp295);
LIBINT2_REALTYPE fp290;
fp290 = fp294 - fp291;
target[((hsi*60+5)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp298;
fp298 = fp337 * fp299;
LIBINT2_REALTYPE fp302;
fp302 = inteval->WP_x[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+4)*1+lsi)*1], fp302);
LIBINT2_REALTYPE fp297;
fp297 = fp301 - fp298;
target[((hsi*60+4)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp305;
fp305 = fp337 * fp306;
LIBINT2_REALTYPE fp309;
fp309 = inteval->WP_x[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+3)*1+lsi)*1], fp309);
LIBINT2_REALTYPE fp304;
fp304 = fp308 - fp305;
target[((hsi*60+3)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp314;
fp314 = fp337 * fp315;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WP_x[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+2)*1+lsi)*1], fp318);
LIBINT2_REALTYPE fp313;
fp313 = fp317 - fp314;
LIBINT2_REALTYPE fp311;
fp311 = fp313 + fp312;
target[((hsi*60+2)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp324;
fp324 = fp337 * fp325;
LIBINT2_REALTYPE fp328;
fp328 = inteval->WP_x[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+1)*1+lsi)*1], fp328);
LIBINT2_REALTYPE fp323;
fp323 = fp327 - fp324;
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
target[((hsi*60+1)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp337 * fp335;
LIBINT2_REALTYPE fp339;
fp339 = inteval->WP_x[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp338;
fp338 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp339);
LIBINT2_REALTYPE fp333;
fp333 = fp338 - fp334;
LIBINT2_REALTYPE fp330;
fp330 = fp333 + fp331;
target[((hsi*60+0)*1+lsi)*1] = fp330;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 341 */
}

#ifdef __cplusplus
};
#endif
