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
void CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_y[vi], fp54, fp55);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp53, fp54);
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp58);
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_y[vi], fp50, fp53);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_y[vi], fp51, fp56);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp60, fp62);
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp66 * fp64;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp0;
target[((hsi*18+17)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp43);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp44);
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp62, fp46);
LIBINT2_REALTYPE fp75;
fp75 = fp66 * fp48;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp1;
target[((hsi*18+16)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp77;
fp77 = fp66 * fp41;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp2;
target[((hsi*18+15)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp67 * fp64;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp1;
target[((hsi*18+14)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp67 * fp48;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp2;
target[((hsi*18+13)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp68 * fp64;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp2;
target[((hsi*18+12)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp24, fp25);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp24);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp28);
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_y[vi], fp20, fp23);
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp21, fp26);
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp32);
LIBINT2_REALTYPE fp85;
fp85 = fp66 * fp34;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp3;
target[((hsi*18+11)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_y[vi], fp25, fp13);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp14);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp16);
LIBINT2_REALTYPE fp87;
fp87 = fp66 * fp18;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
target[((hsi*18+10)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_y[vi] * fp14;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_y[vi] * fp13;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp9;
fp9 = fp7 + fp10;
LIBINT2_REALTYPE fp11;
fp11 = fp9 + fp12;
LIBINT2_REALTYPE fp89;
fp89 = fp66 * fp11;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp5;
target[((hsi*18+9)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp67 * fp34;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp4;
target[((hsi*18+8)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp67 * fp18;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp5;
target[((hsi*18+7)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp68 * fp34;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp5;
target[((hsi*18+6)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp69 * fp64;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
target[((hsi*18+5)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp69 * fp48;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp4;
target[((hsi*18+4)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp69 * fp41;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
target[((hsi*18+3)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp70 * fp64;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*18+2)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp70 * fp48;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
target[((hsi*18+1)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp71 * fp64;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*18+0)*1+lsi)*1] = fp106;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 108 */
}

#ifdef __cplusplus
};
#endif
