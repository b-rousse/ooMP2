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
void CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp33);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp32);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp34, fp36);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_x[vi], fp40, fp43);
LIBINT2_REALTYPE fp60;
fp60 = fp41 * fp38;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp0;
target[((hsi*21+20)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp26);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp27);
LIBINT2_REALTYPE fp62;
fp62 = fp41 * fp29;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp21);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp22);
LIBINT2_REALTYPE fp64;
fp64 = fp41 * fp24;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp2;
target[((hsi*21+18)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_y[vi], fp21, fp16);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_y[vi], fp22, fp17);
LIBINT2_REALTYPE fp66;
fp66 = fp41 * fp19;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp3;
target[((hsi*21+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_y[vi], fp16, fp11);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_y[vi], fp17, fp12);
LIBINT2_REALTYPE fp68;
fp68 = fp41 * fp14;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp4;
target[((hsi*21+16)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_y[vi] * fp12;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_y[vi] * fp11;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp9;
fp9 = fp7 + fp10;
LIBINT2_REALTYPE fp70;
fp70 = fp41 * fp9;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp5;
target[((hsi*21+15)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp46);
LIBINT2_REALTYPE fp72;
fp72 = fp44 * fp38;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp1;
target[((hsi*21+14)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp44 * fp29;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp2;
target[((hsi*21+13)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp44 * fp24;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp3;
target[((hsi*21+12)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp44 * fp19;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
target[((hsi*21+11)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp44 * fp14;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
target[((hsi*21+10)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp46, fp49);
LIBINT2_REALTYPE fp82;
fp82 = fp47 * fp38;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp2;
target[((hsi*21+9)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp47 * fp29;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp3;
target[((hsi*21+8)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp47 * fp24;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp4;
target[((hsi*21+7)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp47 * fp19;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
target[((hsi*21+6)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp52);
LIBINT2_REALTYPE fp90;
fp90 = fp50 * fp38;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp3;
target[((hsi*21+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp50 * fp29;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp4;
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp50 * fp24;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp55);
LIBINT2_REALTYPE fp96;
fp96 = fp53 * fp38;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp53 * fp29;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp55;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp100;
fp100 = fp57 * fp38;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp99;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 101 */
}

#ifdef __cplusplus
};
#endif
