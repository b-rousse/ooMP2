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
void OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*15+14)*1+lsi)*1] - src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp5);
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = src2[((hsi*15+13)*1+lsi)*1] - src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp10 * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*28+26)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = src2[((hsi*15+12)*1+lsi)*1] - src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp17 * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp14;
fp14 = fp18 + fp15;
target[((hsi*28+25)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = src2[((hsi*15+11)*1+lsi)*1] - src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp24 * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*28+24)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = src2[((hsi*15+10)*1+lsi)*1] - src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp31 * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PC_z[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp33);
LIBINT2_REALTYPE fp28;
fp28 = fp32 + fp29;
target[((hsi*28+23)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_z[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+15)*1+lsi)*1], fp36);
target[((hsi*28+22)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp40;
fp40 = src2[((hsi*15+10)*1+lsi)*1] - src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp41 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_y[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+15)*1+lsi)*1], fp43);
LIBINT2_REALTYPE fp38;
fp38 = fp42 + fp39;
target[((hsi*28+21)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp47;
fp47 = src2[((hsi*15+9)*1+lsi)*1] - src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp48 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PC_z[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp50);
LIBINT2_REALTYPE fp45;
fp45 = fp49 + fp46;
target[((hsi*28+20)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp54;
fp54 = src2[((hsi*15+8)*1+lsi)*1] - src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp55 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_z[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
target[((hsi*28+19)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp61;
fp61 = src2[((hsi*15+7)*1+lsi)*1] - src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp62 * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_z[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+12)*1+lsi)*1], fp64);
LIBINT2_REALTYPE fp59;
fp59 = fp63 + fp60;
target[((hsi*28+18)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp68;
fp68 = src2[((hsi*15+6)*1+lsi)*1] - src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp69 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PC_z[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
target[((hsi*28+17)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PC_z[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+10)*1+lsi)*1], fp74);
target[((hsi*28+16)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp78;
fp78 = src2[((hsi*15+6)*1+lsi)*1] - src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp79 * fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_y[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+10)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*28+15)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp85;
fp85 = src2[((hsi*15+5)*1+lsi)*1] - src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp86 * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_z[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+9)*1+lsi)*1], fp88);
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*28+14)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp92;
fp92 = src2[((hsi*15+4)*1+lsi)*1] - src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp93 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PC_z[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp95);
LIBINT2_REALTYPE fp90;
fp90 = fp94 + fp91;
target[((hsi*28+13)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp99;
fp99 = src2[((hsi*15+3)*1+lsi)*1] - src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp100 * fp99;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PC_z[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp102);
LIBINT2_REALTYPE fp97;
fp97 = fp101 + fp98;
target[((hsi*28+12)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PC_z[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+6)*1+lsi)*1], fp105);
target[((hsi*28+11)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp109;
fp109 = src2[((hsi*15+3)*1+lsi)*1] - src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp110 * fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PC_y[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+6)*1+lsi)*1], fp112);
LIBINT2_REALTYPE fp107;
fp107 = fp111 + fp108;
target[((hsi*28+10)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp116;
fp116 = src2[((hsi*15+2)*1+lsi)*1] - src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp117 * fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PC_z[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+5)*1+lsi)*1], fp119);
LIBINT2_REALTYPE fp114;
fp114 = fp118 + fp115;
target[((hsi*28+9)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp123;
fp123 = src2[((hsi*15+1)*1+lsi)*1] - src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp124 * fp123;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PC_z[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp126);
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
target[((hsi*28+8)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PC_z[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+3)*1+lsi)*1], fp129);
target[((hsi*28+7)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp133;
fp133 = src2[((hsi*15+1)*1+lsi)*1] - src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp134 * fp133;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PC_y[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp136);
LIBINT2_REALTYPE fp131;
fp131 = fp135 + fp132;
target[((hsi*28+6)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp140;
fp140 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp141 * fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PC_z[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp143);
LIBINT2_REALTYPE fp138;
fp138 = fp142 + fp139;
target[((hsi*28+5)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PC_z[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+1)*1+lsi)*1], fp146);
target[((hsi*28+4)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp150;
fp150 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp151 * fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PC_y[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp153);
LIBINT2_REALTYPE fp148;
fp148 = fp152 + fp149;
target[((hsi*28+3)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PC_z[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*21+0)*1+lsi)*1], fp156);
target[((hsi*28+2)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PC_y[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*21+0)*1+lsi)*1], fp159);
target[((hsi*28+1)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp163;
fp163 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp164 * fp163;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PC_x[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_minus(inteval->PB_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp166);
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
target[((hsi*28+0)*1+lsi)*1] = fp161;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
#endif
