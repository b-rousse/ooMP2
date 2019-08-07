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
void CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_x[vi], fp26, fp29);
LIBINT2_REALTYPE fp47;
fp47 = fp27 * fp25;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp1;
target[((hsi*18+17)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp3);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp27 * fp24;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp4;
target[((hsi*18+16)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp27 * fp23;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp8;
target[((hsi*18+15)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_x[vi], fp29, fp32);
LIBINT2_REALTYPE fp53;
fp53 = fp30 * fp25;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
target[((hsi*18+14)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp30 * fp24;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp8;
target[((hsi*18+13)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp57;
fp57 = fp34 * fp25;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp8;
target[((hsi*18+12)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp27 * fp22;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp11;
target[((hsi*18+11)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp13);
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp27 * fp21;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp14;
target[((hsi*18+10)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp17);
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp27 * fp20;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp18;
target[((hsi*18+9)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp30 * fp22;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp14;
target[((hsi*18+8)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp30 * fp21;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp18;
target[((hsi*18+7)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp34 * fp22;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp18;
target[((hsi*18+6)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_x[vi], fp36, fp39);
LIBINT2_REALTYPE fp71;
fp71 = fp37 * fp25;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp11;
target[((hsi*18+5)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp37 * fp24;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp14;
target[((hsi*18+4)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp37 * fp23;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp18;
target[((hsi*18+3)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp39, fp42);
LIBINT2_REALTYPE fp77;
fp77 = fp40 * fp25;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp14;
target[((hsi*18+2)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp40 * fp24;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp18;
target[((hsi*18+1)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp43 + fp45;
LIBINT2_REALTYPE fp81;
fp81 = fp44 * fp25;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp18;
target[((hsi*18+0)*1+lsi)*1] = fp80;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 82 */
}

#ifdef __cplusplus
};
#endif
