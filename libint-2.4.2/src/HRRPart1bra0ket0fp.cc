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
void HRRPart1bra0ket0fp(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+9)*1+lsi)*1], src0[((hsi*15+14)*1+lsi)*1]);
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+9)*1+lsi)*1], src0[((hsi*15+13)*1+lsi)*1]);
target[((hsi*30+28)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+9)*1+lsi)*1], src0[((hsi*15+9)*1+lsi)*1]);
target[((hsi*30+27)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+8)*1+lsi)*1], src0[((hsi*15+13)*1+lsi)*1]);
target[((hsi*30+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+8)*1+lsi)*1], src0[((hsi*15+12)*1+lsi)*1]);
target[((hsi*30+25)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+8)*1+lsi)*1], src0[((hsi*15+8)*1+lsi)*1]);
target[((hsi*30+24)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+7)*1+lsi)*1], src0[((hsi*15+12)*1+lsi)*1]);
target[((hsi*30+23)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+7)*1+lsi)*1], src0[((hsi*15+11)*1+lsi)*1]);
target[((hsi*30+22)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+7)*1+lsi)*1], src0[((hsi*15+7)*1+lsi)*1]);
target[((hsi*30+21)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+6)*1+lsi)*1], src0[((hsi*15+11)*1+lsi)*1]);
target[((hsi*30+20)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+6)*1+lsi)*1], src0[((hsi*15+10)*1+lsi)*1]);
target[((hsi*30+19)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+6)*1+lsi)*1], src0[((hsi*15+6)*1+lsi)*1]);
target[((hsi*30+18)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+5)*1+lsi)*1], src0[((hsi*15+9)*1+lsi)*1]);
target[((hsi*30+17)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+5)*1+lsi)*1], src0[((hsi*15+8)*1+lsi)*1]);
target[((hsi*30+16)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+5)*1+lsi)*1], src0[((hsi*15+5)*1+lsi)*1]);
target[((hsi*30+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+4)*1+lsi)*1], src0[((hsi*15+8)*1+lsi)*1]);
target[((hsi*30+14)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+4)*1+lsi)*1], src0[((hsi*15+7)*1+lsi)*1]);
target[((hsi*30+13)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+4)*1+lsi)*1], src0[((hsi*15+4)*1+lsi)*1]);
target[((hsi*30+12)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+3)*1+lsi)*1], src0[((hsi*15+7)*1+lsi)*1]);
target[((hsi*30+11)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+3)*1+lsi)*1], src0[((hsi*15+6)*1+lsi)*1]);
target[((hsi*30+10)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+3)*1+lsi)*1], src0[((hsi*15+3)*1+lsi)*1]);
target[((hsi*30+9)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+2)*1+lsi)*1], src0[((hsi*15+5)*1+lsi)*1]);
target[((hsi*30+8)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+2)*1+lsi)*1], src0[((hsi*15+4)*1+lsi)*1]);
target[((hsi*30+7)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+2)*1+lsi)*1], src0[((hsi*15+2)*1+lsi)*1]);
target[((hsi*30+6)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+1)*1+lsi)*1], src0[((hsi*15+4)*1+lsi)*1]);
target[((hsi*30+5)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+1)*1+lsi)*1], src0[((hsi*15+3)*1+lsi)*1]);
target[((hsi*30+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+1)*1+lsi)*1], src0[((hsi*15+1)*1+lsi)*1]);
target[((hsi*30+3)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*10+0)*1+lsi)*1], src0[((hsi*15+2)*1+lsi)*1]);
target[((hsi*30+2)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*10+0)*1+lsi)*1], src0[((hsi*15+1)*1+lsi)*1]);
target[((hsi*30+1)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*10+0)*1+lsi)*1], src0[((hsi*15+0)*1+lsi)*1]);
target[((hsi*30+0)*1+lsi)*1] = fp58;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
#endif
