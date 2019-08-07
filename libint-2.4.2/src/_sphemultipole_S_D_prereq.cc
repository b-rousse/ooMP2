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
void _sphemultipole_S_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp343;
fp343 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp346;
fp346 = 0.0000000000000000e+00 + fp343;
LIBINT2_REALTYPE fp344;
fp344 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp347;
fp347 = 0.0000000000000000e+00 + fp344;
LIBINT2_REALTYPE fp345;
fp345 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp348;
fp348 = 0.0000000000000000e+00 + fp345;
LIBINT2_REALTYPE fp350;
fp350 = fp348 * fp347;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp346;
LIBINT2_REALTYPE fp336;
fp336 = 1.0000000000000000e+00 * fp349;
LIBINT2_REALTYPE fp320;
fp320 = inteval->PO_y[vi] * fp336;
LIBINT2_REALTYPE fp319;
fp319 = -5.0000000000000000e-01 * fp320;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PO_y[vi] * fp319;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PO_x[vi] * fp336;
LIBINT2_REALTYPE fp256;
fp256 = -5.0000000000000000e-01 * fp257;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->PO_x[vi], fp256, fp72);
LIBINT2_REALTYPE fp70;
fp70 = -2.5000000000000000e-01 * fp71;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(1.0000000000000000e+00, fp70, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_z[vi] * fp70;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PB_z[vi], fp62, fp55);
LIBINT2_REALTYPE fp53;
fp53 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp237;
fp237 = 5.0000000000000000e-01 * fp319;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp237;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PB_y[vi], fp70, fp65);
LIBINT2_REALTYPE fp57;
fp57 = inteval->PB_z[vi] * fp64;
LIBINT2_REALTYPE fp52;
fp52 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp312;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_plus(-5.0000000000000000e-01, fp336, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp310;
fp310 = inteval->oo2z[vi] * fp311;
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(inteval->PB_y[vi], fp319, fp310);
LIBINT2_REALTYPE fp131;
fp131 = 5.0000000000000000e-01 * fp309;
LIBINT2_REALTYPE fp60;
fp60 = fp81 + fp131;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PB_y[vi], fp64, fp59);
LIBINT2_REALTYPE fp51;
fp51 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp159;
fp159 = 5.0000000000000000e-01 * fp256;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 - fp159;
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PB_x[vi], fp70, fp75);
LIBINT2_REALTYPE fp63;
fp63 = inteval->PB_z[vi] * fp74;
LIBINT2_REALTYPE fp50;
fp50 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp321;
fp321 = inteval->PB_x[vi] * fp319;
LIBINT2_REALTYPE fp242;
fp242 = 5.0000000000000000e-01 * fp321;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp242;
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PB_y[vi], fp74, fp68);
LIBINT2_REALTYPE fp49;
fp49 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp261;
fp261 = 5.0000000000000000e-01 * fp336;
LIBINT2_REALTYPE fp260;
fp260 = 0.0000000000000000e+00 - fp261;
LIBINT2_REALTYPE fp259;
fp259 = inteval->oo2z[vi] * fp260;
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(inteval->PB_x[vi], fp256, fp259);
LIBINT2_REALTYPE fp165;
fp165 = 5.0000000000000000e-01 * fp258;
LIBINT2_REALTYPE fp80;
fp80 = fp81 - fp165;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PB_x[vi], fp74, fp79);
LIBINT2_REALTYPE fp48;
fp48 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp202;
fp202 = 3.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp202 * fp256;
LIBINT2_REALTYPE fp105;
fp105 = 3.3333333333333331e-01 * fp106;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(1.0000000000000000e+00, fp105, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp252;
fp252 = inteval->PB_z[vi] * fp256;
LIBINT2_REALTYPE fp86;
fp86 = fp116 + fp252;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp256;
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PB_z[vi], fp105, fp96);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_z[vi], fp95, fp85);
LIBINT2_REALTYPE fp47;
fp47 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp254;
fp254 = inteval->PB_y[vi] * fp256;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp254;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PB_y[vi] * fp105;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PB_z[vi], fp103, fp89);
LIBINT2_REALTYPE fp46;
fp46 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PB_y[vi], fp103, fp93);
LIBINT2_REALTYPE fp45;
fp45 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + fp258;
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp292;
fp292 = 1.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp336;
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * fp291;
LIBINT2_REALTYPE fp110;
fp110 = 5.0000000000000000e-01 * fp290;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 - fp110;
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PB_x[vi], fp105, fp108);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PB_z[vi], fp107, fp100);
LIBINT2_REALTYPE fp44;
fp44 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_y[vi] * fp107;
LIBINT2_REALTYPE fp43;
fp43 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp293;
fp293 = inteval->PB_x[vi] * fp290;
LIBINT2_REALTYPE fp115;
fp115 = 5.0000000000000000e-01 * fp293;
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PB_x[vi], fp107, fp113);
LIBINT2_REALTYPE fp42;
fp42 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp153;
fp153 = inteval->PO2[vi] * fp336;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(fp202, fp290, fp153);
LIBINT2_REALTYPE fp151;
fp151 = 2.5000000000000000e-01 * fp152;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(1.0000000000000000e+00, fp151, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp282;
fp282 = 0.0000000000000000e+00 + fp336;
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->PB_z[vi], fp290, fp281);
LIBINT2_REALTYPE fp121;
fp121 = fp166 + fp280;
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + fp290;
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PB_z[vi], fp151, fp134);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PB_z[vi], fp133, fp120);
LIBINT2_REALTYPE fp41;
fp41 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp288;
fp288 = inteval->PB_y[vi] * fp290;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp288;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp143;
fp143 = fp144 + fp237;
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PB_y[vi], fp151, fp142);
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PB_z[vi], fp141, fp124);
LIBINT2_REALTYPE fp40;
fp40 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp130;
fp130 = fp166 + fp131;
LIBINT2_REALTYPE fp129;
fp129 = fp130 + fp131;
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PB_y[vi], fp141, fp128);
LIBINT2_REALTYPE fp39;
fp39 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp293;
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp223;
fp223 = -5.0000000000000000e-01 * fp256;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp157;
fp157 = fp158 - fp223;
LIBINT2_REALTYPE fp156;
fp156 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->PB_x[vi], fp151, fp156);
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PB_z[vi], fp155, fp138);
LIBINT2_REALTYPE fp38;
fp38 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp148;
fp148 = fp149 + fp242;
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PB_y[vi], fp155, fp147);
LIBINT2_REALTYPE fp37;
fp37 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp228;
fp228 = -5.0000000000000000e-01 * fp258;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp163;
fp163 = fp164 - fp228;
LIBINT2_REALTYPE fp162;
fp162 = inteval->oo2z[vi] * fp163;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->PB_x[vi], fp155, fp162);
LIBINT2_REALTYPE fp36;
fp36 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp319;
LIBINT2_REALTYPE fp200;
fp200 = 3.3333333333333331e-01 * fp201;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(1.0000000000000000e+00, fp200, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp307;
fp307 = inteval->PB_z[vi] * fp319;
LIBINT2_REALTYPE fp171;
fp171 = fp206 + fp307;
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + fp319;
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PB_z[vi], fp200, fp183);
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->PB_z[vi], fp182, fp170);
LIBINT2_REALTYPE fp35;
fp35 = fp169;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + fp309;
LIBINT2_REALTYPE fp174;
fp174 = inteval->oo2z[vi] * fp175;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(-5.0000000000000000e-01, fp290, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->PB_y[vi], fp200, fp191);
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->PB_z[vi], fp190, fp174);
LIBINT2_REALTYPE fp34;
fp34 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(-5.0000000000000000e-01, fp288, fp206);
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_y[vi], fp190, fp178);
LIBINT2_REALTYPE fp33;
fp33 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + fp321;
LIBINT2_REALTYPE fp187;
fp187 = inteval->oo2z[vi] * fp188;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PB_x[vi] * fp200;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->PB_z[vi], fp203, fp187);
LIBINT2_REALTYPE fp32;
fp32 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(-5.0000000000000000e-01, fp293, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PB_y[vi], fp203, fp196);
LIBINT2_REALTYPE fp31;
fp31 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PB_x[vi], fp203, fp205);
LIBINT2_REALTYPE fp30;
fp30 = fp204;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp232;
fp232 = inteval->PO_x[vi] * fp319;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PO_y[vi], fp256, fp232);
LIBINT2_REALTYPE fp230;
fp230 = -2.5000000000000000e-01 * fp231;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(1.0000000000000000e+00, fp230, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp210;
fp210 = inteval->oo2z[vi] * fp243;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PB_z[vi] * fp230;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(inteval->PB_z[vi], fp218, fp210);
LIBINT2_REALTYPE fp29;
fp29 = fp209;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp223;
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->PB_y[vi], fp230, fp221);
LIBINT2_REALTYPE fp212;
fp212 = inteval->PB_z[vi] * fp220;
LIBINT2_REALTYPE fp28;
fp28 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(-5.0000000000000000e-01, fp254, fp243);
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(inteval->PB_y[vi], fp220, fp214);
LIBINT2_REALTYPE fp27;
fp27 = fp213;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 - fp237;
LIBINT2_REALTYPE fp235;
fp235 = inteval->oo2z[vi] * fp236;
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->PB_x[vi], fp230, fp235);
LIBINT2_REALTYPE fp219;
fp219 = inteval->PB_z[vi] * fp234;
LIBINT2_REALTYPE fp26;
fp26 = fp219;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp227;
fp227 = 0.0000000000000000e+00 + fp228;
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PB_y[vi], fp234, fp226);
LIBINT2_REALTYPE fp25;
fp25 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp241;
fp241 = fp243 - fp242;
LIBINT2_REALTYPE fp240;
fp240 = inteval->oo2z[vi] * fp241;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->PB_x[vi], fp234, fp240);
LIBINT2_REALTYPE fp24;
fp24 = fp239;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_plus(1.0000000000000000e+00, fp256, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp250;
fp250 = inteval->oo2z[vi] * fp267;
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PB_z[vi], fp252, fp250);
LIBINT2_REALTYPE fp23;
fp23 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp248;
fp248 = inteval->PB_z[vi] * fp254;
LIBINT2_REALTYPE fp22;
fp22 = fp248;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp249;
fp249 = libint2::fma_plus(inteval->PB_y[vi], fp254, fp250);
LIBINT2_REALTYPE fp21;
fp21 = fp249;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp253;
fp253 = inteval->PB_z[vi] * fp258;
LIBINT2_REALTYPE fp20;
fp20 = fp253;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp255;
fp255 = inteval->PB_y[vi] * fp258;
LIBINT2_REALTYPE fp19;
fp19 = fp255;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp337;
fp337 = inteval->PB_x[vi] * fp336;
LIBINT2_REALTYPE fp266;
fp266 = 5.0000000000000000e-01 * fp337;
LIBINT2_REALTYPE fp265;
fp265 = fp267 - fp266;
LIBINT2_REALTYPE fp264;
fp264 = inteval->oo2z[vi] * fp265;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->PB_x[vi], fp258, fp264);
LIBINT2_REALTYPE fp18;
fp18 = fp263;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp332;
fp332 = inteval->PB_z[vi] * fp336;
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(1.0000000000000000e+00, fp290, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp272;
fp272 = fp296 + fp332;
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(inteval->PB_z[vi], fp280, fp271);
LIBINT2_REALTYPE fp17;
fp17 = fp270;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp334;
fp334 = inteval->PB_y[vi] * fp336;
LIBINT2_REALTYPE fp276;
fp276 = 0.0000000000000000e+00 + fp334;
LIBINT2_REALTYPE fp275;
fp275 = inteval->oo2z[vi] * fp276;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_plus(inteval->PB_z[vi], fp288, fp275);
LIBINT2_REALTYPE fp16;
fp16 = fp274;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->PB_y[vi], fp288, fp295);
LIBINT2_REALTYPE fp15;
fp15 = fp278;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp286;
fp286 = 0.0000000000000000e+00 + fp337;
LIBINT2_REALTYPE fp285;
fp285 = inteval->oo2z[vi] * fp286;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->PB_z[vi], fp293, fp285);
LIBINT2_REALTYPE fp14;
fp14 = fp284;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp289;
fp289 = inteval->PB_y[vi] * fp293;
LIBINT2_REALTYPE fp13;
fp13 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp298;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->PB_x[vi], fp293, fp295);
LIBINT2_REALTYPE fp12;
fp12 = fp294;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(1.0000000000000000e+00, fp319, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp323;
fp323 = inteval->oo2z[vi] * fp324;
LIBINT2_REALTYPE fp300;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(inteval->PB_z[vi], fp307, fp323);
LIBINT2_REALTYPE fp11;
fp11 = fp299;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp301;
fp301 = inteval->PB_z[vi] * fp309;
LIBINT2_REALTYPE fp10;
fp10 = fp301;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp304;
fp304 = libint2::fma_plus(-5.0000000000000000e-01, fp334, fp324);
LIBINT2_REALTYPE fp303;
fp303 = inteval->oo2z[vi] * fp304;
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_plus(inteval->PB_y[vi], fp309, fp303);
LIBINT2_REALTYPE fp9;
fp9 = fp302;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp308;
fp308 = inteval->PB_z[vi] * fp321;
LIBINT2_REALTYPE fp8;
fp8 = fp308;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp316;
fp316 = libint2::fma_plus(-5.0000000000000000e-01, fp337, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp315;
fp315 = inteval->oo2z[vi] * fp316;
LIBINT2_REALTYPE fp318;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(inteval->PB_y[vi], fp321, fp315);
LIBINT2_REALTYPE fp7;
fp7 = fp314;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp326;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(inteval->PB_x[vi], fp321, fp323);
LIBINT2_REALTYPE fp6;
fp6 = fp322;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp341;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(1.0000000000000000e+00, fp336, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp339;
fp339 = inteval->oo2z[vi] * fp340;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->PB_z[vi], fp332, fp339);
LIBINT2_REALTYPE fp5;
fp5 = fp327;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp329;
fp329 = inteval->PB_z[vi] * fp334;
LIBINT2_REALTYPE fp4;
fp4 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp331;
LIBINT2_REALTYPE fp330;
fp330 = libint2::fma_plus(inteval->PB_y[vi], fp334, fp339);
LIBINT2_REALTYPE fp3;
fp3 = fp330;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp333;
fp333 = inteval->PB_z[vi] * fp337;
LIBINT2_REALTYPE fp2;
fp2 = fp333;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp335;
fp335 = inteval->PB_y[vi] * fp337;
LIBINT2_REALTYPE fp1;
fp1 = fp335;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp342;
LIBINT2_REALTYPE fp338;
fp338 = libint2::fma_plus(inteval->PB_x[vi], fp337, fp339);
LIBINT2_REALTYPE fp0;
fp0 = fp338;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 351 */
}

#ifdef __cplusplus
};
#endif
