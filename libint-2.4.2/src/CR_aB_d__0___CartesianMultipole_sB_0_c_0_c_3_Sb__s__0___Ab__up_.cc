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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp3, fp4);
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp1;
fp1 = libint2::fma_plus(inteval->BO_z[vi], fp0, fp3);
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp1, fp6);
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp5 + fp9;
LIBINT2_REALTYPE fp12;
fp12 = fp8 + fp13;
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp51 * fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp14;
target[((hsi*6+5)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp20);
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp19);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp22);
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp21 + fp25;
LIBINT2_REALTYPE fp28;
fp28 = fp24 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp51 * fp49;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp30;
target[((hsi*6+4)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp36);
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_z[vi], fp32, fp35);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp38);
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp37 + fp41;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp44 + fp47;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp51 * fp48;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp46;
target[((hsi*6+3)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp52 * fp50;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp30;
target[((hsi*6+2)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp52 * fp49;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp46;
target[((hsi*6+1)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp53 * fp50;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp46;
target[((hsi*6+0)*1+lsi)*1] = fp64;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 66 */
}

#ifdef __cplusplus
};
#endif
