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
void _elecpot_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp60);
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp63);
LIBINT2_REALTYPE fp12;
fp12 = fp62 - fp59;
LIBINT2_REALTYPE fp11;
fp11 = fp107 * fp12;
LIBINT2_REALTYPE fp94;
fp94 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp29);
LIBINT2_REALTYPE fp33;
fp33 = inteval->PC_z[vi] * fp28;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->PB_z[vi], fp59, fp33);
LIBINT2_REALTYPE fp31;
fp31 = fp32 + fp93;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PC_z[vi] * fp31;
LIBINT2_REALTYPE fp100;
fp100 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PC_z[vi] * fp59;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->PB_z[vi], fp62, fp37);
LIBINT2_REALTYPE fp35;
fp35 = fp36 + fp99;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(inteval->PB_z[vi], fp35, fp14);
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_y[vi] * fp31;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->PB_y[vi], fp35, fp17);
LIBINT2_REALTYPE fp8;
fp8 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp46);
LIBINT2_REALTYPE fp50;
fp50 = inteval->PC_y[vi] * fp45;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp69);
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->PB_y[vi], fp68, fp50);
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp93;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_z[vi] * fp48;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PC_y[vi] * fp68;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp72);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->PB_y[vi], fp71, fp54);
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp99;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->PB_z[vi], fp52, fp20);
LIBINT2_REALTYPE fp7;
fp7 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp24;
fp24 = fp71 - fp68;
LIBINT2_REALTYPE fp23;
fp23 = fp107 * fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_y[vi] * fp48;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_y[vi], fp52, fp26);
LIBINT2_REALTYPE fp22;
fp22 = fp25 + fp23;
LIBINT2_REALTYPE fp6;
fp6 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_x[vi] * fp31;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->PB_x[vi], fp35, fp40);
LIBINT2_REALTYPE fp5;
fp5 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp84);
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_y[vi] * fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp87);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PB_y[vi], fp86, fp75);
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_y[vi] * fp86;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp90);
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->PB_y[vi], fp89, fp78);
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PB_z[vi], fp77, fp43);
LIBINT2_REALTYPE fp4;
fp4 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_x[vi] * fp48;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PB_x[vi], fp52, fp57);
LIBINT2_REALTYPE fp3;
fp3 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->PC_x[vi] * fp83;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->PB_x[vi], fp86, fp96);
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PC_z[vi] * fp92;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PC_x[vi] * fp86;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->PB_x[vi], fp89, fp102);
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_minus(inteval->PB_z[vi], fp98, fp66);
LIBINT2_REALTYPE fp2;
fp2 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_y[vi] * fp92;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PB_y[vi], fp98, fp81);
LIBINT2_REALTYPE fp1;
fp1 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp106;
fp106 = fp89 - fp86;
LIBINT2_REALTYPE fp105;
fp105 = fp107 * fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_x[vi] * fp92;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_x[vi], fp98, fp109);
LIBINT2_REALTYPE fp104;
fp104 = fp108 + fp105;
LIBINT2_REALTYPE fp0;
fp0 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 111 */
}

#ifdef __cplusplus
};
#endif
