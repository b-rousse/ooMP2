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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c__minus_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+5)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+4)*1+lsi)*1], fp6);
target[((hsi*10+8)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp10;
fp10 = inteval->PB_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*10+7)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp14;
fp14 = -5.0000000000000000e-01 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp12;
fp12 = inteval->oo2z[vi] * fp13;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*6+3)*1+lsi)*1], fp12);
target[((hsi*10+6)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+2)*1+lsi)*1], fp19);
target[((hsi*10+5)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PB_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*6+1)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*6+1)*1+lsi)*1], fp23);
target[((hsi*10+3)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*6+0)*1+lsi)*1], fp31);
target[((hsi*10+1)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*6+0)*1+lsi)*1], fp36);
target[((hsi*10+0)*1+lsi)*1] = fp35;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 40 */
}

#ifdef __cplusplus
};
#endif
