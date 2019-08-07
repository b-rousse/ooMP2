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
void _sphemultipole_S_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp129;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + fp131;
LIBINT2_REALTYPE fp136;
fp136 = fp134 * fp133;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp132;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * fp135;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PO_y[vi] * fp127;
LIBINT2_REALTYPE fp122;
fp122 = -5.0000000000000000e-01 * fp123;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PO_y[vi] * fp122;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PO_x[vi] * fp127;
LIBINT2_REALTYPE fp100;
fp100 = -5.0000000000000000e-01 * fp101;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->PO_x[vi], fp100, fp33);
LIBINT2_REALTYPE fp31;
fp31 = -2.5000000000000000e-01 * fp32;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_z[vi] * fp31;
LIBINT2_REALTYPE fp26;
fp26 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp96;
fp96 = 5.0000000000000000e-01 * fp122;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_y[vi], fp31, fp29);
LIBINT2_REALTYPE fp25;
fp25 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * fp100;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 - fp68;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PB_x[vi], fp31, fp36);
LIBINT2_REALTYPE fp24;
fp24 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp41;
LIBINT2_REALTYPE fp81;
fp81 = 3.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp81 * fp100;
LIBINT2_REALTYPE fp44;
fp44 = 3.3333333333333331e-01 * fp45;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PB_z[vi], fp44, fp40);
LIBINT2_REALTYPE fp23;
fp23 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->PB_y[vi] * fp44;
LIBINT2_REALTYPE fp22;
fp22 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp127;
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * fp113;
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e-01 * fp112;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 - fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PB_x[vi], fp44, fp47);
LIBINT2_REALTYPE fp21;
fp21 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp112;
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PO2[vi] * fp127;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(fp81, fp112, fp62);
LIBINT2_REALTYPE fp60;
fp60 = 2.5000000000000000e-01 * fp61;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PB_z[vi], fp60, fp52);
LIBINT2_REALTYPE fp20;
fp20 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + fp96;
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_y[vi], fp60, fp56);
LIBINT2_REALTYPE fp19;
fp19 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp87;
fp87 = -5.0000000000000000e-01 * fp100;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + fp68;
LIBINT2_REALTYPE fp66;
fp66 = fp67 - fp87;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PB_x[vi], fp60, fp65);
LIBINT2_REALTYPE fp18;
fp18 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + fp122;
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp122;
LIBINT2_REALTYPE fp79;
fp79 = 3.3333333333333331e-01 * fp80;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PB_z[vi], fp79, fp71);
LIBINT2_REALTYPE fp17;
fp17 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(-5.0000000000000000e-01, fp112, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PB_y[vi], fp79, fp75);
LIBINT2_REALTYPE fp16;
fp16 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->PB_x[vi] * fp79;
LIBINT2_REALTYPE fp15;
fp15 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PO_x[vi] * fp122;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->PO_y[vi], fp100, fp91);
LIBINT2_REALTYPE fp89;
fp89 = -2.5000000000000000e-01 * fp90;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PB_z[vi] * fp89;
LIBINT2_REALTYPE fp14;
fp14 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_y[vi], fp89, fp85);
LIBINT2_REALTYPE fp13;
fp13 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 - fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PB_x[vi], fp89, fp94);
LIBINT2_REALTYPE fp12;
fp12 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->PB_z[vi] * fp100;
LIBINT2_REALTYPE fp11;
fp11 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->PB_y[vi] * fp100;
LIBINT2_REALTYPE fp10;
fp10 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp105;
fp105 = 5.0000000000000000e-01 * fp127;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 - fp105;
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PB_x[vi], fp100, fp103);
LIBINT2_REALTYPE fp9;
fp9 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + fp127;
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PB_z[vi], fp112, fp108);
LIBINT2_REALTYPE fp8;
fp8 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_y[vi] * fp112;
LIBINT2_REALTYPE fp7;
fp7 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_x[vi] * fp112;
LIBINT2_REALTYPE fp6;
fp6 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->PB_z[vi] * fp122;
LIBINT2_REALTYPE fp5;
fp5 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(-5.0000000000000000e-01, fp127, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PB_y[vi], fp122, fp118);
LIBINT2_REALTYPE fp4;
fp4 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp124;
fp124 = inteval->PB_x[vi] * fp122;
LIBINT2_REALTYPE fp3;
fp3 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * fp127;
LIBINT2_REALTYPE fp2;
fp2 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_y[vi] * fp127;
LIBINT2_REALTYPE fp1;
fp1 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->PB_x[vi] * fp127;
LIBINT2_REALTYPE fp0;
fp0 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 137 */
}

#ifdef __cplusplus
};
#endif
