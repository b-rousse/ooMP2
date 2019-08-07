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
void CR_aB_Y0__0___Overlap_Y8__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*9+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * target[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_y[vi] * target[((hsi*9+0)*1+lsi)*1];
target[((hsi*9+1)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+1)*1+lsi)*1], fp25);
target[((hsi*9+2)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp18;
fp18 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * target[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * target[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+2)*1+lsi)*1], fp21);
target[((hsi*9+3)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+3)*1+lsi)*1], fp17);
target[((hsi*9+4)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * target[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * target[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+4)*1+lsi)*1], fp13);
target[((hsi*9+5)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+5)*1+lsi)*1], fp9);
target[((hsi*9+6)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * target[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+6)*1+lsi)*1], fp5);
target[((hsi*9+7)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+7)*1+lsi)*1], fp1);
target[((hsi*9+8)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 28 */
}

#ifdef __cplusplus
};
#endif
