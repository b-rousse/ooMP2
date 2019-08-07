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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__ps__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+54)*1+lsi)*1], fp1);
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+53)*1+lsi)*1], fp7);
target[((hsi*66+64)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src3[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+52)*1+lsi)*1], fp13);
target[((hsi*66+63)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src3[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+51)*1+lsi)*1], fp19);
target[((hsi*66+62)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src3[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+50)*1+lsi)*1], fp25);
target[((hsi*66+61)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src3[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+49)*1+lsi)*1], fp31);
target[((hsi*66+60)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src3[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+48)*1+lsi)*1], fp37);
target[((hsi*66+59)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src3[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+47)*1+lsi)*1], fp43);
target[((hsi*66+58)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src3[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+46)*1+lsi)*1], fp49);
target[((hsi*66+57)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+45)*1+lsi)*1], fp55);
target[((hsi*66+56)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+45)*1+lsi)*1], fp59);
target[((hsi*66+55)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp65;
fp65 = fp66 + src3[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+44)*1+lsi)*1], fp64);
target[((hsi*66+54)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp71;
fp71 = fp72 + src3[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+43)*1+lsi)*1], fp70);
target[((hsi*66+53)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = fp78 + src3[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+42)*1+lsi)*1], fp76);
target[((hsi*66+52)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src3[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+41)*1+lsi)*1], fp82);
target[((hsi*66+51)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp89;
fp89 = fp90 + src3[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+40)*1+lsi)*1], fp88);
target[((hsi*66+50)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp95;
fp95 = fp96 + src3[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+39)*1+lsi)*1], fp94);
target[((hsi*66+49)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp101;
fp101 = fp102 + src3[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+38)*1+lsi)*1], fp100);
target[((hsi*66+48)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp107;
fp107 = fp108 + src3[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+37)*1+lsi)*1], fp106);
target[((hsi*66+47)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+36)*1+lsi)*1], fp112);
target[((hsi*66+46)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+36)*1+lsi)*1], fp116);
target[((hsi*66+45)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp122;
fp122 = fp123 + src3[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+35)*1+lsi)*1], fp121);
target[((hsi*66+44)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
fp128 = fp129 + src3[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+34)*1+lsi)*1], fp127);
target[((hsi*66+43)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp134;
fp134 = fp135 + src3[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+33)*1+lsi)*1], fp133);
target[((hsi*66+42)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp140;
fp140 = fp141 + src3[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+32)*1+lsi)*1], fp139);
target[((hsi*66+41)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp146;
fp146 = fp147 + src3[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+31)*1+lsi)*1], fp145);
target[((hsi*66+40)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp152;
fp152 = fp153 + src3[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->oo2z[vi] * fp152;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+30)*1+lsi)*1], fp151);
target[((hsi*66+39)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp158;
fp158 = fp159 + src3[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+29)*1+lsi)*1], fp157);
target[((hsi*66+38)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->oo2z[vi] * fp164;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+28)*1+lsi)*1], fp163);
target[((hsi*66+37)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+28)*1+lsi)*1], fp167);
target[((hsi*66+36)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp173;
fp173 = fp174 + src3[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+27)*1+lsi)*1], fp172);
target[((hsi*66+35)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp179;
fp179 = fp180 + src3[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+26)*1+lsi)*1], fp178);
target[((hsi*66+34)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp185;
fp185 = fp186 + src3[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+25)*1+lsi)*1], fp184);
target[((hsi*66+33)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp191;
fp191 = fp192 + src3[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+24)*1+lsi)*1], fp190);
target[((hsi*66+32)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp197;
fp197 = fp198 + src3[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+23)*1+lsi)*1], fp196);
target[((hsi*66+31)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src3[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+22)*1+lsi)*1], fp202);
target[((hsi*66+30)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp209;
fp209 = 0.0000000000000000e+00 + src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+21)*1+lsi)*1], fp208);
target[((hsi*66+29)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp212;
fp212 = inteval->oo2z[vi] * fp213;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+21)*1+lsi)*1], fp212);
target[((hsi*66+28)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp218;
fp218 = fp219 + src3[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->oo2z[vi] * fp218;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+20)*1+lsi)*1], fp217);
target[((hsi*66+27)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp226;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp224;
fp224 = fp225 + src3[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp224;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+19)*1+lsi)*1], fp223);
target[((hsi*66+26)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp230;
fp230 = fp231 + src3[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->oo2z[vi] * fp230;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+18)*1+lsi)*1], fp229);
target[((hsi*66+25)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp236;
fp236 = fp237 + src3[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = inteval->oo2z[vi] * fp236;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+17)*1+lsi)*1], fp235);
target[((hsi*66+24)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp242;
fp242 = fp243 + src3[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+16)*1+lsi)*1], fp241);
target[((hsi*66+23)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->oo2z[vi] * fp248;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+15)*1+lsi)*1], fp247);
target[((hsi*66+22)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+15)*1+lsi)*1], fp251);
target[((hsi*66+21)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp257;
fp257 = fp258 + src3[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->oo2z[vi] * fp257;
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+14)*1+lsi)*1], fp256);
target[((hsi*66+20)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp263;
fp263 = fp264 + src3[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->oo2z[vi] * fp263;
LIBINT2_REALTYPE fp266;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+13)*1+lsi)*1], fp262);
target[((hsi*66+19)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp269;
fp269 = fp270 + src3[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->oo2z[vi] * fp269;
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+12)*1+lsi)*1], fp268);
target[((hsi*66+18)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp275;
fp275 = fp276 + src3[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = inteval->oo2z[vi] * fp275;
LIBINT2_REALTYPE fp278;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+11)*1+lsi)*1], fp274);
target[((hsi*66+17)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp281;
fp281 = 0.0000000000000000e+00 + src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = inteval->oo2z[vi] * fp281;
LIBINT2_REALTYPE fp282;
LIBINT2_REALTYPE fp279;
fp279 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+10)*1+lsi)*1], fp280);
target[((hsi*66+16)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+10)*1+lsi)*1], fp284);
target[((hsi*66+15)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp291;
fp291 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp290;
fp290 = fp291 + src3[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+9)*1+lsi)*1], fp289);
target[((hsi*66+14)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp298;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp296;
fp296 = fp297 + src3[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+8)*1+lsi)*1], fp295);
target[((hsi*66+13)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp302;
fp302 = fp303 + src3[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->oo2z[vi] * fp302;
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+7)*1+lsi)*1], fp301);
target[((hsi*66+12)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp308;
fp308 = 0.0000000000000000e+00 + src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+6)*1+lsi)*1], fp307);
target[((hsi*66+11)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp311;
fp311 = inteval->oo2z[vi] * fp312;
LIBINT2_REALTYPE fp314;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+6)*1+lsi)*1], fp311);
target[((hsi*66+10)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp318;
fp318 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp317;
fp317 = fp318 + src3[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = inteval->oo2z[vi] * fp317;
LIBINT2_REALTYPE fp320;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+5)*1+lsi)*1], fp316);
target[((hsi*66+9)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp323;
fp323 = fp324 + src3[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = inteval->oo2z[vi] * fp323;
LIBINT2_REALTYPE fp326;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+4)*1+lsi)*1], fp322);
target[((hsi*66+8)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp329;
fp329 = 0.0000000000000000e+00 + src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = inteval->oo2z[vi] * fp329;
LIBINT2_REALTYPE fp330;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+3)*1+lsi)*1], fp328);
target[((hsi*66+7)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp333;
fp333 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp332;
fp332 = inteval->oo2z[vi] * fp333;
LIBINT2_REALTYPE fp335;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+3)*1+lsi)*1], fp332);
target[((hsi*66+6)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp338;
fp338 = fp339 + src3[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = inteval->oo2z[vi] * fp338;
LIBINT2_REALTYPE fp341;
LIBINT2_REALTYPE fp336;
fp336 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+2)*1+lsi)*1], fp337);
target[((hsi*66+5)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp344;
fp344 = 0.0000000000000000e+00 + src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->oo2z[vi] * fp344;
LIBINT2_REALTYPE fp345;
LIBINT2_REALTYPE fp342;
fp342 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+1)*1+lsi)*1], fp343);
target[((hsi*66+4)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp349;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp347;
fp347 = inteval->oo2z[vi] * fp348;
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp346;
fp346 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+1)*1+lsi)*1], fp347);
target[((hsi*66+3)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp353;
fp353 = 0.0000000000000000e+00 + src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = inteval->oo2z[vi] * fp353;
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp351;
fp351 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+0)*1+lsi)*1], fp352);
target[((hsi*66+2)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PB_y[vi] * src0[((hsi*55+0)*1+lsi)*1];
target[((hsi*66+1)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp359;
fp359 = 5.0000000000000000e-01 * src2[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
LIBINT2_REALTYPE fp360;
fp360 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp358;
fp358 = fp360 - fp359;
LIBINT2_REALTYPE fp357;
fp357 = inteval->oo2z[vi] * fp358;
LIBINT2_REALTYPE fp362;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*55+0)*1+lsi)*1], fp357);
target[((hsi*66+0)*1+lsi)*1] = fp356;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 363 */
}

#ifdef __cplusplus
};
#endif
