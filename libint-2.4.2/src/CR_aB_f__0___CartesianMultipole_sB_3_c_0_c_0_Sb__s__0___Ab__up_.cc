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
void CR_aB_f__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_x[vi], fp11, fp12);
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_x[vi], fp8, fp11);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_x[vi], fp9, fp14);
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_x[vi] * fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_x[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp13 + fp17;
LIBINT2_REALTYPE fp20;
fp20 = fp16 + fp21;
LIBINT2_REALTYPE fp22;
fp22 = fp20 + fp23;
LIBINT2_REALTYPE fp73;
fp73 = fp22 * fp7;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp0;
target[((hsi*10+9)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp22 * fp6;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp1;
target[((hsi*10+8)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp22 * fp5;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp2;
target[((hsi*10+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp22 * fp4;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp3;
target[((hsi*10+6)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_x[vi], fp27, fp28);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_x[vi], fp24, fp27);
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_x[vi], fp25, fp30);
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_x[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp29 + fp33;
LIBINT2_REALTYPE fp36;
fp36 = fp32 + fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp81;
fp81 = fp38 * fp7;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp1;
target[((hsi*10+5)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp38 * fp6;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp2;
target[((hsi*10+4)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp38 * fp5;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp3;
target[((hsi*10+3)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp44);
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_x[vi], fp40, fp43);
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp41, fp46);
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp45 + fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp48 + fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp87;
fp87 = fp54 * fp7;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
target[((hsi*10+2)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp54 * fp6;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
target[((hsi*10+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp60);
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp59);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp62);
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_x[vi] * fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp70;
fp70 = fp68 + fp71;
LIBINT2_REALTYPE fp91;
fp91 = fp70 * fp7;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
target[((hsi*10+0)*1+lsi)*1] = fp90;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 92 */
}

#ifdef __cplusplus
};
#endif
