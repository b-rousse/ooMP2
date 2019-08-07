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
void CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp32 * fp31;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp0;
target[((hsi*100+99)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp32 * fp30;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp1;
target[((hsi*100+98)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp32 * fp29;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp2;
target[((hsi*100+97)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp32 * fp28;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp3;
target[((hsi*100+96)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp33 * fp31;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp1;
target[((hsi*100+95)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp33 * fp30;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
target[((hsi*100+94)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp33 * fp29;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp3;
target[((hsi*100+93)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp34 * fp31;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
target[((hsi*100+92)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp34 * fp30;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp3;
target[((hsi*100+91)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp35 * fp31;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
target[((hsi*100+90)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp32 * fp27;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp4;
target[((hsi*100+89)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp32 * fp26;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp5;
target[((hsi*100+88)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp32 * fp25;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp6;
target[((hsi*100+87)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp32 * fp24;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp7;
target[((hsi*100+86)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp33 * fp27;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
target[((hsi*100+85)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp33 * fp26;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp6;
target[((hsi*100+84)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp33 * fp25;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp7;
target[((hsi*100+83)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp34 * fp27;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp6;
target[((hsi*100+82)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp34 * fp26;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp7;
target[((hsi*100+81)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp35 * fp27;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp7;
target[((hsi*100+80)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp32 * fp23;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp8;
target[((hsi*100+79)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp32 * fp22;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp9;
target[((hsi*100+78)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp32 * fp21;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp10;
target[((hsi*100+77)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp32 * fp20;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp11;
target[((hsi*100+76)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp33 * fp23;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp9;
target[((hsi*100+75)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp33 * fp22;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp10;
target[((hsi*100+74)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp33 * fp21;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp11;
target[((hsi*100+73)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp34 * fp23;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp10;
target[((hsi*100+72)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp34 * fp22;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp11;
target[((hsi*100+71)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp35 * fp23;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp11;
target[((hsi*100+70)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp32 * fp19;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp12;
target[((hsi*100+69)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp32 * fp18;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp13;
target[((hsi*100+68)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp32 * fp17;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp14;
target[((hsi*100+67)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp32 * fp16;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp15;
target[((hsi*100+66)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp33 * fp19;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp13;
target[((hsi*100+65)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp33 * fp18;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp14;
target[((hsi*100+64)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp33 * fp17;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp15;
target[((hsi*100+63)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp34 * fp19;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp14;
target[((hsi*100+62)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp34 * fp18;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp15;
target[((hsi*100+61)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp35 * fp19;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp15;
target[((hsi*100+60)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp36 * fp31;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp4;
target[((hsi*100+59)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp36 * fp30;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
target[((hsi*100+58)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp36 * fp29;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp6;
target[((hsi*100+57)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp36 * fp28;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp7;
target[((hsi*100+56)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp37 * fp31;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp5;
target[((hsi*100+55)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp37 * fp30;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp6;
target[((hsi*100+54)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp37 * fp29;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
target[((hsi*100+53)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp38 * fp31;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp6;
target[((hsi*100+52)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp38 * fp30;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp7;
target[((hsi*100+51)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp39 * fp31;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp7;
target[((hsi*100+50)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp36 * fp27;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp8;
target[((hsi*100+49)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp36 * fp26;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp9;
target[((hsi*100+48)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp36 * fp25;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp10;
target[((hsi*100+47)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp36 * fp24;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
target[((hsi*100+46)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp37 * fp27;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp9;
target[((hsi*100+45)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp37 * fp26;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp10;
target[((hsi*100+44)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp37 * fp25;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp11;
target[((hsi*100+43)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp38 * fp27;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp10;
target[((hsi*100+42)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp38 * fp26;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp11;
target[((hsi*100+41)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp39 * fp27;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp11;
target[((hsi*100+40)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp36 * fp23;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp12;
target[((hsi*100+39)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp36 * fp22;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp13;
target[((hsi*100+38)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp36 * fp21;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp14;
target[((hsi*100+37)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp36 * fp20;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp15;
target[((hsi*100+36)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp37 * fp23;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp13;
target[((hsi*100+35)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp37 * fp22;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp14;
target[((hsi*100+34)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp37 * fp21;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp15;
target[((hsi*100+33)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp38 * fp23;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp14;
target[((hsi*100+32)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp38 * fp22;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp15;
target[((hsi*100+31)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp39 * fp23;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp15;
target[((hsi*100+30)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp40 * fp31;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp8;
target[((hsi*100+29)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp40 * fp30;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp9;
target[((hsi*100+28)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp40 * fp29;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp10;
target[((hsi*100+27)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp40 * fp28;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp11;
target[((hsi*100+26)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp41 * fp31;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp9;
target[((hsi*100+25)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp41 * fp30;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp10;
target[((hsi*100+24)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp41 * fp29;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp11;
target[((hsi*100+23)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp42 * fp31;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp10;
target[((hsi*100+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp42 * fp30;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp11;
target[((hsi*100+21)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp43 * fp31;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp11;
target[((hsi*100+20)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp40 * fp27;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp12;
target[((hsi*100+19)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp40 * fp26;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp13;
target[((hsi*100+18)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp40 * fp25;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp14;
target[((hsi*100+17)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp40 * fp24;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp15;
target[((hsi*100+16)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp41 * fp27;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp13;
target[((hsi*100+15)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp41 * fp26;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp14;
target[((hsi*100+14)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp41 * fp25;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp15;
target[((hsi*100+13)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp42 * fp27;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp14;
target[((hsi*100+12)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp42 * fp26;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp15;
target[((hsi*100+11)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp43 * fp27;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp15;
target[((hsi*100+10)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp44 * fp31;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp12;
target[((hsi*100+9)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp44 * fp30;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp13;
target[((hsi*100+8)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp44 * fp29;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp14;
target[((hsi*100+7)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp44 * fp28;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp15;
target[((hsi*100+6)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp45 * fp31;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp13;
target[((hsi*100+5)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp45 * fp30;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp14;
target[((hsi*100+4)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp45 * fp29;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp15;
target[((hsi*100+3)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp46 * fp31;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp14;
target[((hsi*100+2)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp46 * fp30;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp15;
target[((hsi*100+1)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*16+15)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp47 * fp31;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp15;
target[((hsi*100+0)*1+lsi)*1] = fp246;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 248 */
}

#ifdef __cplusplus
};
#endif
