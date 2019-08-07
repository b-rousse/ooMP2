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
void CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->BO_z[vi] * fp0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp1 + fp3;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp56 * fp54;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp2;
target[((hsi*28+27)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp66;
fp66 = fp56 * fp50;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp6;
target[((hsi*28+26)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp45 + fp47;
LIBINT2_REALTYPE fp68;
fp68 = fp56 * fp46;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp10;
target[((hsi*28+25)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp70;
fp70 = fp56 * fp42;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp14;
target[((hsi*28+24)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp72;
fp72 = fp56 * fp38;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp18;
target[((hsi*28+23)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp74;
fp74 = fp56 * fp34;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp22;
target[((hsi*28+22)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp76;
fp76 = fp56 * fp30;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp26;
target[((hsi*28+21)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp57 * fp54;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp6;
target[((hsi*28+20)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp57 * fp50;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp10;
target[((hsi*28+19)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp57 * fp46;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp14;
target[((hsi*28+18)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp57 * fp42;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp18;
target[((hsi*28+17)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp57 * fp38;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp22;
target[((hsi*28+16)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp57 * fp34;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp26;
target[((hsi*28+15)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp58 * fp54;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp10;
target[((hsi*28+14)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp58 * fp50;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp14;
target[((hsi*28+13)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp58 * fp46;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp18;
target[((hsi*28+12)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp58 * fp42;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp22;
target[((hsi*28+11)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp58 * fp38;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp26;
target[((hsi*28+10)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp59 * fp54;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp14;
target[((hsi*28+9)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp59 * fp50;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp18;
target[((hsi*28+8)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp59 * fp46;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp22;
target[((hsi*28+7)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp59 * fp42;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp26;
target[((hsi*28+6)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp60 * fp54;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp18;
target[((hsi*28+5)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp60 * fp50;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp22;
target[((hsi*28+4)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp60 * fp46;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp26;
target[((hsi*28+3)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp61 * fp54;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp22;
target[((hsi*28+2)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp116;
fp116 = fp61 * fp50;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp26;
target[((hsi*28+1)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp62 * fp54;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp26;
target[((hsi*28+0)*1+lsi)*1] = fp117;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 119 */
}

#ifdef __cplusplus
};
#endif
