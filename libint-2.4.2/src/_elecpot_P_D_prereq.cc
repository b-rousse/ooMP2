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
void _elecpot_P_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp78;
fp78 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp100);
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp109);
LIBINT2_REALTYPE fp18;
fp18 = fp108 - fp99;
LIBINT2_REALTYPE fp17;
fp17 = fp78 * fp18;
LIBINT2_REALTYPE fp71;
fp71 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp35);
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_z[vi] * fp34;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->PB_z[vi], fp99, fp39);
LIBINT2_REALTYPE fp37;
fp37 = fp38 + fp70;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_z[vi] * fp37;
LIBINT2_REALTYPE fp95;
fp95 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_z[vi] * fp99;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PB_z[vi], fp108, fp84);
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp94;
LIBINT2_REALTYPE fp5;
fp5 = fp82;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->PB_z[vi], fp5, fp20);
LIBINT2_REALTYPE fp16;
fp16 = fp19 + fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_y[vi] * fp37;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->PB_y[vi], fp5, fp23);
LIBINT2_REALTYPE fp14;
fp14 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp48);
LIBINT2_REALTYPE fp52;
fp52 = inteval->PC_y[vi] * fp47;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp103);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->PB_y[vi], fp102, fp52);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp70;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * fp50;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_y[vi] * fp102;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp112);
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->PB_y[vi], fp111, fp88);
LIBINT2_REALTYPE fp86;
fp86 = fp87 + fp94;
LIBINT2_REALTYPE fp4;
fp4 = fp86;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_z[vi], fp4, fp26);
LIBINT2_REALTYPE fp13;
fp13 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp30;
fp30 = fp111 - fp102;
LIBINT2_REALTYPE fp29;
fp29 = fp78 * fp30;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_y[vi] * fp50;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->PB_y[vi], fp4, fp32);
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
LIBINT2_REALTYPE fp12;
fp12 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->PC_x[vi] * fp37;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_minus(inteval->PB_x[vi], fp5, fp42);
LIBINT2_REALTYPE fp11;
fp11 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp67);
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_y[vi] * fp66;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp106);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->PB_y[vi], fp105, fp61);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_z[vi] * fp60;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_y[vi] * fp105;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp115);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PB_y[vi], fp114, fp91);
LIBINT2_REALTYPE fp3;
fp3 = fp90;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->PB_z[vi], fp3, fp45);
LIBINT2_REALTYPE fp10;
fp10 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp55;
fp55 = inteval->PC_x[vi] * fp50;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->PB_x[vi], fp4, fp55);
LIBINT2_REALTYPE fp9;
fp9 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->PC_x[vi] * fp66;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->PB_x[vi], fp105, fp73);
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_z[vi] * fp69;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_x[vi] * fp105;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->PB_x[vi], fp114, fp97);
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
LIBINT2_REALTYPE fp2;
fp2 = fp93;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->PB_z[vi], fp2, fp58);
LIBINT2_REALTYPE fp8;
fp8 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_y[vi] * fp69;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->PB_y[vi], fp2, fp64);
LIBINT2_REALTYPE fp7;
fp7 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp77;
fp77 = fp114 - fp105;
LIBINT2_REALTYPE fp76;
fp76 = fp78 * fp77;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PC_x[vi] * fp69;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->PB_x[vi], fp2, fp80);
LIBINT2_REALTYPE fp75;
fp75 = fp79 + fp76;
LIBINT2_REALTYPE fp6;
fp6 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->PC_z[vi] * fp102;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->PB_z[vi], fp111, fp118);
LIBINT2_REALTYPE fp1;
fp1 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp1),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_z[vi] * fp105;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->PB_z[vi], fp114, fp121);
LIBINT2_REALTYPE fp0;
fp0 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp0),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp2),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 123 */
}

#ifdef __cplusplus
};
#endif
