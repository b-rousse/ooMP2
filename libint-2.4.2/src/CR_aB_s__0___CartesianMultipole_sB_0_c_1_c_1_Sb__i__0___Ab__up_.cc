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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_y[vi], fp40, fp41);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp44 * fp42;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp1;
target[((hsi*28+27)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp37);
LIBINT2_REALTYPE fp54;
fp54 = fp44 * fp38;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp4;
target[((hsi*28+26)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp6);
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp34);
LIBINT2_REALTYPE fp56;
fp56 = fp44 * fp35;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp7;
target[((hsi*28+25)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp9);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_y[vi], fp34, fp31);
LIBINT2_REALTYPE fp58;
fp58 = fp44 * fp32;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp10;
target[((hsi*28+24)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp12);
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp28);
LIBINT2_REALTYPE fp60;
fp60 = fp44 * fp29;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp13;
target[((hsi*28+23)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp15);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp25);
LIBINT2_REALTYPE fp62;
fp62 = fp44 * fp26;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp16;
target[((hsi*28+22)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp19);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp64;
fp64 = fp44 * fp23;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp20;
target[((hsi*28+21)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp45 * fp42;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp4;
target[((hsi*28+20)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp45 * fp38;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp7;
target[((hsi*28+19)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp45 * fp35;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp10;
target[((hsi*28+18)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp45 * fp32;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp13;
target[((hsi*28+17)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp45 * fp29;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp16;
target[((hsi*28+16)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp45 * fp26;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp20;
target[((hsi*28+15)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp46 * fp42;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp7;
target[((hsi*28+14)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp46 * fp38;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp10;
target[((hsi*28+13)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp46 * fp35;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp13;
target[((hsi*28+12)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp46 * fp32;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp16;
target[((hsi*28+11)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp46 * fp29;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp20;
target[((hsi*28+10)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp47 * fp42;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp10;
target[((hsi*28+9)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp47 * fp38;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp13;
target[((hsi*28+8)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp47 * fp35;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp16;
target[((hsi*28+7)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp47 * fp32;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp20;
target[((hsi*28+6)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp48 * fp42;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp13;
target[((hsi*28+5)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp48 * fp38;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp16;
target[((hsi*28+4)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp48 * fp35;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp20;
target[((hsi*28+3)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp49 * fp42;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp16;
target[((hsi*28+2)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp49 * fp38;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp20;
target[((hsi*28+1)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp50 * fp42;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp20;
target[((hsi*28+0)*1+lsi)*1] = fp105;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 107 */
}

#ifdef __cplusplus
};
#endif
