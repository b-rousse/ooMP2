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
void CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp63 * fp62;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp1;
target[((hsi*84+83)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->BO_z[vi], fp3, fp4);
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp63 * fp61;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
target[((hsi*84+82)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp64 * fp62;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp5;
target[((hsi*84+81)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp63 * fp60;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp8;
target[((hsi*84+80)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp11);
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp63 * fp59;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp12;
target[((hsi*84+79)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp64 * fp60;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp12;
target[((hsi*84+78)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp63 * fp58;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp15;
target[((hsi*84+77)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp18);
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp63 * fp57;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp19;
target[((hsi*84+76)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp64 * fp58;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp19;
target[((hsi*84+75)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp63 * fp56;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp22;
target[((hsi*84+74)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp24, fp25);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp63 * fp55;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp26;
target[((hsi*84+73)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp64 * fp56;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp26;
target[((hsi*84+72)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp63 * fp54;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp29;
target[((hsi*84+71)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp32);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp63 * fp53;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp33;
target[((hsi*84+70)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp64 * fp54;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp33;
target[((hsi*84+69)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp63 * fp52;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp36;
target[((hsi*84+68)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp38, fp39);
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp63 * fp51;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp40;
target[((hsi*84+67)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp64 * fp52;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp40;
target[((hsi*84+66)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp63 * fp50;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp43;
target[((hsi*84+65)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp46);
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp63 * fp49;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp47;
target[((hsi*84+64)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp118;
fp118 = fp64 * fp50;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp47;
target[((hsi*84+63)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp65 * fp62;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp8;
target[((hsi*84+62)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp122;
fp122 = fp65 * fp61;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp12;
target[((hsi*84+61)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp66 * fp62;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp12;
target[((hsi*84+60)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp65 * fp60;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp15;
target[((hsi*84+59)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp65 * fp59;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp19;
target[((hsi*84+58)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp66 * fp60;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp19;
target[((hsi*84+57)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp65 * fp58;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp22;
target[((hsi*84+56)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp65 * fp57;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp26;
target[((hsi*84+55)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp66 * fp58;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp26;
target[((hsi*84+54)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp65 * fp56;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp29;
target[((hsi*84+53)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp65 * fp55;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp33;
target[((hsi*84+52)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp66 * fp56;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp33;
target[((hsi*84+51)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp65 * fp54;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp36;
target[((hsi*84+50)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp65 * fp53;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp40;
target[((hsi*84+49)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp66 * fp54;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp40;
target[((hsi*84+48)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp65 * fp52;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp43;
target[((hsi*84+47)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp65 * fp51;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp47;
target[((hsi*84+46)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp154;
fp154 = fp66 * fp52;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp47;
target[((hsi*84+45)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp67 * fp62;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp15;
target[((hsi*84+44)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp67 * fp61;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp19;
target[((hsi*84+43)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp68 * fp62;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp19;
target[((hsi*84+42)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp67 * fp60;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp22;
target[((hsi*84+41)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp67 * fp59;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp26;
target[((hsi*84+40)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp166;
fp166 = fp68 * fp60;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp26;
target[((hsi*84+39)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp67 * fp58;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp29;
target[((hsi*84+38)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp67 * fp57;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp33;
target[((hsi*84+37)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp68 * fp58;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp33;
target[((hsi*84+36)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp67 * fp56;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp36;
target[((hsi*84+35)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp67 * fp55;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp40;
target[((hsi*84+34)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp68 * fp56;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp40;
target[((hsi*84+33)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp67 * fp54;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp43;
target[((hsi*84+32)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp67 * fp53;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp47;
target[((hsi*84+31)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp68 * fp54;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp47;
target[((hsi*84+30)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp69 * fp62;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp22;
target[((hsi*84+29)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp69 * fp61;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp26;
target[((hsi*84+28)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp70 * fp62;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp26;
target[((hsi*84+27)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp69 * fp60;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp29;
target[((hsi*84+26)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp69 * fp59;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp33;
target[((hsi*84+25)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp70 * fp60;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp33;
target[((hsi*84+24)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp198;
fp198 = fp69 * fp58;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp36;
target[((hsi*84+23)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp69 * fp57;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp40;
target[((hsi*84+22)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp202;
fp202 = fp70 * fp58;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp40;
target[((hsi*84+21)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp204;
fp204 = fp69 * fp56;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp43;
target[((hsi*84+20)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp69 * fp55;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp47;
target[((hsi*84+19)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp208;
fp208 = fp70 * fp56;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp47;
target[((hsi*84+18)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp71 * fp62;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp29;
target[((hsi*84+17)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp212;
fp212 = fp71 * fp61;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp33;
target[((hsi*84+16)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp72 * fp62;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp33;
target[((hsi*84+15)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp71 * fp60;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp36;
target[((hsi*84+14)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp71 * fp59;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp40;
target[((hsi*84+13)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp72 * fp60;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp40;
target[((hsi*84+12)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp71 * fp58;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp43;
target[((hsi*84+11)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp224;
fp224 = fp71 * fp57;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp47;
target[((hsi*84+10)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp72 * fp58;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp47;
target[((hsi*84+9)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp73 * fp62;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp36;
target[((hsi*84+8)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp73 * fp61;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp40;
target[((hsi*84+7)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp74 * fp62;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp40;
target[((hsi*84+6)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp73 * fp60;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp43;
target[((hsi*84+5)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp73 * fp59;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp47;
target[((hsi*84+4)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp238;
fp238 = fp74 * fp60;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp47;
target[((hsi*84+3)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp75 * fp62;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp43;
target[((hsi*84+2)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp75 * fp61;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp47;
target[((hsi*84+1)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp76 * fp62;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp47;
target[((hsi*84+0)*1+lsi)*1] = fp243;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 245 */
}

#ifdef __cplusplus
};
#endif
