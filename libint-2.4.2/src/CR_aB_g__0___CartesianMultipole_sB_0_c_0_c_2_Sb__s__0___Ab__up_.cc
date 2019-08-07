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
void CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->BO_z[vi], fp0, fp1);
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp1;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp2 + fp6;
LIBINT2_REALTYPE fp7;
fp7 = fp5 + fp8;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp50 * fp49;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp7;
target[((hsi*15+14)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp10);
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp11 + fp15;
LIBINT2_REALTYPE fp16;
fp16 = fp14 + fp17;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp50 * fp48;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp16;
target[((hsi*15+13)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp19);
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp20 + fp24;
LIBINT2_REALTYPE fp25;
fp25 = fp23 + fp26;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp50 * fp47;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp25;
target[((hsi*15+12)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp28);
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp29 + fp33;
LIBINT2_REALTYPE fp34;
fp34 = fp32 + fp35;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp50 * fp46;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp34;
target[((hsi*15+11)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp37);
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp38 + fp42;
LIBINT2_REALTYPE fp43;
fp43 = fp41 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp50 * fp45;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp43;
target[((hsi*15+10)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp51 * fp49;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp16;
target[((hsi*15+9)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp51 * fp48;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp25;
target[((hsi*15+8)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp51 * fp47;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp34;
target[((hsi*15+7)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp51 * fp46;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp43;
target[((hsi*15+6)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp52 * fp49;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp25;
target[((hsi*15+5)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp52 * fp48;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp34;
target[((hsi*15+4)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp52 * fp47;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp43;
target[((hsi*15+3)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp53 * fp49;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp34;
target[((hsi*15+2)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp53 * fp48;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp43;
target[((hsi*15+1)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp54 * fp49;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp43;
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
