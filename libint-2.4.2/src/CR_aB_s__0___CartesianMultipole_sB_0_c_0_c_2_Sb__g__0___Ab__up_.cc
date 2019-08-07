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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp34 * fp33;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp3;
target[((hsi*15+14)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp10);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp34 * fp32;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp8;
target[((hsi*15+13)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp15);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp11);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp34 * fp31;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp13;
target[((hsi*15+12)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp22);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp16);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp34 * fp30;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp18;
target[((hsi*15+11)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp23, fp25);
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp34 * fp29;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp27;
target[((hsi*15+10)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp35 * fp33;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp8;
target[((hsi*15+9)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp35 * fp32;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp13;
target[((hsi*15+8)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp35 * fp31;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp18;
target[((hsi*15+7)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp35 * fp30;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp27;
target[((hsi*15+6)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp36 * fp33;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp13;
target[((hsi*15+5)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp60;
fp60 = fp36 * fp32;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp18;
target[((hsi*15+4)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp36 * fp31;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp27;
target[((hsi*15+3)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp37 * fp33;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp18;
target[((hsi*15+2)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp37 * fp32;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp27;
target[((hsi*15+1)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp38 * fp33;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp27;
target[((hsi*15+0)*1+lsi)*1] = fp67;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 69 */
}

#ifdef __cplusplus
};
#endif
