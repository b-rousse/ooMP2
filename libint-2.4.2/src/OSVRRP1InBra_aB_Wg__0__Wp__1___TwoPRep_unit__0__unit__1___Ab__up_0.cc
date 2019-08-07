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
void OSVRRP1InBra_aB_Wg__0__Wp__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

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
fp0 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_y[vi] * src0[((hsi*15+14)*1+lsi)*1];
target[((hsi*45+43)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WQ_x[vi] * src0[((hsi*15+14)*1+lsi)*1];
target[((hsi*45+42)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp8;
fp8 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp7);
target[((hsi*45+41)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+13)*1+lsi)*1], fp11);
target[((hsi*45+40)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_x[vi] * src0[((hsi*15+13)*1+lsi)*1];
target[((hsi*45+39)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp16);
target[((hsi*45+38)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp21;
fp21 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+12)*1+lsi)*1], fp20);
target[((hsi*45+37)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WQ_x[vi] * src0[((hsi*15+12)*1+lsi)*1];
target[((hsi*45+36)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp25);
target[((hsi*45+35)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp30;
fp30 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+11)*1+lsi)*1], fp29);
target[((hsi*45+34)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
target[((hsi*45+33)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+32)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp36;
fp36 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp35);
target[((hsi*45+31)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_x[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+30)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp40);
target[((hsi*45+29)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*45+28)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+9)*1+lsi)*1], fp45);
target[((hsi*45+27)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp49);
target[((hsi*45+26)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+8)*1+lsi)*1], fp53);
target[((hsi*45+25)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+8)*1+lsi)*1], fp57);
target[((hsi*45+24)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp61);
target[((hsi*45+23)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp66;
fp66 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+7)*1+lsi)*1], fp65);
target[((hsi*45+22)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+7)*1+lsi)*1], fp69);
target[((hsi*45+21)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*45+20)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp74);
target[((hsi*45+19)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+6)*1+lsi)*1], fp78);
target[((hsi*45+18)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp82);
target[((hsi*45+17)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*45+16)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+5)*1+lsi)*1], fp87);
target[((hsi*45+15)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp92;
fp92 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp91);
target[((hsi*45+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp96;
fp96 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+4)*1+lsi)*1], fp95);
target[((hsi*45+13)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp100;
fp100 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+4)*1+lsi)*1], fp99);
target[((hsi*45+12)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WQ_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp104);
target[((hsi*45+10)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp109;
fp109 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+3)*1+lsi)*1], fp108);
target[((hsi*45+9)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp112);
target[((hsi*45+8)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WQ_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+7)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+2)*1+lsi)*1], fp117);
target[((hsi*45+6)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+5)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp122);
target[((hsi*45+4)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp127;
fp127 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp127 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+1)*1+lsi)*1], fp126);
target[((hsi*45+3)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp132);
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
