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
void eri2_aB_WD__0__WP__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2ze[vi] * fp35;
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->WP_z[vi], fp43, fp50);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->WP_z[vi], fp31, fp19);
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp45;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * fp55;
LIBINT2_REALTYPE fp16;
fp16 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * fp47;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * fp56;
LIBINT2_REALTYPE fp15;
fp15 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * fp31;
LIBINT2_REALTYPE fp14;
fp14 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_y[vi], fp45, fp50);
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * fp38;
LIBINT2_REALTYPE fp13;
fp13 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * fp47;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * fp58;
LIBINT2_REALTYPE fp12;
fp12 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * fp43;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_y[vi] * fp57;
LIBINT2_REALTYPE fp11;
fp11 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2ze[vi] * fp41;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->WP_y[vi], fp38, fp28);
LIBINT2_REALTYPE fp10;
fp10 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_y[vi] * fp58;
LIBINT2_REALTYPE fp9;
fp9 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_x[vi] * fp31;
LIBINT2_REALTYPE fp8;
fp8 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_x[vi] * fp45;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * fp60;
LIBINT2_REALTYPE fp7;
fp7 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_x[vi], fp47, fp50);
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * fp49;
LIBINT2_REALTYPE fp6;
fp6 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * fp43;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_y[vi] * fp59;
LIBINT2_REALTYPE fp5;
fp5 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_x[vi] * fp38;
LIBINT2_REALTYPE fp4;
fp4 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_y[vi] * fp49;
LIBINT2_REALTYPE fp3;
fp3 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_x[vi] * fp59;
LIBINT2_REALTYPE fp2;
fp2 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_x[vi] * fp60;
LIBINT2_REALTYPE fp1;
fp1 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2ze[vi] * fp48;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WP_x[vi], fp49, fp53);
LIBINT2_REALTYPE fp0;
fp0 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 61 */
}

#ifdef __cplusplus
};
#endif
