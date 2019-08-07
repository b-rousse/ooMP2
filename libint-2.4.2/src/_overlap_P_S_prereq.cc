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
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlap_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->PA_z[vi], fp4, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp6;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + fp7;
LIBINT2_REALTYPE fp16;
fp16 = fp13 * fp12;
LIBINT2_REALTYPE fp15;
fp15 = fp16 * fp9;
LIBINT2_REALTYPE fp2;
fp2 = fp15;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PA_y[vi], fp6, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = fp13 * fp11;
LIBINT2_REALTYPE fp17;
fp17 = fp18 * fp10;
LIBINT2_REALTYPE fp1;
fp1 = fp17;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_x[vi], fp7, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp14 * fp12;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp10;
LIBINT2_REALTYPE fp0;
fp0 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 21 */
}

#ifdef __cplusplus
};
#endif
