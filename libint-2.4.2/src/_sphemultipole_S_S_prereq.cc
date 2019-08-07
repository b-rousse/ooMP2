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
void _sphemultipole_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp36;
LIBINT2_REALTYPE fp41;
fp41 = fp39 * fp38;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp37;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * fp40;
LIBINT2_REALTYPE fp0;
fp0 = fp33;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PO_y[vi] * fp0;
LIBINT2_REALTYPE fp31;
fp31 = -5.0000000000000000e-01 * fp32;
LIBINT2_REALTYPE fp1;
fp1 = fp31;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PO_y[vi] * fp1;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PO_x[vi] * fp0;
LIBINT2_REALTYPE fp26;
fp26 = -5.0000000000000000e-01 * fp27;
LIBINT2_REALTYPE fp3;
fp3 = fp26;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->PO_x[vi], fp3, fp11);
LIBINT2_REALTYPE fp9;
fp9 = -2.5000000000000000e-01 * fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp21;
fp21 = 3.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp21 * fp3;
LIBINT2_REALTYPE fp13;
fp13 = 3.3333333333333331e-01 * fp14;
LIBINT2_REALTYPE fp7;
fp7 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->PO2[vi] * fp0;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp0;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * fp29;
LIBINT2_REALTYPE fp2;
fp2 = fp28;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(fp21, fp2, fp17);
LIBINT2_REALTYPE fp15;
fp15 = 2.5000000000000000e-01 * fp16;
LIBINT2_REALTYPE fp6;
fp6 = fp15;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp1;
LIBINT2_REALTYPE fp19;
fp19 = 3.3333333333333331e-01 * fp20;
LIBINT2_REALTYPE fp5;
fp5 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->PO_x[vi] * fp1;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PO_y[vi], fp3, fp24);
LIBINT2_REALTYPE fp22;
fp22 = -2.5000000000000000e-01 * fp23;
LIBINT2_REALTYPE fp4;
fp4 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 42 */
}

#ifdef __cplusplus
};
#endif
