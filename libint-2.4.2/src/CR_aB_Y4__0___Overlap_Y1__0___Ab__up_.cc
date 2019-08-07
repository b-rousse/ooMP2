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
void CR_aB_Y4__0___Overlap_Y1__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*10+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_y[vi] * target[((hsi*10+0)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * target[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+2)*1+lsi)*1], fp30);
target[((hsi*10+4)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_y[vi] * target[((hsi*10+0)*1+lsi)*1];
target[((hsi*10+1)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * target[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+4)*1+lsi)*1], fp19);
target[((hsi*10+6)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp24 * target[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * target[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * target[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+1)*1+lsi)*1], fp34);
target[((hsi*10+3)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+3)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp22;
fp22 = fp25 + fp23;
target[((hsi*10+5)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp12;
fp12 = fp13 * target[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+5)*1+lsi)*1], fp15);
LIBINT2_REALTYPE fp11;
fp11 = fp14 + fp12;
target[((hsi*10+7)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+6)*1+lsi)*1], fp8);
target[((hsi*10+8)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*10+7)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 39 */
}

#ifdef __cplusplus
};
#endif
