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
void OSVRRP0InBra_aB_Wd__0__Wd__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp67;
fp67 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp67 * src1[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+17)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = inteval->oo2ze[vi] * src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+16)*1+lsi)*1], fp4);
target[((hsi*36+34)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
target[((hsi*36+33)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2ze[vi] * src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+14)*1+lsi)*1], fp8);
target[((hsi*36+32)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
target[((hsi*36+31)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp13;
fp13 = fp67 * src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+11)*1+lsi)*1], fp13);
target[((hsi*36+29)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2ze[vi] * src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+10)*1+lsi)*1], fp16);
target[((hsi*36+28)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
target[((hsi*36+27)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2ze[vi] * src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+8)*1+lsi)*1], fp32);
target[((hsi*36+26)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
target[((hsi*36+25)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
target[((hsi*36+23)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2ze[vi] * src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+10)*1+lsi)*1], fp25);
target[((hsi*36+22)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp28;
fp28 = fp67 * src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+9)*1+lsi)*1], fp28);
target[((hsi*36+21)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_y[vi] * src0[((hsi*18+8)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+7)*1+lsi)*1], fp32);
target[((hsi*36+19)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_y[vi] * src0[((hsi*18+6)*1+lsi)*1];
target[((hsi*36+18)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp36;
fp36 = fp67 * src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+5)*1+lsi)*1], fp36);
target[((hsi*36+17)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2ze[vi] * src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+4)*1+lsi)*1], fp63);
target[((hsi*36+16)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
target[((hsi*36+15)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2ze[vi] * src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+2)*1+lsi)*1], fp53);
target[((hsi*36+14)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
target[((hsi*36+13)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+12)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2ze[vi] * src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+4)*1+lsi)*1], fp60);
target[((hsi*36+10)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp67 * src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+3)*1+lsi)*1], fp49);
target[((hsi*36+9)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
target[((hsi*36+8)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+1)*1+lsi)*1], fp53);
target[((hsi*36+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_x[vi] * src0[((hsi*18+5)*1+lsi)*1];
target[((hsi*36+5)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * src0[((hsi*18+4)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_x[vi] * src0[((hsi*18+3)*1+lsi)*1];
target[((hsi*36+3)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*18+2)*1+lsi)*1], fp60);
target[((hsi*36+2)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*18+1)*1+lsi)*1], fp63);
target[((hsi*36+1)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*18+0)*1+lsi)*1], fp66);
target[((hsi*36+0)*1+lsi)*1] = fp65;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 69 */
}

#ifdef __cplusplus
};
#endif
