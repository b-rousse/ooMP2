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
void OSVRRP0InBra_aB_Wd__0__f__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp124;
fp124 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp124 * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+29)*1+lsi)*1], fp1);
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp120;
fp120 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp120 * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+28)*1+lsi)*1], fp4);
target[((hsi*60+58)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2ze[vi] * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+27)*1+lsi)*1], fp7);
target[((hsi*60+57)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*30+26)*1+lsi)*1];
target[((hsi*60+56)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp120 * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+25)*1+lsi)*1], fp11);
target[((hsi*60+55)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->oo2ze[vi] * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+24)*1+lsi)*1], fp14);
target[((hsi*60+54)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*30+23)*1+lsi)*1];
target[((hsi*60+53)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp18;
fp18 = inteval->oo2ze[vi] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+22)*1+lsi)*1], fp18);
target[((hsi*60+52)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*30+21)*1+lsi)*1];
target[((hsi*60+51)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*30+20)*1+lsi)*1];
target[((hsi*60+50)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp23;
fp23 = fp124 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+19)*1+lsi)*1], fp23);
target[((hsi*60+49)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp47;
fp47 = fp120 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+18)*1+lsi)*1], fp47);
target[((hsi*60+48)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2ze[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+17)*1+lsi)*1], fp28);
target[((hsi*60+47)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
target[((hsi*60+46)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp32;
fp32 = fp120 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+15)*1+lsi)*1], fp32);
target[((hsi*60+45)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2ze[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+14)*1+lsi)*1], fp35);
target[((hsi*60+44)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
target[((hsi*60+43)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2ze[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+12)*1+lsi)*1], fp61);
target[((hsi*60+42)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
target[((hsi*60+41)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
target[((hsi*60+40)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_y[vi] * src0[((hsi*30+19)*1+lsi)*1];
target[((hsi*60+39)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2ze[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+18)*1+lsi)*1], fp44);
target[((hsi*60+38)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+17)*1+lsi)*1], fp47);
target[((hsi*60+37)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp50;
fp50 = fp124 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+16)*1+lsi)*1], fp50);
target[((hsi*60+36)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * src0[((hsi*30+15)*1+lsi)*1];
target[((hsi*60+35)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2ze[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+14)*1+lsi)*1], fp54);
target[((hsi*60+34)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp57;
fp57 = fp120 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+13)*1+lsi)*1], fp57);
target[((hsi*60+33)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
target[((hsi*60+32)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+11)*1+lsi)*1], fp61);
target[((hsi*60+31)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * src0[((hsi*30+10)*1+lsi)*1];
target[((hsi*60+30)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp65;
fp65 = fp124 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+9)*1+lsi)*1], fp65);
target[((hsi*60+29)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp86;
fp86 = fp120 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+8)*1+lsi)*1], fp86);
target[((hsi*60+28)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2ze[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+7)*1+lsi)*1], fp113);
target[((hsi*60+27)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_z[vi] * src0[((hsi*30+6)*1+lsi)*1];
target[((hsi*60+26)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp116;
fp116 = fp120 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+5)*1+lsi)*1], fp116);
target[((hsi*60+25)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2ze[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+4)*1+lsi)*1], fp75);
target[((hsi*60+24)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
target[((hsi*60+23)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2ze[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+2)*1+lsi)*1], fp99);
target[((hsi*60+22)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
target[((hsi*60+21)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+20)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * src0[((hsi*30+9)*1+lsi)*1];
target[((hsi*60+19)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2ze[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+8)*1+lsi)*1], fp107);
target[((hsi*60+18)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+7)*1+lsi)*1], fp86);
target[((hsi*60+17)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp89;
fp89 = fp124 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+6)*1+lsi)*1], fp89);
target[((hsi*60+16)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * src0[((hsi*30+5)*1+lsi)*1];
target[((hsi*60+15)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2ze[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+4)*1+lsi)*1], fp93);
target[((hsi*60+14)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+3)*1+lsi)*1], fp119);
target[((hsi*60+13)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
target[((hsi*60+12)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+1)*1+lsi)*1], fp99);
target[((hsi*60+11)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+10)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_x[vi] * src0[((hsi*30+9)*1+lsi)*1];
target[((hsi*60+9)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_x[vi] * src0[((hsi*30+8)*1+lsi)*1];
target[((hsi*60+8)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_x[vi] * src0[((hsi*30+7)*1+lsi)*1];
target[((hsi*60+7)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_x[vi] * src0[((hsi*30+6)*1+lsi)*1];
target[((hsi*60+6)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+5)*1+lsi)*1], fp107);
target[((hsi*60+5)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2ze[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+4)*1+lsi)*1], fp110);
target[((hsi*60+4)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+3)*1+lsi)*1], fp113);
target[((hsi*60+3)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+2)*1+lsi)*1], fp116);
target[((hsi*60+2)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+1)*1+lsi)*1], fp119);
target[((hsi*60+1)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*30+0)*1+lsi)*1], fp123);
target[((hsi*60+0)*1+lsi)*1] = fp122;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
#endif
