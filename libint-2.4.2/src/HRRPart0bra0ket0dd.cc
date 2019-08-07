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
void HRRPart0bra0ket0dd(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+17)*lowdim+lsi)*1], src0[((hsi*30+29)*lowdim+lsi)*1]);
target[((hsi*36+35)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+16)*lowdim+lsi)*1], src0[((hsi*30+28)*lowdim+lsi)*1]);
target[((hsi*36+34)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+16)*lowdim+lsi)*1], src0[((hsi*30+25)*lowdim+lsi)*1]);
target[((hsi*36+33)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+27)*lowdim+lsi)*1]);
target[((hsi*36+32)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+24)*lowdim+lsi)*1]);
target[((hsi*36+31)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+15)*lowdim+lsi)*1]);
target[((hsi*36+30)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+14)*lowdim+lsi)*1], src0[((hsi*30+26)*lowdim+lsi)*1]);
target[((hsi*36+29)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+13)*lowdim+lsi)*1], src0[((hsi*30+25)*lowdim+lsi)*1]);
target[((hsi*36+28)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+13)*lowdim+lsi)*1], src0[((hsi*30+22)*lowdim+lsi)*1]);
target[((hsi*36+27)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+24)*lowdim+lsi)*1]);
target[((hsi*36+26)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+21)*lowdim+lsi)*1]);
target[((hsi*36+25)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+12)*lowdim+lsi)*1]);
target[((hsi*36+24)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+11)*lowdim+lsi)*1], src0[((hsi*30+23)*lowdim+lsi)*1]);
target[((hsi*36+23)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+10)*lowdim+lsi)*1], src0[((hsi*30+22)*lowdim+lsi)*1]);
target[((hsi*36+22)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+10)*lowdim+lsi)*1], src0[((hsi*30+19)*lowdim+lsi)*1]);
target[((hsi*36+21)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+21)*lowdim+lsi)*1]);
target[((hsi*36+20)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+18)*lowdim+lsi)*1]);
target[((hsi*36+19)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+9)*lowdim+lsi)*1]);
target[((hsi*36+18)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+8)*lowdim+lsi)*1], src0[((hsi*30+17)*lowdim+lsi)*1]);
target[((hsi*36+17)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+7)*lowdim+lsi)*1], src0[((hsi*30+16)*lowdim+lsi)*1]);
target[((hsi*36+16)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+7)*lowdim+lsi)*1], src0[((hsi*30+13)*lowdim+lsi)*1]);
target[((hsi*36+15)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+15)*lowdim+lsi)*1]);
target[((hsi*36+14)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+12)*lowdim+lsi)*1]);
target[((hsi*36+13)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+6)*lowdim+lsi)*1]);
target[((hsi*36+12)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+5)*lowdim+lsi)*1], src0[((hsi*30+14)*lowdim+lsi)*1]);
target[((hsi*36+11)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+4)*lowdim+lsi)*1], src0[((hsi*30+13)*lowdim+lsi)*1]);
target[((hsi*36+10)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+4)*lowdim+lsi)*1], src0[((hsi*30+10)*lowdim+lsi)*1]);
target[((hsi*36+9)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+12)*lowdim+lsi)*1]);
target[((hsi*36+8)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+9)*lowdim+lsi)*1]);
target[((hsi*36+7)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+3)*lowdim+lsi)*1]);
target[((hsi*36+6)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+2)*lowdim+lsi)*1], src0[((hsi*30+8)*lowdim+lsi)*1]);
target[((hsi*36+5)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+1)*lowdim+lsi)*1], src0[((hsi*30+7)*lowdim+lsi)*1]);
target[((hsi*36+4)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+1)*lowdim+lsi)*1], src0[((hsi*30+4)*lowdim+lsi)*1]);
target[((hsi*36+3)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+6)*lowdim+lsi)*1]);
target[((hsi*36+2)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+3)*lowdim+lsi)*1]);
target[((hsi*36+1)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+0)*lowdim+lsi)*1]);
target[((hsi*36+0)*lowdim+lsi)*1] = fp70;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 72 */
}

#ifdef __cplusplus
};
#endif
