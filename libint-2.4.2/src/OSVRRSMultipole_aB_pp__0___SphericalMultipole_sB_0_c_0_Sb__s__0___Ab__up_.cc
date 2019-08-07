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
void OSVRRSMultipole_aB_pp__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+54)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+65)*1+lsi)*1], fp1);
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+53)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+64)*1+lsi)*1], fp6);
target[((hsi*78+76)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+52)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+63)*1+lsi)*1], fp11);
target[((hsi*78+75)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+51)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+62)*1+lsi)*1], fp16);
target[((hsi*78+74)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+50)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+61)*1+lsi)*1], fp21);
target[((hsi*78+73)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+49)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+60)*1+lsi)*1], fp26);
target[((hsi*78+72)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+48)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+59)*1+lsi)*1], fp31);
target[((hsi*78+71)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+47)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+58)*1+lsi)*1], fp36);
target[((hsi*78+70)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+46)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+57)*1+lsi)*1], fp41);
target[((hsi*78+69)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+56)*1+lsi)*1], fp46);
target[((hsi*78+68)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
target[((hsi*78+67)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+55)*1+lsi)*1], fp52);
target[((hsi*78+66)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+54)*1+lsi)*1], fp57);
target[((hsi*78+65)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+53)*1+lsi)*1], fp62);
target[((hsi*78+64)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+52)*1+lsi)*1], fp67);
target[((hsi*78+63)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+51)*1+lsi)*1], fp72);
target[((hsi*78+62)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+50)*1+lsi)*1], fp77);
target[((hsi*78+61)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+49)*1+lsi)*1], fp82);
target[((hsi*78+60)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2z[vi] * fp88;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+48)*1+lsi)*1], fp87);
target[((hsi*78+59)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+47)*1+lsi)*1], fp92);
target[((hsi*78+58)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+46)*1+lsi)*1], fp97);
target[((hsi*78+57)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
target[((hsi*78+56)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+45)*1+lsi)*1], fp103);
target[((hsi*78+55)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+44)*1+lsi)*1], fp108);
target[((hsi*78+54)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+43)*1+lsi)*1], fp113);
target[((hsi*78+53)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+42)*1+lsi)*1], fp118);
target[((hsi*78+52)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+41)*1+lsi)*1], fp123);
target[((hsi*78+51)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+40)*1+lsi)*1], fp128);
target[((hsi*78+50)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+39)*1+lsi)*1], fp133);
target[((hsi*78+49)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+38)*1+lsi)*1], fp138);
target[((hsi*78+48)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+37)*1+lsi)*1], fp143);
target[((hsi*78+47)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
target[((hsi*78+46)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp149;
fp149 = inteval->oo2z[vi] * fp150;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+36)*1+lsi)*1], fp149);
target[((hsi*78+45)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp154;
fp154 = inteval->oo2z[vi] * fp155;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+35)*1+lsi)*1], fp154);
target[((hsi*78+44)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp159;
fp159 = inteval->oo2z[vi] * fp160;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+34)*1+lsi)*1], fp159);
target[((hsi*78+43)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2z[vi] * fp165;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+33)*1+lsi)*1], fp164);
target[((hsi*78+42)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp170;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+32)*1+lsi)*1], fp169);
target[((hsi*78+41)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp174;
fp174 = inteval->oo2z[vi] * fp175;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+31)*1+lsi)*1], fp174);
target[((hsi*78+40)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp179;
fp179 = inteval->oo2z[vi] * fp180;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+30)*1+lsi)*1], fp179);
target[((hsi*78+39)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+29)*1+lsi)*1], fp184);
target[((hsi*78+38)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
target[((hsi*78+37)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+28)*1+lsi)*1], fp190);
target[((hsi*78+36)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+27)*1+lsi)*1], fp195);
target[((hsi*78+35)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp200;
fp200 = inteval->oo2z[vi] * fp201;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+26)*1+lsi)*1], fp200);
target[((hsi*78+34)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+25)*1+lsi)*1], fp205);
target[((hsi*78+33)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp210;
fp210 = inteval->oo2z[vi] * fp211;
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+24)*1+lsi)*1], fp210);
target[((hsi*78+32)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp215;
fp215 = inteval->oo2z[vi] * fp216;
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+23)*1+lsi)*1], fp215);
target[((hsi*78+31)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp220;
fp220 = inteval->oo2z[vi] * fp221;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+22)*1+lsi)*1], fp220);
target[((hsi*78+30)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp224;
fp224 = inteval->PA_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
target[((hsi*78+29)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+21)*1+lsi)*1], fp226);
target[((hsi*78+28)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp232;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+20)*1+lsi)*1], fp231);
target[((hsi*78+27)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp236;
fp236 = inteval->oo2z[vi] * fp237;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+19)*1+lsi)*1], fp236);
target[((hsi*78+26)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+18)*1+lsi)*1], fp241);
target[((hsi*78+25)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+17)*1+lsi)*1], fp246);
target[((hsi*78+24)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+16)*1+lsi)*1], fp251);
target[((hsi*78+23)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
target[((hsi*78+22)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp257;
fp257 = inteval->oo2z[vi] * fp258;
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+15)*1+lsi)*1], fp257);
target[((hsi*78+21)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp262;
fp262 = inteval->oo2z[vi] * fp263;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+14)*1+lsi)*1], fp262);
target[((hsi*78+20)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp270;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+13)*1+lsi)*1], fp267);
target[((hsi*78+19)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp272;
fp272 = inteval->oo2z[vi] * fp273;
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+12)*1+lsi)*1], fp272);
target[((hsi*78+18)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp277;
fp277 = inteval->oo2z[vi] * fp278;
LIBINT2_REALTYPE fp280;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+11)*1+lsi)*1], fp277);
target[((hsi*78+17)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PA_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
target[((hsi*78+16)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp283;
fp283 = inteval->oo2z[vi] * fp284;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+10)*1+lsi)*1], fp283);
target[((hsi*78+15)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp290;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp288;
fp288 = inteval->oo2z[vi] * fp289;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp287;
fp287 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+9)*1+lsi)*1], fp288);
target[((hsi*78+14)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp293;
fp293 = inteval->oo2z[vi] * fp294;
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+8)*1+lsi)*1], fp293);
target[((hsi*78+13)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp300;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp298;
fp298 = inteval->oo2z[vi] * fp299;
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+7)*1+lsi)*1], fp298);
target[((hsi*78+12)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PA_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
target[((hsi*78+11)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp304;
fp304 = inteval->oo2z[vi] * fp305;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+6)*1+lsi)*1], fp304);
target[((hsi*78+10)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp309;
fp309 = inteval->oo2z[vi] * fp310;
LIBINT2_REALTYPE fp312;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+5)*1+lsi)*1], fp309);
target[((hsi*78+9)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp314;
fp314 = inteval->oo2z[vi] * fp315;
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+4)*1+lsi)*1], fp314);
target[((hsi*78+8)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp318;
fp318 = inteval->PA_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
target[((hsi*78+7)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp320;
fp320 = inteval->oo2z[vi] * fp321;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp319;
fp319 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+3)*1+lsi)*1], fp320);
target[((hsi*78+6)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp325;
fp325 = inteval->oo2z[vi] * fp326;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*66+2)*1+lsi)*1], fp325);
target[((hsi*78+5)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp329;
fp329 = inteval->PA_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
target[((hsi*78+4)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp331;
fp331 = inteval->oo2z[vi] * fp332;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp330;
fp330 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*66+1)*1+lsi)*1], fp331);
target[((hsi*78+3)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp335;
fp335 = inteval->PA_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
target[((hsi*78+2)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp336;
fp336 = inteval->PA_y[vi] * src0[((hsi*66+0)*1+lsi)*1];
target[((hsi*78+1)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp338;
fp338 = inteval->oo2z[vi] * fp339;
LIBINT2_REALTYPE fp341;
LIBINT2_REALTYPE fp337;
fp337 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*66+0)*1+lsi)*1], fp338);
target[((hsi*78+0)*1+lsi)*1] = fp337;
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
