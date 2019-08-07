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
void eri3_aB_WF__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp70;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2ze[vi] * fp52;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2ze[vi] * fp70;
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp85);
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_z[vi], fp84, fp116);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_z[vi], fp107, fp47);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_z[vi], fp46, fp31);
LIBINT2_REALTYPE fp29;
fp29 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp90);
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_z[vi] * fp89;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * fp109;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * fp50;
LIBINT2_REALTYPE fp28;
fp28 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp95);
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * fp94;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * fp105;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * fp53;
LIBINT2_REALTYPE fp27;
fp27 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_y[vi] * fp46;
LIBINT2_REALTYPE fp26;
fp26 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_y[vi], fp89, fp116);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * fp111;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * fp57;
LIBINT2_REALTYPE fp25;
fp25 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * fp94;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * fp59;
LIBINT2_REALTYPE fp24;
fp24 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_y[vi] * fp107;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * fp55;
LIBINT2_REALTYPE fp23;
fp23 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2ze[vi] * fp79;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_y[vi], fp111, fp64);
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * fp63;
LIBINT2_REALTYPE fp22;
fp22 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * fp106;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * fp68;
LIBINT2_REALTYPE fp21;
fp21 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp84;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_y[vi] * fp110;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * fp61;
LIBINT2_REALTYPE fp20;
fp20 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2ze[vi] * fp67;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->WP_y[vi], fp63, fp43);
LIBINT2_REALTYPE fp19;
fp19 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_y[vi] * fp68;
LIBINT2_REALTYPE fp18;
fp18 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_x[vi] * fp46;
LIBINT2_REALTYPE fp17;
fp17 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_x[vi] * fp89;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * fp114;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * fp73;
LIBINT2_REALTYPE fp16;
fp16 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_x[vi], fp94, fp116);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * fp115;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * fp75;
LIBINT2_REALTYPE fp15;
fp15 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_x[vi] * fp107;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * fp71;
LIBINT2_REALTYPE fp14;
fp14 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_x[vi] * fp111;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * fp80;
LIBINT2_REALTYPE fp13;
fp13 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * fp115;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * fp82;
LIBINT2_REALTYPE fp12;
fp12 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_x[vi] * fp84;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_y[vi] * fp113;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * fp77;
LIBINT2_REALTYPE fp11;
fp11 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_x[vi] * fp63;
LIBINT2_REALTYPE fp10;
fp10 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_y[vi] * fp82;
LIBINT2_REALTYPE fp9;
fp9 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_x[vi] * fp71;
LIBINT2_REALTYPE fp8;
fp8 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_x[vi] * fp114;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_z[vi] * fp92;
LIBINT2_REALTYPE fp7;
fp7 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2ze[vi] * fp97;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->WP_x[vi], fp115, fp100);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_z[vi] * fp99;
LIBINT2_REALTYPE fp6;
fp6 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_x[vi] * fp113;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * fp87;
LIBINT2_REALTYPE fp5;
fp5 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp4;
fp4 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_y[vi] * fp99;
LIBINT2_REALTYPE fp3;
fp3 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * fp87;
LIBINT2_REALTYPE fp2;
fp2 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * fp92;
LIBINT2_REALTYPE fp1;
fp1 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_x[vi] * fp97;
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2ze[vi] * fp98;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->WP_x[vi], fp99, fp103);
LIBINT2_REALTYPE fp0;
fp0 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 118 */
}

#ifdef __cplusplus
};
#endif
