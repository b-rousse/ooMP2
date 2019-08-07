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
void OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+5)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+4)*1+lsi)*1], fp7);
target[((hsi*10+8)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+3)*1+lsi)*1], fp13);
target[((hsi*10+7)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp19;
fp19 = -5.0000000000000000e-01 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*6+3)*1+lsi)*1], fp17);
target[((hsi*10+6)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp25;
fp25 = fp35 + src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+2)*1+lsi)*1], fp24);
target[((hsi*10+5)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * fp29;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+1)*1+lsi)*1], fp28);
target[((hsi*10+4)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*6+1)*1+lsi)*1], fp35);
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*6+1)*1+lsi)*1], fp32);
target[((hsi*10+3)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*6+0)*1+lsi)*1], fp39);
target[((hsi*10+2)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*6+0)*1+lsi)*1], fp43);
target[((hsi*10+1)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*6+0)*1+lsi)*1], fp48);
target[((hsi*10+0)*1+lsi)*1] = fp47;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 52 */
}

#ifdef __cplusplus
};
#endif
