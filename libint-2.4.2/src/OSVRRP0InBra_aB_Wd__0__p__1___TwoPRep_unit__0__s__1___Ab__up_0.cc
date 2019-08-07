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
void OSVRRP0InBra_aB_Wd__0__p__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2ze[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*9+8)*1+lsi)*1], fp1);
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*9+7)*1+lsi)*1];
target[((hsi*18+16)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src0[((hsi*9+6)*1+lsi)*1];
target[((hsi*18+15)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2ze[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*9+5)*1+lsi)*1], fp11);
target[((hsi*18+14)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*9+4)*1+lsi)*1];
target[((hsi*18+13)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src0[((hsi*9+3)*1+lsi)*1];
target[((hsi*18+12)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_y[vi] * src0[((hsi*9+5)*1+lsi)*1];
target[((hsi*18+11)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*9+4)*1+lsi)*1], fp11);
target[((hsi*18+10)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_y[vi] * src0[((hsi*9+3)*1+lsi)*1];
target[((hsi*18+9)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2ze[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*9+2)*1+lsi)*1], fp25);
target[((hsi*18+8)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*9+1)*1+lsi)*1];
target[((hsi*18+7)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*9+0)*1+lsi)*1];
target[((hsi*18+6)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_y[vi] * src0[((hsi*9+2)*1+lsi)*1];
target[((hsi*18+5)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*9+1)*1+lsi)*1], fp25);
target[((hsi*18+4)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_y[vi] * src0[((hsi*9+0)*1+lsi)*1];
target[((hsi*18+3)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_x[vi] * src0[((hsi*9+2)*1+lsi)*1];
target[((hsi*18+2)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_x[vi] * src0[((hsi*9+1)*1+lsi)*1];
target[((hsi*18+1)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*9+0)*1+lsi)*1], fp25);
target[((hsi*18+0)*1+lsi)*1] = fp24;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 27 */
}

#ifdef __cplusplus
};
#endif
