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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_y[vi], fp17, fp18);
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp21 * fp19;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp0;
target[((hsi*15+14)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_y[vi], fp18, fp14);
LIBINT2_REALTYPE fp29;
fp29 = fp21 * fp15;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp1;
target[((hsi*15+13)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp11);
LIBINT2_REALTYPE fp31;
fp31 = fp21 * fp12;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp2;
target[((hsi*15+12)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_y[vi], fp11, fp8);
LIBINT2_REALTYPE fp33;
fp33 = fp21 * fp9;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp3;
target[((hsi*15+11)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp35;
fp35 = fp21 * fp6;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp4;
target[((hsi*15+10)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp22 * fp19;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp1;
target[((hsi*15+9)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = fp22 * fp15;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp2;
target[((hsi*15+8)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp22 * fp12;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp3;
target[((hsi*15+7)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp22 * fp9;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp4;
target[((hsi*15+6)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp23 * fp19;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp2;
target[((hsi*15+5)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp23 * fp15;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp3;
target[((hsi*15+4)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp23 * fp12;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp4;
target[((hsi*15+3)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp24 * fp19;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp3;
target[((hsi*15+2)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp24 * fp15;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp4;
target[((hsi*15+1)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp25 * fp19;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
target[((hsi*15+0)*1+lsi)*1] = fp54;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 56 */
}

#ifdef __cplusplus
};
#endif
