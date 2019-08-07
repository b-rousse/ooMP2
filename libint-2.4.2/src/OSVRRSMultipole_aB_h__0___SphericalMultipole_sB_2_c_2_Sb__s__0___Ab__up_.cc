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
void OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp6);
target[((hsi*21+19)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp11);
target[((hsi*21+18)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp16);
target[((hsi*21+17)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*21+16)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp24;
fp24 = 5.0000000000000000e-01 * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp22);
target[((hsi*21+15)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp29);
target[((hsi*21+14)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp35;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp34);
target[((hsi*21+13)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp39);
target[((hsi*21+12)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp45);
target[((hsi*21+10)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp52);
target[((hsi*21+9)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp57);
target[((hsi*21+8)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PA_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+7)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2z[vi] * fp64;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp63);
target[((hsi*21+6)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp70);
target[((hsi*21+5)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp78;
fp78 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp76);
target[((hsi*21+3)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+2)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp84);
target[((hsi*21+1)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
fp91 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp89);
target[((hsi*21+0)*1+lsi)*1] = fp88;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 95 */
}

#ifdef __cplusplus
};
#endif
