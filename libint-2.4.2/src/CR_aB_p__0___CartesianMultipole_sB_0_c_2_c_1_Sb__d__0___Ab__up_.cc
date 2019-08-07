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
void CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp50, fp51);
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp50);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp54);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp58 * fp56;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp1;
target[((hsi*18+17)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp3);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp51, fp44);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp54, fp45);
LIBINT2_REALTYPE fp67;
fp67 = fp58 * fp47;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp4;
target[((hsi*18+16)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp40 + fp43;
LIBINT2_REALTYPE fp69;
fp69 = fp58 * fp42;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp8;
target[((hsi*18+15)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp59 * fp56;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
target[((hsi*18+14)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp59 * fp47;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp8;
target[((hsi*18+13)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp60 * fp56;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp8;
target[((hsi*18+12)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp32);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp31);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp35);
LIBINT2_REALTYPE fp77;
fp77 = fp58 * fp37;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp11;
target[((hsi*18+11)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp13);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp25);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp35, fp26);
LIBINT2_REALTYPE fp79;
fp79 = fp58 * fp28;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp14;
target[((hsi*18+10)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp17);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp81;
fp81 = fp58 * fp23;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp18;
target[((hsi*18+9)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp59 * fp37;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp14;
target[((hsi*18+8)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp59 * fp28;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp18;
target[((hsi*18+7)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp60 * fp37;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp18;
target[((hsi*18+6)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp61 * fp56;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp11;
target[((hsi*18+5)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp61 * fp47;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp14;
target[((hsi*18+4)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp61 * fp42;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp18;
target[((hsi*18+3)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp62 * fp56;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp14;
target[((hsi*18+2)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp62 * fp47;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp18;
target[((hsi*18+1)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp63 * fp56;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp18;
target[((hsi*18+0)*1+lsi)*1] = fp98;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 100 */
}

#ifdef __cplusplus
};
#endif
