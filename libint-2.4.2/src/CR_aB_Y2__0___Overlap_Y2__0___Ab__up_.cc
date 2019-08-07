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
void CR_aB_Y2__0___Overlap_Y2__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*9+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PB_y[vi] * target[((hsi*9+0)*1+lsi)*1];
target[((hsi*9+1)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * target[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*9+1)*1+lsi)*1], fp20);
target[((hsi*9+2)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_y[vi] * target[((hsi*9+0)*1+lsi)*1];
target[((hsi*9+3)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*9+1)*1+lsi)*1], fp20);
target[((hsi*9+4)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * target[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*9+2)*1+lsi)*1], fp13);
target[((hsi*9+5)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*9+3)*1+lsi)*1], fp20);
target[((hsi*9+6)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * target[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2z[vi] * target[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*9+4)*1+lsi)*1], fp8);
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*9+7)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp14 * target[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->oo2z[vi] * target[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*9+5)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*9+8)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 23 */
}

#ifdef __cplusplus
};
#endif
