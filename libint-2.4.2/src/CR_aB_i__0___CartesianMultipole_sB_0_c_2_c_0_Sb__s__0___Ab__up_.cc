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
void CR_aB_i__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp61, fp62);
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp63 + fp67;
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp70 * fp68;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp0;
target[((hsi*28+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp53);
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp55;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp54 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp80;
fp80 = fp70 * fp59;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp1;
target[((hsi*28+26)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp44);
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp45 + fp49;
LIBINT2_REALTYPE fp50;
fp50 = fp48 + fp51;
LIBINT2_REALTYPE fp82;
fp82 = fp70 * fp50;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp2;
target[((hsi*28+25)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp34, fp35);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp36 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp84;
fp84 = fp70 * fp41;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp3;
target[((hsi*28+24)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp25, fp26);
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp86;
fp86 = fp70 * fp32;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp4;
target[((hsi*28+23)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_y[vi], fp16, fp17);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp88;
fp88 = fp70 * fp23;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
target[((hsi*28+22)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_y[vi], fp7, fp8);
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_y[vi] * fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp9 + fp13;
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp70 * fp14;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp6;
target[((hsi*28+21)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp71 * fp68;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp1;
target[((hsi*28+20)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp71 * fp59;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp2;
target[((hsi*28+19)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp71 * fp50;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp3;
target[((hsi*28+18)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp71 * fp41;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp4;
target[((hsi*28+17)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp71 * fp32;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp5;
target[((hsi*28+16)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp71 * fp23;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp6;
target[((hsi*28+15)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp72 * fp68;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp2;
target[((hsi*28+14)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp72 * fp59;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp3;
target[((hsi*28+13)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp72 * fp50;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp4;
target[((hsi*28+12)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp72 * fp41;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp5;
target[((hsi*28+11)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp72 * fp32;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp6;
target[((hsi*28+10)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp73 * fp68;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp3;
target[((hsi*28+9)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp73 * fp59;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp4;
target[((hsi*28+8)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp73 * fp50;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp5;
target[((hsi*28+7)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = fp73 * fp41;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp6;
target[((hsi*28+6)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp74 * fp68;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp4;
target[((hsi*28+5)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp74 * fp59;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp5;
target[((hsi*28+4)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp74 * fp50;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp6;
target[((hsi*28+3)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp75 * fp68;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp5;
target[((hsi*28+2)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp75 * fp59;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp6;
target[((hsi*28+1)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp76 * fp68;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp6;
target[((hsi*28+0)*1+lsi)*1] = fp131;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 133 */
}

#ifdef __cplusplus
};
#endif
