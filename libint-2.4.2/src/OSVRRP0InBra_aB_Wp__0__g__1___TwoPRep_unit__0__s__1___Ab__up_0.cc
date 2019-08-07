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
void OSVRRP0InBra_aB_Wp__0__g__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp5);
target[((hsi*45+43)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp9);
target[((hsi*45+42)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp13);
target[((hsi*45+41)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+40)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp18);
target[((hsi*45+39)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp22);
target[((hsi*45+38)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp26);
target[((hsi*45+37)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*45+36)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp32;
fp32 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp31);
target[((hsi*45+35)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp35);
target[((hsi*45+34)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*45+33)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp40);
target[((hsi*45+32)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+31)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+30)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_y[vi] * src0[((hsi*15+14)*1+lsi)*1];
target[((hsi*45+29)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+13)*1+lsi)*1], fp47);
target[((hsi*45+28)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp52;
fp52 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+12)*1+lsi)*1], fp51);
target[((hsi*45+27)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp56;
fp56 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+11)*1+lsi)*1], fp55);
target[((hsi*45+26)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp60;
fp60 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp59);
target[((hsi*45+25)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*45+24)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+8)*1+lsi)*1], fp64);
target[((hsi*45+23)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp69;
fp69 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+7)*1+lsi)*1], fp68);
target[((hsi*45+22)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp73;
fp73 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp72);
target[((hsi*45+21)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*45+20)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp78 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+4)*1+lsi)*1], fp77);
target[((hsi*45+19)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp82;
fp82 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp81);
target[((hsi*45+18)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+17)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp86);
target[((hsi*45+16)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+15)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_x[vi] * src0[((hsi*15+14)*1+lsi)*1];
target[((hsi*45+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_x[vi] * src0[((hsi*15+13)*1+lsi)*1];
target[((hsi*45+13)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_x[vi] * src0[((hsi*15+12)*1+lsi)*1];
target[((hsi*45+12)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_x[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+10)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+9)*1+lsi)*1], fp96);
target[((hsi*45+9)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+8)*1+lsi)*1], fp100);
target[((hsi*45+8)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+7)*1+lsi)*1], fp104);
target[((hsi*45+7)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+6)*1+lsi)*1], fp108);
target[((hsi*45+6)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp113;
fp113 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+5)*1+lsi)*1], fp112);
target[((hsi*45+5)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+4)*1+lsi)*1], fp116);
target[((hsi*45+4)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp121;
fp121 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+3)*1+lsi)*1], fp120);
target[((hsi*45+3)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp125;
fp125 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+2)*1+lsi)*1], fp124);
target[((hsi*45+2)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp129;
fp129 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+1)*1+lsi)*1], fp128);
target[((hsi*45+1)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp133;
fp133 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp132);
target[((hsi*45+0)*1+lsi)*1] = fp131;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 135 */
}

#ifdef __cplusplus
};
#endif
