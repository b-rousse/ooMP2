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
void eri2_aB_WD__0__WD__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp141;
fp141 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->WP_z[vi], fp113, fp134);
LIBINT2_REALTYPE fp37;
fp37 = fp141 * fp77;
LIBINT2_REALTYPE fp69;
fp69 = fp141 * fp113;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->WQ_z[vi] * fp107;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->WP_z[vi], fp105, fp69);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->WP_z[vi], fp68, fp37);
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * fp120;
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2ze[vi] * fp82;
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->WP_z[vi], fp107, fp129);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_y[vi] * fp72;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->WP_z[vi], fp74, fp40);
LIBINT2_REALTYPE fp34;
fp34 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_y[vi] * fp110;
LIBINT2_REALTYPE fp143;
fp143 = inteval->WP_z[vi] * fp111;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * fp143;
LIBINT2_REALTYPE fp33;
fp33 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp131;
fp131 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_z[vi] * fp131;
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2ze[vi] * fp84;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_x[vi] * fp72;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WP_z[vi], fp79, fp44);
LIBINT2_REALTYPE fp32;
fp32 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_y[vi] * fp127;
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_z[vi] * fp121;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * fp144;
LIBINT2_REALTYPE fp31;
fp31 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_x[vi] * fp127;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_z[vi] * fp132;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * fp145;
LIBINT2_REALTYPE fp30;
fp30 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * fp68;
LIBINT2_REALTYPE fp29;
fp29 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->WP_y[vi], fp120, fp134);
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2ze[vi] * fp97;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->WP_y[vi], fp110, fp129);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_z[vi] * fp89;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_z[vi], fp87, fp50);
LIBINT2_REALTYPE fp28;
fp28 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp92;
fp92 = fp141 * fp120;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->WP_y[vi], fp111, fp92);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp91;
LIBINT2_REALTYPE fp27;
fp27 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp26;
fp26 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_x[vi] * fp89;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * fp99;
LIBINT2_REALTYPE fp25;
fp25 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * fp132;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp148;
LIBINT2_REALTYPE fp24;
fp24 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_y[vi] * fp105;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * fp146;
LIBINT2_REALTYPE fp23;
fp23 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * fp113;
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2ze[vi] * fp95;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->WP_y[vi], fp87, fp58);
LIBINT2_REALTYPE fp22;
fp22 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp61;
fp61 = fp141 * fp97;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WP_y[vi], fp91, fp61);
LIBINT2_REALTYPE fp21;
fp21 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * fp127;
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_y[vi] * fp114;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * fp147;
LIBINT2_REALTYPE fp20;
fp20 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * fp131;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2ze[vi] * fp103;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WP_y[vi], fp99, fp65);
LIBINT2_REALTYPE fp19;
fp19 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * fp148;
LIBINT2_REALTYPE fp18;
fp18 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_x[vi] * fp68;
LIBINT2_REALTYPE fp17;
fp17 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_x[vi] * fp74;
LIBINT2_REALTYPE fp16;
fp16 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_x[vi] * fp111;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_z[vi] * fp151;
LIBINT2_REALTYPE fp15;
fp15 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->WP_x[vi], fp131, fp134);
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2ze[vi] * fp133;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->WP_x[vi], fp127, fp129);
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_z[vi] * fp128;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->WP_z[vi], fp116, fp101);
LIBINT2_REALTYPE fp14;
fp14 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_y[vi] * fp128;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_z[vi] * fp123;
LIBINT2_REALTYPE fp13;
fp13 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp137;
fp137 = fp141 * fp131;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->WP_x[vi], fp132, fp137);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * fp136;
LIBINT2_REALTYPE fp12;
fp12 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_x[vi] * fp105;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_y[vi] * fp149;
LIBINT2_REALTYPE fp11;
fp11 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * fp87;
LIBINT2_REALTYPE fp10;
fp10 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_x[vi] * fp91;
LIBINT2_REALTYPE fp9;
fp9 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * fp116;
LIBINT2_REALTYPE fp8;
fp8 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->WP_y[vi], fp123, fp101);
LIBINT2_REALTYPE fp7;
fp7 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_y[vi] * fp136;
LIBINT2_REALTYPE fp6;
fp6 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_x[vi] * fp149;
LIBINT2_REALTYPE fp5;
fp5 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_z[vi] * fp110;
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_x[vi] * fp108;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_x[vi] * fp150;
LIBINT2_REALTYPE fp4;
fp4 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_x[vi] * fp151;
LIBINT2_REALTYPE fp3;
fp3 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_x[vi] * fp113;
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2ze[vi] * fp115;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->WP_x[vi], fp116, fp118);
LIBINT2_REALTYPE fp2;
fp2 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_x[vi] * fp120;
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2ze[vi] * fp122;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->WP_x[vi], fp123, fp125);
LIBINT2_REALTYPE fp1;
fp1 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp133;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->WP_x[vi], fp136, fp140);
LIBINT2_REALTYPE fp0;
fp0 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(fp0),1);
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
