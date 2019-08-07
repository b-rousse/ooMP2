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
void eri3_aB_WP__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp57);
LIBINT2_REALTYPE fp94;
fp94 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp94 * fp56;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp88 * fp86;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp54);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * fp53;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_z[vi], fp56, fp41);
LIBINT2_REALTYPE fp39;
fp39 = fp40 - fp85;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->WP_z[vi], fp39, fp19);
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp69);
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp68;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp66);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * fp65;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->QC_z[vi], fp68, fp45);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->WP_z[vi], fp44, fp75);
LIBINT2_REALTYPE fp16;
fp16 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_y[vi] * fp65;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->QC_y[vi], fp68, fp50);
LIBINT2_REALTYPE fp48;
fp48 = fp49 - fp85;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * fp48;
LIBINT2_REALTYPE fp15;
fp15 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp82);
LIBINT2_REALTYPE fp36;
fp36 = fp76 * fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp79);
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_z[vi] * fp78;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->QC_z[vi], fp81, fp60);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_z[vi], fp59, fp36);
LIBINT2_REALTYPE fp14;
fp14 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_y[vi] * fp78;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->QC_y[vi], fp81, fp72);
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * fp71;
LIBINT2_REALTYPE fp13;
fp13 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_x[vi] * fp78;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->QC_x[vi], fp81, fp90);
LIBINT2_REALTYPE fp84;
fp84 = fp89 - fp85;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * fp84;
LIBINT2_REALTYPE fp12;
fp12 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_y[vi] * fp39;
LIBINT2_REALTYPE fp11;
fp11 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp63;
fp63 = fp76 * fp56;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->WP_y[vi], fp44, fp63);
LIBINT2_REALTYPE fp10;
fp10 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp32;
fp32 = fp94 * fp68;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->WP_y[vi], fp48, fp32);
LIBINT2_REALTYPE fp9;
fp9 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_y[vi] * fp59;
LIBINT2_REALTYPE fp8;
fp8 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->WP_y[vi], fp71, fp36);
LIBINT2_REALTYPE fp7;
fp7 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * fp84;
LIBINT2_REALTYPE fp6;
fp6 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_x[vi] * fp39;
LIBINT2_REALTYPE fp5;
fp5 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_x[vi] * fp44;
LIBINT2_REALTYPE fp4;
fp4 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_x[vi] * fp48;
LIBINT2_REALTYPE fp3;
fp3 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->WP_x[vi], fp59, fp63);
LIBINT2_REALTYPE fp2;
fp2 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->WP_x[vi], fp71, fp75);
LIBINT2_REALTYPE fp1;
fp1 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp81;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->WP_x[vi], fp84, fp93);
LIBINT2_REALTYPE fp0;
fp0 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 96 */
}

#ifdef __cplusplus
};
#endif
