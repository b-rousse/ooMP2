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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src3[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*1+0)*1+lsi)*1], fp1);
target[((hsi*3+2)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 5.0000000000000000e-01 * src2[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = inteval->oo2z[vi] * fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*1+0)*1+lsi)*1], fp5);
target[((hsi*3+1)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp13;
fp13 = -5.0000000000000000e-01 * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(5.0000000000000000e-01, src1[((hsi*1+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*1+0)*1+lsi)*1], fp11);
target[((hsi*3+0)*1+lsi)*1] = fp10;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 17 */
}

#ifdef __cplusplus
};
#endif
