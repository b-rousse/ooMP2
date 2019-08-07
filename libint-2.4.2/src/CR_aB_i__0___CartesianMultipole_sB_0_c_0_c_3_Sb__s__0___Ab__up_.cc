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
void CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp3, fp4);
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp1;
fp1 = libint2::fma_plus(inteval->BO_z[vi], fp0, fp3);
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp1, fp6);
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp5 + fp9;
LIBINT2_REALTYPE fp12;
fp12 = fp8 + fp13;
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp119 * fp118;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp14;
target[((hsi*28+27)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp20);
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp19);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp22);
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp21 + fp25;
LIBINT2_REALTYPE fp28;
fp28 = fp24 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp119 * fp117;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp30;
target[((hsi*28+26)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp36);
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_z[vi], fp32, fp35);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp38);
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp37 + fp41;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp44 + fp47;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp119 * fp116;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp46;
target[((hsi*28+25)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp51, fp52);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp51);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp54);
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_z[vi] * fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp53 + fp57;
LIBINT2_REALTYPE fp60;
fp60 = fp56 + fp61;
LIBINT2_REALTYPE fp62;
fp62 = fp60 + fp63;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp119 * fp115;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp62;
target[((hsi*28+24)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_z[vi], fp67, fp68);
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_z[vi], fp64, fp67);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp65, fp70);
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_z[vi] * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_z[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_z[vi] * fp68;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp69 + fp73;
LIBINT2_REALTYPE fp76;
fp76 = fp72 + fp77;
LIBINT2_REALTYPE fp78;
fp78 = fp76 + fp79;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp119 * fp114;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp78;
target[((hsi*28+23)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src2[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src2[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_z[vi], fp83, fp84);
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp83);
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_z[vi], fp81, fp86);
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_z[vi] * fp90;
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_z[vi] * fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src2[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp85 + fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp88 + fp93;
LIBINT2_REALTYPE fp94;
fp94 = fp92 + fp95;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp119 * fp113;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp94;
target[((hsi*28+22)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src2[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_z[vi], fp99, fp100);
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->BO_z[vi], fp96, fp99);
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_z[vi], fp97, fp102);
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_z[vi] * fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_z[vi] * fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_z[vi] * fp100;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src2[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp101 + fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp104 + fp109;
LIBINT2_REALTYPE fp110;
fp110 = fp108 + fp111;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp119 * fp112;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp110;
target[((hsi*28+21)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp120 * fp118;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp30;
target[((hsi*28+20)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp120 * fp117;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp46;
target[((hsi*28+19)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp120 * fp116;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp62;
target[((hsi*28+18)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp120 * fp115;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp78;
target[((hsi*28+17)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp120 * fp114;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp94;
target[((hsi*28+16)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp120 * fp113;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp110;
target[((hsi*28+15)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp121 * fp118;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp46;
target[((hsi*28+14)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp121 * fp117;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp62;
target[((hsi*28+13)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp121 * fp116;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp78;
target[((hsi*28+12)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp121 * fp115;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp94;
target[((hsi*28+11)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp121 * fp114;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp110;
target[((hsi*28+10)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp122 * fp118;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp62;
target[((hsi*28+9)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp122 * fp117;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp78;
target[((hsi*28+8)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp122 * fp116;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp94;
target[((hsi*28+7)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp122 * fp115;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp110;
target[((hsi*28+6)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp123 * fp118;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp78;
target[((hsi*28+5)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp123 * fp117;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp94;
target[((hsi*28+4)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp123 * fp116;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp110;
target[((hsi*28+3)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp124 * fp118;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp94;
target[((hsi*28+2)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp124 * fp117;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp110;
target[((hsi*28+1)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp125 * fp118;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp110;
target[((hsi*28+0)*1+lsi)*1] = fp180;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 182 */
}

#ifdef __cplusplus
};
#endif
