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
void CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*5+2)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*5+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*5+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*5+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_x[vi], fp11, fp16);
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src0[((hsi*5+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_x[vi], fp6, fp11);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_x[vi], fp7, fp12);
LIBINT2_REALTYPE fp26;
fp26 = fp9 * fp5;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp0;
target[((hsi*6+5)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*5+1)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*5+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp9 * fp4;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp1;
target[((hsi*6+4)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*5+0)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src1[((hsi*5+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp9 * fp3;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp2;
target[((hsi*6+3)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*5+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_x[vi], fp16, fp17);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_x[vi], fp12, fp19);
LIBINT2_REALTYPE fp32;
fp32 = fp14 * fp5;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp1;
target[((hsi*6+2)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp14 * fp4;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp2;
target[((hsi*6+1)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_x[vi] * fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_x[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*5+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp36;
fp36 = fp23 * fp5;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp2;
target[((hsi*6+0)*1+lsi)*1] = fp35;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 37 */
}

#ifdef __cplusplus
};
#endif
