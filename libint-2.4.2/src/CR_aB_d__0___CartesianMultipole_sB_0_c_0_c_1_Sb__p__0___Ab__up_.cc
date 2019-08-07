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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp27 * fp26;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp1;
target[((hsi*18+17)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->BO_z[vi], fp3, fp4);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp27 * fp25;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp5;
target[((hsi*18+16)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp28 * fp26;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp5;
target[((hsi*18+15)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp27 * fp24;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp8;
target[((hsi*18+14)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp11);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp27 * fp23;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp12;
target[((hsi*18+13)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp44;
fp44 = fp28 * fp24;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp12;
target[((hsi*18+12)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp27 * fp22;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp15;
target[((hsi*18+11)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp18);
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp27 * fp21;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp19;
target[((hsi*18+10)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp28 * fp22;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp19;
target[((hsi*18+9)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp29 * fp26;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp8;
target[((hsi*18+8)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp29 * fp25;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp12;
target[((hsi*18+7)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp30 * fp26;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp12;
target[((hsi*18+6)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp29 * fp24;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp15;
target[((hsi*18+5)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp60;
fp60 = fp29 * fp23;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp19;
target[((hsi*18+4)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp30 * fp24;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp19;
target[((hsi*18+3)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp31 * fp26;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp15;
target[((hsi*18+2)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp31 * fp25;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp19;
target[((hsi*18+1)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp32 * fp26;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp19;
target[((hsi*18+0)*1+lsi)*1] = fp67;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 69 */
}

#ifdef __cplusplus
};
#endif
