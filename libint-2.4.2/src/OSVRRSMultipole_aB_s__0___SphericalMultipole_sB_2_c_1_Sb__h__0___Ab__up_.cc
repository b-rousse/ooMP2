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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp7);
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp13);
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp19);
target[((hsi*21+17)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp25);
target[((hsi*21+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp29);
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp35;
fp35 = fp36 + src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp35;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp34);
target[((hsi*21+14)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = fp42 + src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp41;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp40);
target[((hsi*21+13)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = fp48 + src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp46);
target[((hsi*21+12)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp52);
target[((hsi*21+11)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp56);
target[((hsi*21+10)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = fp63 + src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp61);
target[((hsi*21+9)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp69 + src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp67);
target[((hsi*21+8)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp73);
target[((hsi*21+7)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp77);
target[((hsi*21+6)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp82);
target[((hsi*21+5)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp88);
target[((hsi*21+4)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp92);
target[((hsi*21+3)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp97);
target[((hsi*21+2)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+1)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp103;
fp103 = fp105 - fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp102);
target[((hsi*21+0)*1+lsi)*1] = fp101;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 108 */
}

#ifdef __cplusplus
};
#endif
