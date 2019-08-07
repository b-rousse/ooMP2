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
void CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp42);
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp43 + fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp46 + fp49;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp50 * fp48;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp0;
target[((hsi*15+14)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp33);
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp34 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp58;
fp58 = fp50 * fp39;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp1;
target[((hsi*15+13)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp24);
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp60;
fp60 = fp50 * fp30;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp2;
target[((hsi*15+12)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp15);
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp16 + fp20;
LIBINT2_REALTYPE fp21;
fp21 = fp19 + fp22;
LIBINT2_REALTYPE fp62;
fp62 = fp50 * fp21;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp3;
target[((hsi*15+11)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_y[vi], fp5, fp6);
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_y[vi] * fp6;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp7 + fp11;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp64;
fp64 = fp50 * fp12;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp4;
target[((hsi*15+10)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp51 * fp48;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp1;
target[((hsi*15+9)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp51 * fp39;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp2;
target[((hsi*15+8)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp51 * fp30;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp3;
target[((hsi*15+7)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp51 * fp21;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp4;
target[((hsi*15+6)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp52 * fp48;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp2;
target[((hsi*15+5)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp52 * fp39;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp3;
target[((hsi*15+4)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp52 * fp30;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
target[((hsi*15+3)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp53 * fp48;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp3;
target[((hsi*15+2)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp53 * fp39;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp4;
target[((hsi*15+1)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp54 * fp48;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp4;
target[((hsi*15+0)*1+lsi)*1] = fp83;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 85 */
}

#ifdef __cplusplus
};
#endif
