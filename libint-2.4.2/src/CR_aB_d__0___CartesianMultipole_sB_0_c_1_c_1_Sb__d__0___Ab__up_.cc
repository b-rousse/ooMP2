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
void CR_aB_d__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp57);
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp60 * fp58;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp1;
target[((hsi*36+35)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp3);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp57, fp53);
LIBINT2_REALTYPE fp72;
fp72 = fp60 * fp54;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp4;
target[((hsi*36+34)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp74;
fp74 = fp60 * fp51;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp8;
target[((hsi*36+33)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp61 * fp58;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp4;
target[((hsi*36+32)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp61 * fp54;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp8;
target[((hsi*36+31)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp62 * fp58;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp8;
target[((hsi*36+30)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp47);
LIBINT2_REALTYPE fp82;
fp82 = fp60 * fp48;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp11;
target[((hsi*36+29)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp13);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp43);
LIBINT2_REALTYPE fp84;
fp84 = fp60 * fp44;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp14;
target[((hsi*36+28)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp17);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp86;
fp86 = fp60 * fp41;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp18;
target[((hsi*36+27)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp61 * fp48;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp14;
target[((hsi*36+26)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp61 * fp44;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp18;
target[((hsi*36+25)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp62 * fp48;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp18;
target[((hsi*36+24)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp37);
LIBINT2_REALTYPE fp94;
fp94 = fp60 * fp38;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp21;
target[((hsi*36+23)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp23);
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp33);
LIBINT2_REALTYPE fp96;
fp96 = fp60 * fp34;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp24;
target[((hsi*36+22)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp27);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp98;
fp98 = fp60 * fp31;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp28;
target[((hsi*36+21)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp61 * fp38;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp24;
target[((hsi*36+20)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp61 * fp34;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp28;
target[((hsi*36+19)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp62 * fp38;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp28;
target[((hsi*36+18)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp63 * fp58;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp11;
target[((hsi*36+17)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp63 * fp54;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp14;
target[((hsi*36+16)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp63 * fp51;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp18;
target[((hsi*36+15)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp64 * fp58;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp14;
target[((hsi*36+14)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp64 * fp54;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp18;
target[((hsi*36+13)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp65 * fp58;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp18;
target[((hsi*36+12)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp63 * fp48;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp21;
target[((hsi*36+11)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = fp63 * fp44;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp24;
target[((hsi*36+10)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp63 * fp41;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp28;
target[((hsi*36+9)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp64 * fp48;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp24;
target[((hsi*36+8)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp64 * fp44;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp28;
target[((hsi*36+7)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp65 * fp48;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp28;
target[((hsi*36+6)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp66 * fp58;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp21;
target[((hsi*36+5)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp66 * fp54;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp24;
target[((hsi*36+4)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp66 * fp51;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp28;
target[((hsi*36+3)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp67 * fp58;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp24;
target[((hsi*36+2)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp67 * fp54;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp28;
target[((hsi*36+1)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp68 * fp58;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp28;
target[((hsi*36+0)*1+lsi)*1] = fp139;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 141 */
}

#ifdef __cplusplus
};
#endif
