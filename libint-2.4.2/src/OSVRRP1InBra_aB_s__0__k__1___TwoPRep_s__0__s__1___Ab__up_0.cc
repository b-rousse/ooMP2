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
void OSVRRP1InBra_aB_s__0__k__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+20)*1+lsi)*1], src2[((hsi*21+20)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp6);
LIBINT2_REALTYPE fp0;
fp0 = fp5 - fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+19)*1+lsi)*1], src2[((hsi*21+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13 - fp9;
target[((hsi*36+34)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+18)*1+lsi)*1], src2[((hsi*21+18)*1+lsi)*1]);
LIBINT2_REALTYPE fp20;
fp20 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp20 * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_z[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp16;
fp16 = fp21 - fp17;
target[((hsi*36+33)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+17)*1+lsi)*1], src2[((hsi*21+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp28;
fp28 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp24;
fp24 = fp29 - fp25;
target[((hsi*36+32)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+16)*1+lsi)*1], src2[((hsi*21+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp36;
fp36 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_z[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp38);
LIBINT2_REALTYPE fp32;
fp32 = fp37 - fp33;
target[((hsi*36+31)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+15)*1+lsi)*1], src2[((hsi*21+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp44 * fp42;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp40;
fp40 = fp45 - fp41;
target[((hsi*36+30)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_z[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp49);
target[((hsi*36+29)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+15)*1+lsi)*1], src2[((hsi*21+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp55;
fp55 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp55 * fp53;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_y[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+21)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp51;
fp51 = fp56 - fp52;
target[((hsi*36+28)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+14)*1+lsi)*1], src2[((hsi*21+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp63 * fp61;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_z[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp59;
fp59 = fp64 - fp60;
target[((hsi*36+27)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+13)*1+lsi)*1], src2[((hsi*21+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp71;
fp71 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp71 * fp69;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_z[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp73);
LIBINT2_REALTYPE fp67;
fp67 = fp72 - fp68;
target[((hsi*36+26)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+12)*1+lsi)*1], src2[((hsi*21+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp79 * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+18)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp75;
fp75 = fp80 - fp76;
target[((hsi*36+25)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+11)*1+lsi)*1], src2[((hsi*21+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp87;
fp87 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp87 * fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_z[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp89);
LIBINT2_REALTYPE fp83;
fp83 = fp88 - fp84;
target[((hsi*36+24)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+10)*1+lsi)*1], src2[((hsi*21+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp95 * fp93;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp97);
LIBINT2_REALTYPE fp91;
fp91 = fp96 - fp92;
target[((hsi*36+23)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_z[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp100);
target[((hsi*36+22)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+10)*1+lsi)*1], src2[((hsi*21+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp106 * fp104;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_y[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+15)*1+lsi)*1], fp108);
LIBINT2_REALTYPE fp102;
fp102 = fp107 - fp103;
target[((hsi*36+21)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+9)*1+lsi)*1], src2[((hsi*21+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp114;
fp114 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp114 * fp112;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_z[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp116);
LIBINT2_REALTYPE fp110;
fp110 = fp115 - fp111;
target[((hsi*36+20)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+8)*1+lsi)*1], src2[((hsi*21+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp122;
fp122 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp122 * fp120;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_z[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp124);
LIBINT2_REALTYPE fp118;
fp118 = fp123 - fp119;
target[((hsi*36+19)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+7)*1+lsi)*1], src2[((hsi*21+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp130;
fp130 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp130 * fp128;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_z[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+12)*1+lsi)*1], fp132);
LIBINT2_REALTYPE fp126;
fp126 = fp131 - fp127;
target[((hsi*36+18)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+6)*1+lsi)*1], src2[((hsi*21+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp138 * fp136;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WQ_z[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp140);
LIBINT2_REALTYPE fp134;
fp134 = fp139 - fp135;
target[((hsi*36+17)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_z[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp143);
target[((hsi*36+16)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+6)*1+lsi)*1], src2[((hsi*21+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp149;
fp149 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp149 * fp147;
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_y[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+10)*1+lsi)*1], fp151);
LIBINT2_REALTYPE fp145;
fp145 = fp150 - fp146;
target[((hsi*36+15)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+5)*1+lsi)*1], src2[((hsi*21+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp157;
fp157 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp154;
fp154 = fp157 * fp155;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_z[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+9)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp153;
fp153 = fp158 - fp154;
target[((hsi*36+14)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+4)*1+lsi)*1], src2[((hsi*21+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp165;
fp165 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp165 * fp163;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp167);
LIBINT2_REALTYPE fp161;
fp161 = fp166 - fp162;
target[((hsi*36+13)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+3)*1+lsi)*1], src2[((hsi*21+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp173;
fp173 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp173 * fp171;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WQ_z[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp169;
fp169 = fp174 - fp170;
target[((hsi*36+12)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_z[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp178);
target[((hsi*36+11)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+3)*1+lsi)*1], src2[((hsi*21+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp184;
fp184 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp184 * fp182;
LIBINT2_REALTYPE fp186;
fp186 = inteval->WQ_y[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+6)*1+lsi)*1], fp186);
LIBINT2_REALTYPE fp180;
fp180 = fp185 - fp181;
target[((hsi*36+10)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+2)*1+lsi)*1], src2[((hsi*21+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp192;
fp192 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp189;
fp189 = fp192 * fp190;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WQ_z[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+5)*1+lsi)*1], fp194);
LIBINT2_REALTYPE fp188;
fp188 = fp193 - fp189;
target[((hsi*36+9)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+1)*1+lsi)*1], src2[((hsi*21+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp200;
fp200 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp197;
fp197 = fp200 * fp198;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WQ_z[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp202);
LIBINT2_REALTYPE fp196;
fp196 = fp201 - fp197;
target[((hsi*36+8)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp205;
fp205 = inteval->WQ_z[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+3)*1+lsi)*1], fp205);
target[((hsi*36+7)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+1)*1+lsi)*1], src2[((hsi*21+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp211;
fp211 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp211 * fp209;
LIBINT2_REALTYPE fp213;
fp213 = inteval->WQ_y[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp213);
LIBINT2_REALTYPE fp207;
fp207 = fp212 - fp208;
target[((hsi*36+6)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+0)*1+lsi)*1], src2[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp219 * fp217;
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_z[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp221);
LIBINT2_REALTYPE fp215;
fp215 = fp220 - fp216;
target[((hsi*36+5)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_z[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+1)*1+lsi)*1], fp224);
target[((hsi*36+4)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+0)*1+lsi)*1], src2[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp227;
fp227 = fp230 * fp228;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WQ_y[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp232);
LIBINT2_REALTYPE fp226;
fp226 = fp231 - fp227;
target[((hsi*36+3)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_z[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*28+0)*1+lsi)*1], fp235);
target[((hsi*36+2)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WQ_y[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*28+0)*1+lsi)*1], fp238);
target[((hsi*36+1)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*21+0)*1+lsi)*1], src2[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp244;
fp244 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp241;
fp241 = fp244 * fp242;
LIBINT2_REALTYPE fp246;
fp246 = inteval->WQ_x[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp246);
LIBINT2_REALTYPE fp240;
fp240 = fp245 - fp241;
target[((hsi*36+0)*1+lsi)*1] = fp240;
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
