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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__m__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+44)*1+lsi)*1], fp1);
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+43)*1+lsi)*1], fp7);
target[((hsi*55+53)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+42)*1+lsi)*1], fp13);
target[((hsi*55+52)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+41)*1+lsi)*1], fp19);
target[((hsi*55+51)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src2[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+40)*1+lsi)*1], fp25);
target[((hsi*55+50)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src2[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+39)*1+lsi)*1], fp31);
target[((hsi*55+49)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src2[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+38)*1+lsi)*1], fp37);
target[((hsi*55+48)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src2[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+37)*1+lsi)*1], fp43);
target[((hsi*55+47)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+36)*1+lsi)*1], fp49);
target[((hsi*55+46)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+36)*1+lsi)*1], fp53);
target[((hsi*55+45)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = fp60 + src2[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+35)*1+lsi)*1], fp58);
target[((hsi*55+44)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp65;
fp65 = fp66 + src2[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+34)*1+lsi)*1], fp64);
target[((hsi*55+43)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp71;
fp71 = fp72 + src2[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+33)*1+lsi)*1], fp70);
target[((hsi*55+42)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = fp78 + src2[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+32)*1+lsi)*1], fp76);
target[((hsi*55+41)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src2[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+31)*1+lsi)*1], fp82);
target[((hsi*55+40)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp89;
fp89 = fp90 + src2[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+30)*1+lsi)*1], fp88);
target[((hsi*55+39)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp95;
fp95 = fp96 + src2[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+29)*1+lsi)*1], fp94);
target[((hsi*55+38)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src2[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+28)*1+lsi)*1], fp100);
target[((hsi*55+37)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+28)*1+lsi)*1], fp104);
target[((hsi*55+36)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = fp111 + src2[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+27)*1+lsi)*1], fp109);
target[((hsi*55+35)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp116;
fp116 = fp117 + src2[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+26)*1+lsi)*1], fp115);
target[((hsi*55+34)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp122;
fp122 = fp123 + src2[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+25)*1+lsi)*1], fp121);
target[((hsi*55+33)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
fp128 = fp129 + src2[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+24)*1+lsi)*1], fp127);
target[((hsi*55+32)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp134;
fp134 = fp135 + src2[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+23)*1+lsi)*1], fp133);
target[((hsi*55+31)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp140;
fp140 = fp141 + src2[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+22)*1+lsi)*1], fp139);
target[((hsi*55+30)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src2[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+21)*1+lsi)*1], fp145);
target[((hsi*55+29)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp149;
fp149 = inteval->oo2z[vi] * fp150;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+21)*1+lsi)*1], fp149);
target[((hsi*55+28)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp155;
fp155 = fp156 + src2[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->oo2z[vi] * fp155;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+20)*1+lsi)*1], fp154);
target[((hsi*55+27)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = fp162 + src2[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+19)*1+lsi)*1], fp160);
target[((hsi*55+26)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src2[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+18)*1+lsi)*1], fp166);
target[((hsi*55+25)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp173;
fp173 = fp174 + src2[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+17)*1+lsi)*1], fp172);
target[((hsi*55+24)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp179;
fp179 = fp180 + src2[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+16)*1+lsi)*1], fp178);
target[((hsi*55+23)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src2[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+15)*1+lsi)*1], fp184);
target[((hsi*55+22)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp189;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+15)*1+lsi)*1], fp188);
target[((hsi*55+21)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp194;
fp194 = fp195 + src2[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+14)*1+lsi)*1], fp193);
target[((hsi*55+20)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp200;
fp200 = fp201 + src2[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->oo2z[vi] * fp200;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+13)*1+lsi)*1], fp199);
target[((hsi*55+19)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp206;
fp206 = fp207 + src2[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+12)*1+lsi)*1], fp205);
target[((hsi*55+18)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp212;
fp212 = fp213 + src2[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->oo2z[vi] * fp212;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+11)*1+lsi)*1], fp211);
target[((hsi*55+17)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp218;
fp218 = 0.0000000000000000e+00 + src2[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->oo2z[vi] * fp218;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+10)*1+lsi)*1], fp217);
target[((hsi*55+16)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+10)*1+lsi)*1], fp221);
target[((hsi*55+15)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp227;
fp227 = fp228 + src2[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+9)*1+lsi)*1], fp226);
target[((hsi*55+14)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp233;
fp233 = fp234 + src2[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+8)*1+lsi)*1], fp232);
target[((hsi*55+13)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp239;
fp239 = fp240 + src2[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+7)*1+lsi)*1], fp238);
target[((hsi*55+12)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + src2[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+6)*1+lsi)*1], fp244);
target[((hsi*55+11)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp250;
LIBINT2_REALTYPE fp249;
fp249 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+6)*1+lsi)*1], fp248);
target[((hsi*55+10)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp254;
fp254 = fp255 + src2[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->oo2z[vi] * fp254;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+5)*1+lsi)*1], fp253);
target[((hsi*55+9)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp260;
fp260 = fp261 + src2[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = inteval->oo2z[vi] * fp260;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+4)*1+lsi)*1], fp259);
target[((hsi*55+8)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp266;
fp266 = 0.0000000000000000e+00 + src2[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->oo2z[vi] * fp266;
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+3)*1+lsi)*1], fp265);
target[((hsi*55+7)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp269;
fp269 = inteval->oo2z[vi] * fp270;
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+3)*1+lsi)*1], fp269);
target[((hsi*55+6)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp275;
fp275 = fp276 + src2[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = inteval->oo2z[vi] * fp275;
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+2)*1+lsi)*1], fp274);
target[((hsi*55+5)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp281;
fp281 = 0.0000000000000000e+00 + src2[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = inteval->oo2z[vi] * fp281;
LIBINT2_REALTYPE fp282;
LIBINT2_REALTYPE fp279;
fp279 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+1)*1+lsi)*1], fp280);
target[((hsi*55+4)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+1)*1+lsi)*1], fp284);
target[((hsi*55+3)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp290;
fp290 = 0.0000000000000000e+00 + src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+0)*1+lsi)*1], fp289);
target[((hsi*55+2)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp292;
fp292 = inteval->PB_y[vi] * src0[((hsi*45+0)*1+lsi)*1];
target[((hsi*55+1)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp295;
fp295 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp294;
fp294 = inteval->oo2z[vi] * fp295;
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp293;
fp293 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*45+0)*1+lsi)*1], fp294);
target[((hsi*55+0)*1+lsi)*1] = fp293;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 298 */
}

#ifdef __cplusplus
};
#endif
