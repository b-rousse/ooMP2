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
void OSVRRP1InBra_aB_s__0__p__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->WQ_z[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*1+0)*1+lsi)*1], fp1);
target[((hsi*3+2)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_y[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*1+0)*1+lsi)*1], fp4);
target[((hsi*3+1)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_x[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*1+0)*1+lsi)*1], fp7);
target[((hsi*3+0)*1+lsi)*1] = fp6;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9 */
}

#ifdef __cplusplus
};
#endif
