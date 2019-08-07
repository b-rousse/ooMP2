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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp6);
target[((hsi*15+13)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp11);
target[((hsi*15+12)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PB_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*15+11)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = -5.0000000000000000e-01 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+6)*1+lsi)*1], fp17);
target[((hsi*15+10)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp24);
target[((hsi*15+9)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp29);
target[((hsi*15+8)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*15+7)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp37;
fp37 = -5.0000000000000000e-01 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp35);
target[((hsi*15+6)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp42);
target[((hsi*15+5)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PB_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*15+4)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp50;
fp50 = -5.0000000000000000e-01 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp48);
target[((hsi*15+3)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+2)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(-5.0000000000000000e-01, src3[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+0)*1+lsi)*1], fp56);
target[((hsi*15+1)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp61);
target[((hsi*15+0)*1+lsi)*1] = fp60;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 67 */
}

#ifdef __cplusplus
};
#endif
