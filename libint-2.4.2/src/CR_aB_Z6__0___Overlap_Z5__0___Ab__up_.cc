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
void CR_aB_Z6__0___Overlap_Z5__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*42+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp232;
fp232 = inteval->PB_z[vi] * target[((hsi*42+0)*1+lsi)*1];
target[((hsi*42+1)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*42+1)*1+lsi)*1], fp229);
target[((hsi*42+2)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp226;
fp226 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*42+2)*1+lsi)*1], fp225);
target[((hsi*42+3)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp222;
fp222 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp221;
fp221 = fp222 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*42+3)*1+lsi)*1], fp221);
target[((hsi*42+4)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp215;
fp215 = inteval->PA_z[vi] * target[((hsi*42+0)*1+lsi)*1];
target[((hsi*42+6)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+1)*1+lsi)*1], fp212);
target[((hsi*42+7)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp209;
fp209 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp209 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+2)*1+lsi)*1], fp208);
target[((hsi*42+8)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp205;
fp205 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp204;
fp204 = fp205 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+3)*1+lsi)*1], fp204);
target[((hsi*42+9)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp201;
fp201 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp200;
fp200 = fp201 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+4)*1+lsi)*1], fp200);
target[((hsi*42+10)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp193;
fp193 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+6)*1+lsi)*1], fp192);
target[((hsi*42+12)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp186 * target[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+7)*1+lsi)*1], fp188);
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
target[((hsi*42+13)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp179;
fp179 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * target[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+8)*1+lsi)*1], fp181);
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
target[((hsi*42+14)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp133;
fp133 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * target[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp172 * target[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+9)*1+lsi)*1], fp174);
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
target[((hsi*42+15)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+15)*1+lsi)*1], fp135);
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*42+21)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp87;
fp87 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * target[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * target[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+10)*1+lsi)*1], fp167);
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
target[((hsi*42+16)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp90;
fp90 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * target[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * target[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+16)*1+lsi)*1], fp128);
LIBINT2_REALTYPE fp124;
fp124 = fp127 + fp125;
target[((hsi*42+22)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+22)*1+lsi)*1], fp89);
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
target[((hsi*42+28)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp140;
fp140 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * target[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+14)*1+lsi)*1], fp142);
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*42+20)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp94;
fp94 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+21)*1+lsi)*1], fp96);
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
target[((hsi*42+27)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+13)*1+lsi)*1], fp149);
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*42+19)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp101;
fp101 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+20)*1+lsi)*1], fp103);
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*42+26)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp154;
fp154 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * target[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+12)*1+lsi)*1], fp153);
target[((hsi*42+18)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+19)*1+lsi)*1], fp110);
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*42+25)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+18)*1+lsi)*1], fp114);
target[((hsi*42+24)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp158;
fp158 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp158 * target[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp217;
fp217 = fp218 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*42+4)*1+lsi)*1], fp217);
target[((hsi*42+5)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * target[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+5)*1+lsi)*1], fp196);
target[((hsi*42+11)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+11)*1+lsi)*1], fp160);
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
target[((hsi*42+17)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp119;
fp119 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * target[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*42+11)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+17)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*42+23)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * target[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*42+17)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+23)*1+lsi)*1], fp82);
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*42+29)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+24)*1+lsi)*1], fp75);
target[((hsi*42+30)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+25)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*42+31)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp62;
fp62 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+26)*1+lsi)*1], fp64);
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*42+32)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp55;
fp55 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+27)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*42+33)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp48;
fp48 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+28)*1+lsi)*1], fp50);
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*42+34)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp41;
fp41 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*42+23)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+29)*1+lsi)*1], fp43);
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
target[((hsi*42+35)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+30)*1+lsi)*1], fp36);
target[((hsi*42+36)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+31)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*42+37)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+32)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*42+38)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+33)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*42+39)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+34)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*42+40)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*42+34)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*42+29)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*42+35)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*42+41)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 233 */
}

#ifdef __cplusplus
};
#endif
