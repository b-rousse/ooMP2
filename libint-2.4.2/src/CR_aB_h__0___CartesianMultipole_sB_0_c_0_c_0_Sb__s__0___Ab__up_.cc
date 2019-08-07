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
void CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp12 * fp11;
LIBINT2_REALTYPE fp18;
fp18 = fp19 * fp0;
target[((hsi*21+20)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp12 * fp10;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp12 * fp9;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp2;
target[((hsi*21+18)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp12 * fp8;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp3;
target[((hsi*21+17)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp12 * fp7;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp4;
target[((hsi*21+16)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp12 * fp6;
LIBINT2_REALTYPE fp28;
fp28 = fp29 * fp5;
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp13 * fp11;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp1;
target[((hsi*21+14)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = fp13 * fp10;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp2;
target[((hsi*21+13)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp13 * fp9;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp3;
target[((hsi*21+12)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = fp13 * fp8;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp4;
target[((hsi*21+11)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = fp13 * fp7;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp5;
target[((hsi*21+10)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp14 * fp11;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp2;
target[((hsi*21+9)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp14 * fp10;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp3;
target[((hsi*21+8)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp14 * fp9;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp4;
target[((hsi*21+7)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp14 * fp8;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp5;
target[((hsi*21+6)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp15 * fp11;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
target[((hsi*21+5)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp15 * fp10;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp4;
target[((hsi*21+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp15 * fp9;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp16 * fp11;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp16 * fp10;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp17 * fp11;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp58;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
#endif
