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
void CR_aB_h__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->BO_z[vi] * fp0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp1 + fp3;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp30, fp31);
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_x[vi] * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_x[vi] * fp31;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp32 + fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp85;
fp85 = fp37 * fp29;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp2;
target[((hsi*21+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp37 * fp28;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp6;
target[((hsi*21+19)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp37 * fp27;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp10;
target[((hsi*21+18)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp37 * fp26;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp14;
target[((hsi*21+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp37 * fp25;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp18;
target[((hsi*21+16)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp37 * fp24;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp22;
target[((hsi*21+15)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_x[vi], fp39, fp40);
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp40;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp41 + fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp44 + fp47;
LIBINT2_REALTYPE fp97;
fp97 = fp46 * fp29;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp6;
target[((hsi*21+14)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp46 * fp28;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp10;
target[((hsi*21+13)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp46 * fp27;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp14;
target[((hsi*21+12)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp46 * fp26;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp18;
target[((hsi*21+11)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp46 * fp25;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp22;
target[((hsi*21+10)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp49);
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_x[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_x[vi] * fp49;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp50 + fp54;
LIBINT2_REALTYPE fp55;
fp55 = fp53 + fp56;
LIBINT2_REALTYPE fp107;
fp107 = fp55 * fp29;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp10;
target[((hsi*21+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp55 * fp28;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp14;
target[((hsi*21+8)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp55 * fp27;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp18;
target[((hsi*21+7)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp55 * fp26;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp22;
target[((hsi*21+6)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp58);
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp58;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp59 + fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp62 + fp65;
LIBINT2_REALTYPE fp115;
fp115 = fp64 * fp29;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp14;
target[((hsi*21+5)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp64 * fp28;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp18;
target[((hsi*21+4)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp64 * fp27;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp22;
target[((hsi*21+3)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp67);
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_x[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp68 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp121;
fp121 = fp73 * fp29;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp18;
target[((hsi*21+2)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp73 * fp28;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp22;
target[((hsi*21+1)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_x[vi], fp75, fp76);
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_x[vi] * fp76;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp77 + fp81;
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp125;
fp125 = fp82 * fp29;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp22;
target[((hsi*21+0)*1+lsi)*1] = fp124;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
#endif
