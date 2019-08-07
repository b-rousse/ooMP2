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
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _2emultipole_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp161;
fp161 = fp116 * fp99;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_z[vi] * fp40;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], fp38, fp36);
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PA_z[vi], fp40, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp74);
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_z[vi] * fp75;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp74;
LIBINT2_REALTYPE fp56;
fp56 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp56 * fp38;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PB_z[vi], fp38, fp36);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], fp33, fp31);
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp30;
LIBINT2_REALTYPE fp65;
fp65 = fp64 + fp66;
LIBINT2_REALTYPE fp67;
fp67 = fp65 + fp68;
LIBINT2_REALTYPE fp118;
fp118 = fp161 * fp67;
LIBINT2_REALTYPE fp29;
fp29 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_y[vi], fp51, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp163;
fp163 = fp116 * fp98;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp81, fp77);
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_z[vi] * fp78;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp119;
fp119 = fp163 * fp72;
LIBINT2_REALTYPE fp28;
fp28 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PA_x[vi], fp62, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp165;
fp165 = fp117 * fp99;
LIBINT2_REALTYPE fp120;
fp120 = fp165 * fp72;
LIBINT2_REALTYPE fp27;
fp27 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PB_y[vi] * fp51;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_y[vi], fp99, fp95);
LIBINT2_REALTYPE fp149;
fp149 = fp116 * fp96;
LIBINT2_REALTYPE fp121;
fp121 = fp149 * fp75;
LIBINT2_REALTYPE fp26;
fp26 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp51;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_y[vi], fp49, fp47);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_y[vi], fp98, fp92);
LIBINT2_REALTYPE fp151;
fp151 = fp116 * fp93;
LIBINT2_REALTYPE fp122;
fp122 = fp151 * fp78;
LIBINT2_REALTYPE fp25;
fp25 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp153;
fp153 = fp117 * fp96;
LIBINT2_REALTYPE fp123;
fp123 = fp153 * fp78;
LIBINT2_REALTYPE fp24;
fp24 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PB_y[vi], fp49, fp47);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp88;
fp88 = fp87 + fp89;
LIBINT2_REALTYPE fp90;
fp90 = fp88 + fp91;
LIBINT2_REALTYPE fp125;
fp125 = fp116 * fp90;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp80;
LIBINT2_REALTYPE fp23;
fp23 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_y[vi] * fp92;
LIBINT2_REALTYPE fp42;
fp42 = fp56 * fp49;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_y[vi], fp44, fp42);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp83;
fp83 = fp82 + fp84;
LIBINT2_REALTYPE fp85;
fp85 = fp83 + fp86;
LIBINT2_REALTYPE fp127;
fp127 = fp116 * fp85;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp81;
LIBINT2_REALTYPE fp22;
fp22 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp129;
fp129 = fp117 * fp90;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp81;
LIBINT2_REALTYPE fp21;
fp21 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->PB_x[vi] * fp62;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->BO_x[vi], fp116, fp110);
LIBINT2_REALTYPE fp155;
fp155 = fp111 * fp99;
LIBINT2_REALTYPE fp130;
fp130 = fp155 * fp75;
LIBINT2_REALTYPE fp20;
fp20 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp157;
fp157 = fp111 * fp98;
LIBINT2_REALTYPE fp131;
fp131 = fp157 * fp78;
LIBINT2_REALTYPE fp19;
fp19 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PA_x[vi], fp58, fp60);
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_x[vi], fp117, fp113);
LIBINT2_REALTYPE fp159;
fp159 = fp114 * fp99;
LIBINT2_REALTYPE fp132;
fp132 = fp159 * fp78;
LIBINT2_REALTYPE fp18;
fp18 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp134;
fp134 = fp111 * fp96;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp80;
LIBINT2_REALTYPE fp17;
fp17 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp136;
fp136 = fp111 * fp93;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp81;
LIBINT2_REALTYPE fp16;
fp16 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp138;
fp138 = fp114 * fp96;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp81;
LIBINT2_REALTYPE fp15;
fp15 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_x[vi] * fp111;
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_x[vi] * fp110;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PB_x[vi], fp58, fp60);
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp52;
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp103;
fp103 = fp101 + fp104;
LIBINT2_REALTYPE fp140;
fp140 = fp103 * fp99;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp80;
LIBINT2_REALTYPE fp14;
fp14 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp142;
fp142 = fp103 * fp98;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp81;
LIBINT2_REALTYPE fp13;
fp13 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp113;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp58;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_x[vi], fp52, fp55);
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp106;
fp106 = fp105 + fp107;
LIBINT2_REALTYPE fp108;
fp108 = fp106 + fp109;
LIBINT2_REALTYPE fp144;
fp144 = fp108 * fp99;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp81;
LIBINT2_REALTYPE fp12;
fp12 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp145;
fp145 = fp161 * fp75;
LIBINT2_REALTYPE fp11;
fp11 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp146;
fp146 = fp163 * fp78;
LIBINT2_REALTYPE fp10;
fp10 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp147;
fp147 = fp165 * fp78;
LIBINT2_REALTYPE fp9;
fp9 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp80;
LIBINT2_REALTYPE fp8;
fp8 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp81;
LIBINT2_REALTYPE fp7;
fp7 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp81;
LIBINT2_REALTYPE fp6;
fp6 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp80;
LIBINT2_REALTYPE fp5;
fp5 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp81;
LIBINT2_REALTYPE fp4;
fp4 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp81;
LIBINT2_REALTYPE fp3;
fp3 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp80;
LIBINT2_REALTYPE fp2;
fp2 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp81;
LIBINT2_REALTYPE fp1;
fp1 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp81;
LIBINT2_REALTYPE fp0;
fp0 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 166 */
}

#ifdef __cplusplus
};
#endif
