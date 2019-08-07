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
void CR_aB_f__0___CartesianMultipole_sB_1_c_2_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp57);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp56);
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp60);
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp67);
LIBINT2_REALTYPE fp93;
fp93 = fp65 * fp62;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp0;
target[((hsi*30+29)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp57;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp53;
fp53 = fp51 + fp54;
LIBINT2_REALTYPE fp95;
fp95 = fp65 * fp53;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp1;
target[((hsi*30+28)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp68 + fp70;
LIBINT2_REALTYPE fp97;
fp97 = fp69 * fp62;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp1;
target[((hsi*30+27)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp43);
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp42);
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp44, fp46);
LIBINT2_REALTYPE fp99;
fp99 = fp65 * fp48;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp2;
target[((hsi*30+26)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp101;
fp101 = fp65 * fp39;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp3;
target[((hsi*30+25)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp69 * fp48;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*30+24)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp29);
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp28);
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp32);
LIBINT2_REALTYPE fp105;
fp105 = fp65 * fp34;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp4;
target[((hsi*30+23)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp25;
fp25 = fp23 + fp26;
LIBINT2_REALTYPE fp107;
fp107 = fp65 * fp25;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*30+22)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp69 * fp34;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp5;
target[((hsi*30+21)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp15);
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp13, fp14);
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_y[vi], fp16, fp18);
LIBINT2_REALTYPE fp111;
fp111 = fp65 * fp20;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp6;
target[((hsi*30+20)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp8 + fp10;
LIBINT2_REALTYPE fp11;
fp11 = fp9 + fp12;
LIBINT2_REALTYPE fp113;
fp113 = fp65 * fp11;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
target[((hsi*30+19)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp69 * fp20;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp7;
target[((hsi*30+18)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp74);
LIBINT2_REALTYPE fp117;
fp117 = fp72 * fp62;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp2;
target[((hsi*30+17)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp72 * fp53;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp3;
target[((hsi*30+16)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp75 + fp77;
LIBINT2_REALTYPE fp121;
fp121 = fp76 * fp62;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp3;
target[((hsi*30+15)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp72 * fp48;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp4;
target[((hsi*30+14)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp72 * fp39;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp5;
target[((hsi*30+13)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp76 * fp48;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp5;
target[((hsi*30+12)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp72 * fp34;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp6;
target[((hsi*30+11)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp72 * fp25;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp7;
target[((hsi*30+10)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp76 * fp34;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp7;
target[((hsi*30+9)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp81);
LIBINT2_REALTYPE fp135;
fp135 = fp79 * fp62;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp4;
target[((hsi*30+8)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp79 * fp53;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp5;
target[((hsi*30+7)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp82 + fp84;
LIBINT2_REALTYPE fp139;
fp139 = fp83 * fp62;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp5;
target[((hsi*30+6)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp79 * fp48;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp6;
target[((hsi*30+5)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp79 * fp39;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp7;
target[((hsi*30+4)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp83 * fp48;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp7;
target[((hsi*30+3)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp85, fp88);
LIBINT2_REALTYPE fp147;
fp147 = fp86 * fp62;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp6;
target[((hsi*30+2)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp86 * fp53;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
target[((hsi*30+1)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_x[vi] * fp88;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp89 + fp91;
LIBINT2_REALTYPE fp151;
fp151 = fp90 * fp62;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp7;
target[((hsi*30+0)*1+lsi)*1] = fp150;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 152 */
}

#ifdef __cplusplus
};
#endif
