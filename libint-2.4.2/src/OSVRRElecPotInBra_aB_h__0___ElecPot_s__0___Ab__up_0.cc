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
void OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*10+9)*1+lsi)*1] - src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp5);
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = src2[((hsi*10+8)*1+lsi)*1] - src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp10 * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*21+19)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = src2[((hsi*10+7)*1+lsi)*1] - src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp17 * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp14;
fp14 = fp18 + fp15;
target[((hsi*21+18)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = src2[((hsi*10+6)*1+lsi)*1] - src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp24 * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*21+17)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp29);
target[((hsi*21+16)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp33;
fp33 = src2[((hsi*10+6)*1+lsi)*1] - src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp34 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_y[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*21+15)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp40;
fp40 = src2[((hsi*10+5)*1+lsi)*1] - src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp41 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp43);
LIBINT2_REALTYPE fp38;
fp38 = fp42 + fp39;
target[((hsi*21+14)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp47;
fp47 = src2[((hsi*10+4)*1+lsi)*1] - src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp48 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PC_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp50);
LIBINT2_REALTYPE fp45;
fp45 = fp49 + fp46;
target[((hsi*21+13)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp54;
fp54 = src2[((hsi*10+3)*1+lsi)*1] - src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp55 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
target[((hsi*21+12)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp60);
target[((hsi*21+11)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp64;
fp64 = src2[((hsi*10+3)*1+lsi)*1] - src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp65 * fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PC_y[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp67);
LIBINT2_REALTYPE fp62;
fp62 = fp66 + fp63;
target[((hsi*21+10)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp71;
fp71 = src2[((hsi*10+2)*1+lsi)*1] - src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp72 * fp71;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PC_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp74);
LIBINT2_REALTYPE fp69;
fp69 = fp73 + fp70;
target[((hsi*21+9)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp78;
fp78 = src2[((hsi*10+1)*1+lsi)*1] - src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp79 * fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*21+8)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp84);
target[((hsi*21+7)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp88;
fp88 = src2[((hsi*10+1)*1+lsi)*1] - src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp89 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp91);
LIBINT2_REALTYPE fp86;
fp86 = fp90 + fp87;
target[((hsi*21+6)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp95;
fp95 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp96 * fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PC_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp98);
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*21+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PC_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp101);
target[((hsi*21+4)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp105;
fp105 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp106 * fp105;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PC_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp108);
LIBINT2_REALTYPE fp103;
fp103 = fp107 + fp104;
target[((hsi*21+3)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PC_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp111);
target[((hsi*21+2)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PC_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp114);
target[((hsi*21+1)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp118;
fp118 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->PA_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
target[((hsi*21+0)*1+lsi)*1] = fp116;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 123 */
}

#ifdef __cplusplus
};
#endif
