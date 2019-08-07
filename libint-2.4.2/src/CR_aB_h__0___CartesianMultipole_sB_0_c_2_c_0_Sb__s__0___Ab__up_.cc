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
void CR_aB_h__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp51, fp52);
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp53 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp60 * fp58;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp0;
target[((hsi*21+20)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp43);
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp44 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp69;
fp69 = fp60 * fp49;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp34);
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp35 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp71;
fp71 = fp60 * fp40;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp2;
target[((hsi*21+18)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp24, fp25);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp26 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp73;
fp73 = fp60 * fp31;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp3;
target[((hsi*21+17)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp15, fp16);
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp17 + fp21;
LIBINT2_REALTYPE fp22;
fp22 = fp20 + fp23;
LIBINT2_REALTYPE fp75;
fp75 = fp60 * fp22;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp4;
target[((hsi*21+16)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_y[vi], fp6, fp7);
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp7;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp8 + fp12;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp77;
fp77 = fp60 * fp13;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
target[((hsi*21+15)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp61 * fp58;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp1;
target[((hsi*21+14)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp61 * fp49;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp2;
target[((hsi*21+13)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp61 * fp40;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
target[((hsi*21+12)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp61 * fp31;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp4;
target[((hsi*21+11)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp61 * fp22;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp5;
target[((hsi*21+10)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp62 * fp58;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp2;
target[((hsi*21+9)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp62 * fp49;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
target[((hsi*21+8)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp62 * fp40;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp4;
target[((hsi*21+7)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp62 * fp31;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp5;
target[((hsi*21+6)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp63 * fp58;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
target[((hsi*21+5)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp63 * fp49;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp4;
target[((hsi*21+4)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp63 * fp40;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp64 * fp58;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp64 * fp49;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp65 * fp58;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp106;
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
