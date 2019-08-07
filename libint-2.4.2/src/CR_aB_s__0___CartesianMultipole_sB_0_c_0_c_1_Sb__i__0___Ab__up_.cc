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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp29 * fp28;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp1;
target[((hsi*28+27)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp29 * fp27;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp4;
target[((hsi*28+26)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp6);
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp29 * fp26;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp7;
target[((hsi*28+25)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp9);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp29 * fp25;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp10;
target[((hsi*28+24)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp12);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp29 * fp24;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp13;
target[((hsi*28+23)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp15);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp29 * fp23;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp16;
target[((hsi*28+22)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp19);
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp29 * fp22;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp20;
target[((hsi*28+21)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp30 * fp28;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp4;
target[((hsi*28+20)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp30 * fp27;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp7;
target[((hsi*28+19)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp30 * fp26;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp10;
target[((hsi*28+18)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp30 * fp25;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp13;
target[((hsi*28+17)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp30 * fp24;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp16;
target[((hsi*28+16)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp30 * fp23;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp20;
target[((hsi*28+15)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp31 * fp28;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp7;
target[((hsi*28+14)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp31 * fp27;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp10;
target[((hsi*28+13)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp31 * fp26;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp13;
target[((hsi*28+12)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp31 * fp25;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp16;
target[((hsi*28+11)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp31 * fp24;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp20;
target[((hsi*28+10)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp32 * fp28;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp10;
target[((hsi*28+9)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp32 * fp27;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp13;
target[((hsi*28+8)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp32 * fp26;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp16;
target[((hsi*28+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp32 * fp25;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp20;
target[((hsi*28+6)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp33 * fp28;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp13;
target[((hsi*28+5)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp33 * fp27;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp16;
target[((hsi*28+4)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp33 * fp26;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp20;
target[((hsi*28+3)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp34 * fp28;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp16;
target[((hsi*28+2)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp34 * fp27;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp20;
target[((hsi*28+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp35 * fp28;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp20;
target[((hsi*28+0)*1+lsi)*1] = fp90;
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
