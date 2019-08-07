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
void CR_aB_d__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_x[vi], fp9, fp10);
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_x[vi], fp6, fp9);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_x[vi], fp7, fp12);
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_x[vi] * fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_x[vi] * fp10;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp11 + fp15;
LIBINT2_REALTYPE fp18;
fp18 = fp14 + fp19;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp55;
fp55 = fp20 * fp5;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp0;
target[((hsi*6+5)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp20 * fp4;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp1;
target[((hsi*6+4)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp20 * fp3;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
target[((hsi*6+3)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_x[vi], fp25, fp26);
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_x[vi], fp22, fp25);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_x[vi], fp23, fp28);
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp61;
fp61 = fp36 * fp5;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
target[((hsi*6+2)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp36 * fp4;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
target[((hsi*6+1)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_x[vi], fp41, fp42);
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp41);
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_x[vi], fp39, fp44);
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_x[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp43 + fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp52;
fp52 = fp50 + fp53;
LIBINT2_REALTYPE fp65;
fp65 = fp52 * fp5;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
target[((hsi*6+0)*1+lsi)*1] = fp64;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 66 */
}

#ifdef __cplusplus
};
#endif
