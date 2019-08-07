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
void _sphemultipole_P_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

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
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * fp135;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PO_y[vi] * fp51;
LIBINT2_REALTYPE fp49;
fp49 = -5.0000000000000000e-01 * fp50;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PO_y[vi] * fp49;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PO_x[vi] * fp51;
LIBINT2_REALTYPE fp44;
fp44 = -5.0000000000000000e-01 * fp45;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PO_x[vi], fp44, fp29);
LIBINT2_REALTYPE fp27;
fp27 = -2.5000000000000000e-01 * fp28;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * fp27;
LIBINT2_REALTYPE fp26;
fp26 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * fp49;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_y[vi], fp27, fp54);
LIBINT2_REALTYPE fp25;
fp25 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp83;
fp83 = 5.0000000000000000e-01 * fp44;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 - fp83;
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_x[vi], fp27, fp57);
LIBINT2_REALTYPE fp24;
fp24 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp39;
fp39 = 3.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp39 * fp44;
LIBINT2_REALTYPE fp31;
fp31 = 3.3333333333333331e-01 * fp32;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_z[vi], fp31, fp61);
LIBINT2_REALTYPE fp23;
fp23 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_y[vi] * fp31;
LIBINT2_REALTYPE fp22;
fp22 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp51;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * fp46;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 - fp68;
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->PA_x[vi], fp31, fp66);
LIBINT2_REALTYPE fp21;
fp21 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PO2[vi] * fp51;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(fp39, fp46, fp35);
LIBINT2_REALTYPE fp33;
fp33 = 2.5000000000000000e-01 * fp34;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_z[vi], fp33, fp71);
LIBINT2_REALTYPE fp20;
fp20 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp104;
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_y[vi], fp33, fp75);
LIBINT2_REALTYPE fp19;
fp19 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp99;
fp99 = -5.0000000000000000e-01 * fp44;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 - fp99;
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_x[vi], fp33, fp80);
LIBINT2_REALTYPE fp18;
fp18 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp49;
LIBINT2_REALTYPE fp37;
fp37 = 3.3333333333333331e-01 * fp38;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PA_z[vi], fp37, fp86);
LIBINT2_REALTYPE fp17;
fp17 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(-5.0000000000000000e-01, fp46, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = inteval->oo2z[vi] * fp91;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->PA_y[vi], fp37, fp90);
LIBINT2_REALTYPE fp16;
fp16 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_x[vi] * fp37;
LIBINT2_REALTYPE fp15;
fp15 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->PO_x[vi] * fp49;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PO_y[vi], fp44, fp42);
LIBINT2_REALTYPE fp40;
fp40 = -2.5000000000000000e-01 * fp41;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PA_z[vi] * fp40;
LIBINT2_REALTYPE fp14;
fp14 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_y[vi], fp40, fp97);
LIBINT2_REALTYPE fp13;
fp13 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 - fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_x[vi], fp40, fp102);
LIBINT2_REALTYPE fp12;
fp12 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * fp44;
LIBINT2_REALTYPE fp11;
fp11 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_y[vi] * fp44;
LIBINT2_REALTYPE fp10;
fp10 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e-01 * fp51;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 - fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_x[vi], fp44, fp109);
LIBINT2_REALTYPE fp9;
fp9 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PA_z[vi], fp46, fp114);
LIBINT2_REALTYPE fp8;
fp8 = fp113;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_y[vi] * fp46;
LIBINT2_REALTYPE fp7;
fp7 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->PA_x[vi] * fp46;
LIBINT2_REALTYPE fp6;
fp6 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_z[vi] * fp49;
LIBINT2_REALTYPE fp5;
fp5 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(-5.0000000000000000e-01, fp51, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_y[vi], fp49, fp121);
LIBINT2_REALTYPE fp4;
fp4 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_x[vi] * fp49;
LIBINT2_REALTYPE fp3;
fp3 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_z[vi] * fp51;
LIBINT2_REALTYPE fp2;
fp2 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * fp51;
LIBINT2_REALTYPE fp1;
fp1 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_x[vi] * fp51;
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
