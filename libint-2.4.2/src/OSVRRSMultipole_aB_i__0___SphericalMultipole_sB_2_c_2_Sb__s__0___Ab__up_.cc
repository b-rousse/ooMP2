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
void OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp1);
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp6);
target[((hsi*28+26)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp11);
target[((hsi*28+25)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp16);
target[((hsi*28+24)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp21);
target[((hsi*28+23)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
target[((hsi*28+22)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+15)*1+lsi)*1], fp27);
target[((hsi*28+21)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp35;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp34);
target[((hsi*28+20)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp39);
target[((hsi*28+19)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+12)*1+lsi)*1], fp44);
target[((hsi*28+18)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp49);
target[((hsi*28+17)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
target[((hsi*28+16)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp57;
fp57 = 5.0000000000000000e-01 * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+10)*1+lsi)*1], fp55);
target[((hsi*28+15)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+9)*1+lsi)*1], fp62);
target[((hsi*28+14)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp67);
target[((hsi*28+13)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp72);
target[((hsi*28+12)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
target[((hsi*28+11)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+6)*1+lsi)*1], fp78);
target[((hsi*28+10)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+5)*1+lsi)*1], fp85);
target[((hsi*28+9)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = inteval->oo2z[vi] * fp91;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp90);
target[((hsi*28+8)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
target[((hsi*28+7)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp98;
fp98 = 5.0000000000000000e-01 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp96);
target[((hsi*28+6)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp103);
target[((hsi*28+5)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*28+4)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e-01 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp109);
target[((hsi*28+3)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+2)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+0)*1+lsi)*1], fp117);
target[((hsi*28+1)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp122);
target[((hsi*28+0)*1+lsi)*1] = fp121;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 128 */
}

#ifdef __cplusplus
};
#endif
