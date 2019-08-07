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
void CR_aB_p__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp49);
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp50, fp52);
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp59);
LIBINT2_REALTYPE fp83;
fp83 = fp57 * fp54;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp0;
target[((hsi*30+29)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp42);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp43);
LIBINT2_REALTYPE fp85;
fp85 = fp57 * fp45;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp1;
target[((hsi*30+28)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp37);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp38);
LIBINT2_REALTYPE fp87;
fp87 = fp57 * fp40;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
target[((hsi*30+27)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp37;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp32 + fp34;
LIBINT2_REALTYPE fp35;
fp35 = fp33 + fp36;
LIBINT2_REALTYPE fp89;
fp89 = fp57 * fp35;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
target[((hsi*30+26)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp62);
LIBINT2_REALTYPE fp91;
fp91 = fp60 * fp54;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp1;
target[((hsi*30+25)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp60 * fp45;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp2;
target[((hsi*30+24)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp60 * fp40;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp3;
target[((hsi*30+23)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp65);
LIBINT2_REALTYPE fp97;
fp97 = fp63 * fp54;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp2;
target[((hsi*30+22)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp63 * fp45;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
target[((hsi*30+21)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_x[vi] * fp65;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp66 + fp68;
LIBINT2_REALTYPE fp101;
fp101 = fp67 * fp54;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp3;
target[((hsi*30+20)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp24, fp25);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp24);
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp28);
LIBINT2_REALTYPE fp103;
fp103 = fp57 * fp30;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*30+19)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_y[vi], fp25, fp18);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp19);
LIBINT2_REALTYPE fp105;
fp105 = fp57 * fp21;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
target[((hsi*30+18)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_y[vi], fp18, fp13);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp19, fp14);
LIBINT2_REALTYPE fp107;
fp107 = fp57 * fp16;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp6;
target[((hsi*30+17)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp14;
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_y[vi] * fp13;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp8 + fp10;
LIBINT2_REALTYPE fp11;
fp11 = fp9 + fp12;
LIBINT2_REALTYPE fp109;
fp109 = fp57 * fp11;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp7;
target[((hsi*30+16)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp60 * fp30;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp5;
target[((hsi*30+15)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp60 * fp21;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp6;
target[((hsi*30+14)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp60 * fp16;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp7;
target[((hsi*30+13)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp63 * fp30;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp6;
target[((hsi*30+12)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp63 * fp21;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp7;
target[((hsi*30+11)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp67 * fp30;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp7;
target[((hsi*30+10)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp72);
LIBINT2_REALTYPE fp123;
fp123 = fp70 * fp54;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp4;
target[((hsi*30+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp70 * fp45;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp5;
target[((hsi*30+8)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp70 * fp40;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp6;
target[((hsi*30+7)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp70 * fp35;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
target[((hsi*30+6)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp72, fp75);
LIBINT2_REALTYPE fp131;
fp131 = fp73 * fp54;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
target[((hsi*30+5)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp73 * fp45;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp6;
target[((hsi*30+4)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp73 * fp40;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp7;
target[((hsi*30+3)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp75, fp78);
LIBINT2_REALTYPE fp137;
fp137 = fp76 * fp54;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp6;
target[((hsi*30+2)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp76 * fp45;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp7;
target[((hsi*30+1)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_x[vi] * fp78;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp79 + fp81;
LIBINT2_REALTYPE fp141;
fp141 = fp80 * fp54;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
target[((hsi*30+0)*1+lsi)*1] = fp140;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 142 */
}

#ifdef __cplusplus
};
#endif
