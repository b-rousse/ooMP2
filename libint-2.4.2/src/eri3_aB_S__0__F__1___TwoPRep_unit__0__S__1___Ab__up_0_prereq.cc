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
void eri3_aB_S__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp112;
fp112 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp65);
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp62);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->roe[vi], fp61, fp64);
LIBINT2_REALTYPE fp11;
fp11 = fp112 * fp12;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2e[vi] * fp96;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp31);
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_z[vi] * fp30;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->QC_z[vi], fp61, fp35);
LIBINT2_REALTYPE fp33;
fp33 = fp34 - fp95;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_z[vi] * fp33;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2e[vi] * fp103;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_z[vi] * fp61;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->QC_z[vi], fp64, fp39);
LIBINT2_REALTYPE fp37;
fp37 = fp38 - fp102;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->QC_z[vi], fp37, fp15);
LIBINT2_REALTYPE fp10;
fp10 = fp14 - fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_y[vi] * fp33;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->QC_y[vi], fp37, fp18);
LIBINT2_REALTYPE fp8;
fp8 = fp17;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp48);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_y[vi] * fp47;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp71);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->QC_y[vi], fp70, fp52);
LIBINT2_REALTYPE fp50;
fp50 = fp51 - fp95;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_z[vi] * fp50;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * fp70;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp74);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->QC_y[vi], fp73, fp56);
LIBINT2_REALTYPE fp54;
fp54 = fp55 - fp102;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->QC_z[vi], fp54, fp21);
LIBINT2_REALTYPE fp7;
fp7 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->roe[vi], fp70, fp73);
LIBINT2_REALTYPE fp24;
fp24 = fp112 * fp25;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WQ_y[vi] * fp50;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->QC_y[vi], fp54, fp28);
LIBINT2_REALTYPE fp23;
fp23 = fp27 - fp24;
LIBINT2_REALTYPE fp6;
fp6 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WQ_x[vi] * fp33;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->QC_x[vi], fp37, fp42);
LIBINT2_REALTYPE fp5;
fp5 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp86);
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp89);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->QC_y[vi], fp88, fp77);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * fp76;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_y[vi] * fp88;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp92);
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->QC_y[vi], fp91, fp80);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->QC_z[vi], fp79, fp45);
LIBINT2_REALTYPE fp4;
fp4 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_x[vi] * fp50;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->QC_x[vi], fp54, fp59);
LIBINT2_REALTYPE fp3;
fp3 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_x[vi] * fp85;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->QC_x[vi], fp88, fp99);
LIBINT2_REALTYPE fp94;
fp94 = fp98 - fp95;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_z[vi] * fp94;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_x[vi] * fp88;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->QC_x[vi], fp91, fp106);
LIBINT2_REALTYPE fp101;
fp101 = fp105 - fp102;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->QC_z[vi], fp101, fp68);
LIBINT2_REALTYPE fp2;
fp2 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_y[vi] * fp94;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->QC_y[vi], fp101, fp83);
LIBINT2_REALTYPE fp1;
fp1 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_minus(inteval->roe[vi], fp88, fp91);
LIBINT2_REALTYPE fp109;
fp109 = fp112 * fp110;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_x[vi] * fp94;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->QC_x[vi], fp101, fp114);
LIBINT2_REALTYPE fp108;
fp108 = fp113 - fp109;
LIBINT2_REALTYPE fp0;
fp0 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 116 */
}

#ifdef __cplusplus
};
#endif
