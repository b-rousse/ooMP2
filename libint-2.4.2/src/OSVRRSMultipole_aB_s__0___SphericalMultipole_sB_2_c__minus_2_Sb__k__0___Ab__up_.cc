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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp6);
target[((hsi*36+34)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp11);
target[((hsi*36+33)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp16);
target[((hsi*36+32)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp21);
target[((hsi*36+31)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp26);
target[((hsi*36+30)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PB_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
target[((hsi*36+29)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp34;
fp34 = -5.0000000000000000e-01 * src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+21)*1+lsi)*1], fp32);
target[((hsi*36+28)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp39);
target[((hsi*36+27)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp44);
target[((hsi*36+26)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+18)*1+lsi)*1], fp49);
target[((hsi*36+25)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp54);
target[((hsi*36+24)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp59);
target[((hsi*36+23)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PB_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
target[((hsi*36+22)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp67;
fp67 = -5.0000000000000000e-01 * src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+15)*1+lsi)*1], fp65);
target[((hsi*36+21)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp72);
target[((hsi*36+20)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp77);
target[((hsi*36+19)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+12)*1+lsi)*1], fp82);
target[((hsi*36+18)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2z[vi] * fp88;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp87);
target[((hsi*36+17)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PB_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
target[((hsi*36+16)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp95;
fp95 = -5.0000000000000000e-01 * src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+10)*1+lsi)*1], fp93);
target[((hsi*36+15)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+9)*1+lsi)*1], fp100);
target[((hsi*36+14)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp105);
target[((hsi*36+13)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp110);
target[((hsi*36+12)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PB_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp118;
fp118 = -5.0000000000000000e-01 * src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+6)*1+lsi)*1], fp116);
target[((hsi*36+10)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+5)*1+lsi)*1], fp123);
target[((hsi*36+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp128);
target[((hsi*36+8)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*36+7)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp136;
fp136 = -5.0000000000000000e-01 * src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp134);
target[((hsi*36+6)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp141);
target[((hsi*36+5)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PB_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp149;
fp149 = -5.0000000000000000e-01 * src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp147);
target[((hsi*36+3)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PB_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+2)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(-5.0000000000000000e-01, src3[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+0)*1+lsi)*1], fp155);
target[((hsi*36+1)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp162;
fp162 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = fp163 - fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp160);
target[((hsi*36+0)*1+lsi)*1] = fp159;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 166 */
}

#ifdef __cplusplus
};
#endif
