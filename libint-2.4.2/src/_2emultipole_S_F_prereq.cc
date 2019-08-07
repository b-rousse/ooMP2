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
void _2emultipole_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp127;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp213;
fp213 = 0.0000000000000000e+00 + fp136;
LIBINT2_REALTYPE fp358;
fp358 = fp213 * fp192;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_z[vi] * fp113;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PB_z[vi], fp112, fp110);
LIBINT2_REALTYPE fp134;
fp134 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp134 * fp109;
LIBINT2_REALTYPE fp143;
fp143 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp143 * fp112;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PB_z[vi], fp109, fp107);
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PB_z[vi], fp106, fp104);
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->BO_z[vi], fp165, fp156);
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_z[vi] * fp157;
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_z[vi] * fp156;
LIBINT2_REALTYPE fp130;
fp130 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp130 * fp106;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_z[vi], fp103, fp101);
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp146;
fp146 = fp145 + fp147;
LIBINT2_REALTYPE fp148;
fp148 = fp146 + fp149;
LIBINT2_REALTYPE fp217;
fp217 = fp358 * fp148;
LIBINT2_REALTYPE fp99;
fp99 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+99)*1+lsi)*1]),&(fp99),1);
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_y[vi] * fp127;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp360;
fp360 = fp213 * fp191;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->BO_z[vi], fp166, fp165);
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->BO_z[vi], fp159, fp157);
LIBINT2_REALTYPE fp218;
fp218 = fp360 * fp150;
LIBINT2_REALTYPE fp98;
fp98 = fp218;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+98)*1+lsi)*1]),&(fp98),1);
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + fp112;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->BO_z[vi], fp167, fp166);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BO_z[vi], fp161, fp159);
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp127;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PB_y[vi], fp126, fp124);
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + fp123;
LIBINT2_REALTYPE fp362;
fp362 = fp213 * fp190;
LIBINT2_REALTYPE fp219;
fp219 = fp362 * fp152;
LIBINT2_REALTYPE fp97;
fp97 = fp219;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+97)*1+lsi)*1]),&(fp97),1);
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->BO_z[vi], fp168, fp167);
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BO_z[vi], fp163, fp161);
LIBINT2_REALTYPE fp121;
fp121 = fp143 * fp126;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PB_y[vi], fp123, fp121);
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp364;
fp364 = fp213 * fp189;
LIBINT2_REALTYPE fp220;
fp220 = fp364 * fp154;
LIBINT2_REALTYPE fp96;
fp96 = fp220;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+96)*1+lsi)*1]),&(fp96),1);
LIBINT2_REALTYPE fp137;
fp137 = inteval->PB_x[vi] * fp136;
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + fp137;
LIBINT2_REALTYPE fp366;
fp366 = fp214 * fp192;
LIBINT2_REALTYPE fp221;
fp221 = fp366 * fp150;
LIBINT2_REALTYPE fp95;
fp95 = fp221;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+95)*1+lsi)*1]),&(fp95),1);
LIBINT2_REALTYPE fp368;
fp368 = fp214 * fp191;
LIBINT2_REALTYPE fp222;
fp222 = fp368 * fp152;
LIBINT2_REALTYPE fp94;
fp94 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+94)*1+lsi)*1]),&(fp94),1);
LIBINT2_REALTYPE fp370;
fp370 = fp214 * fp190;
LIBINT2_REALTYPE fp223;
fp223 = fp370 * fp154;
LIBINT2_REALTYPE fp93;
fp93 = fp223;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+93)*1+lsi)*1]),&(fp93),1);
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PB_x[vi], fp137, fp139);
LIBINT2_REALTYPE fp215;
fp215 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp372;
fp372 = fp215 * fp192;
LIBINT2_REALTYPE fp224;
fp224 = fp372 * fp152;
LIBINT2_REALTYPE fp92;
fp92 = fp224;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+92)*1+lsi)*1]),&(fp92),1);
LIBINT2_REALTYPE fp374;
fp374 = fp215 * fp191;
LIBINT2_REALTYPE fp225;
fp225 = fp374 * fp154;
LIBINT2_REALTYPE fp91;
fp91 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+91)*1+lsi)*1]),&(fp91),1);
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp137;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PB_x[vi], fp138, fp142);
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp141;
LIBINT2_REALTYPE fp376;
fp376 = fp216 * fp192;
LIBINT2_REALTYPE fp226;
fp226 = fp376 * fp154;
LIBINT2_REALTYPE fp90;
fp90 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+90)*1+lsi)*1]),&(fp90),1);
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->BO_y[vi], fp192, fp191);
LIBINT2_REALTYPE fp318;
fp318 = fp213 * fp187;
LIBINT2_REALTYPE fp227;
fp227 = fp318 * fp157;
LIBINT2_REALTYPE fp89;
fp89 = fp227;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+89)*1+lsi)*1]),&(fp89),1);
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->BO_y[vi], fp191, fp190);
LIBINT2_REALTYPE fp320;
fp320 = fp213 * fp185;
LIBINT2_REALTYPE fp228;
fp228 = fp320 * fp159;
LIBINT2_REALTYPE fp88;
fp88 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+88)*1+lsi)*1]),&(fp88),1);
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->BO_y[vi], fp190, fp189);
LIBINT2_REALTYPE fp322;
fp322 = fp213 * fp183;
LIBINT2_REALTYPE fp229;
fp229 = fp322 * fp161;
LIBINT2_REALTYPE fp87;
fp87 = fp229;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+87)*1+lsi)*1]),&(fp87),1);
LIBINT2_REALTYPE fp118;
fp118 = fp134 * fp123;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PB_y[vi], fp120, fp118);
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp117;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(inteval->BO_y[vi], fp189, fp180);
LIBINT2_REALTYPE fp324;
fp324 = fp213 * fp181;
LIBINT2_REALTYPE fp230;
fp230 = fp324 * fp163;
LIBINT2_REALTYPE fp86;
fp86 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+86)*1+lsi)*1]),&(fp86),1);
LIBINT2_REALTYPE fp326;
fp326 = fp214 * fp187;
LIBINT2_REALTYPE fp231;
fp231 = fp326 * fp159;
LIBINT2_REALTYPE fp85;
fp85 = fp231;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+85)*1+lsi)*1]),&(fp85),1);
LIBINT2_REALTYPE fp328;
fp328 = fp214 * fp185;
LIBINT2_REALTYPE fp232;
fp232 = fp328 * fp161;
LIBINT2_REALTYPE fp84;
fp84 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+84)*1+lsi)*1]),&(fp84),1);
LIBINT2_REALTYPE fp330;
fp330 = fp214 * fp183;
LIBINT2_REALTYPE fp233;
fp233 = fp330 * fp163;
LIBINT2_REALTYPE fp83;
fp83 = fp233;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+83)*1+lsi)*1]),&(fp83),1);
LIBINT2_REALTYPE fp332;
fp332 = fp215 * fp187;
LIBINT2_REALTYPE fp234;
fp234 = fp332 * fp161;
LIBINT2_REALTYPE fp82;
fp82 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+82)*1+lsi)*1]),&(fp82),1);
LIBINT2_REALTYPE fp334;
fp334 = fp215 * fp185;
LIBINT2_REALTYPE fp235;
fp235 = fp334 * fp163;
LIBINT2_REALTYPE fp81;
fp81 = fp235;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+81)*1+lsi)*1]),&(fp81),1);
LIBINT2_REALTYPE fp336;
fp336 = fp216 * fp187;
LIBINT2_REALTYPE fp236;
fp236 = fp336 * fp163;
LIBINT2_REALTYPE fp80;
fp80 = fp236;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+80)*1+lsi)*1]),&(fp80),1);
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->BO_y[vi], fp187, fp185);
LIBINT2_REALTYPE fp238;
fp238 = fp213 * fp178;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp165;
LIBINT2_REALTYPE fp79;
fp79 = fp237;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+79)*1+lsi)*1]),&(fp79),1);
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->BO_y[vi], fp185, fp183);
LIBINT2_REALTYPE fp240;
fp240 = fp213 * fp176;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp166;
LIBINT2_REALTYPE fp78;
fp78 = fp239;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+78)*1+lsi)*1]),&(fp78),1);
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->BO_y[vi], fp183, fp181);
LIBINT2_REALTYPE fp242;
fp242 = fp213 * fp174;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp167;
LIBINT2_REALTYPE fp77;
fp77 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+77)*1+lsi)*1]),&(fp77),1);
LIBINT2_REALTYPE fp173;
fp173 = inteval->BO_y[vi] * fp181;
LIBINT2_REALTYPE fp171;
fp171 = inteval->BO_y[vi] * fp180;
LIBINT2_REALTYPE fp115;
fp115 = fp130 * fp120;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PB_y[vi], fp117, fp115);
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp170;
fp170 = fp169 + fp171;
LIBINT2_REALTYPE fp172;
fp172 = fp170 + fp173;
LIBINT2_REALTYPE fp244;
fp244 = fp213 * fp172;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp168;
LIBINT2_REALTYPE fp76;
fp76 = fp243;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+76)*1+lsi)*1]),&(fp76),1);
LIBINT2_REALTYPE fp246;
fp246 = fp214 * fp178;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp166;
LIBINT2_REALTYPE fp75;
fp75 = fp245;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+75)*1+lsi)*1]),&(fp75),1);
LIBINT2_REALTYPE fp248;
fp248 = fp214 * fp176;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp167;
LIBINT2_REALTYPE fp74;
fp74 = fp247;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp250;
fp250 = fp214 * fp174;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp168;
LIBINT2_REALTYPE fp73;
fp73 = fp249;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+73)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp252;
fp252 = fp215 * fp178;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp167;
LIBINT2_REALTYPE fp72;
fp72 = fp251;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+72)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp254;
fp254 = fp215 * fp176;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp168;
LIBINT2_REALTYPE fp71;
fp71 = fp253;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp256;
fp256 = fp216 * fp178;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp168;
LIBINT2_REALTYPE fp70;
fp70 = fp255;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->BO_x[vi], fp213, fp214);
LIBINT2_REALTYPE fp338;
fp338 = fp204 * fp192;
LIBINT2_REALTYPE fp257;
fp257 = fp338 * fp157;
LIBINT2_REALTYPE fp69;
fp69 = fp257;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp340;
fp340 = fp204 * fp191;
LIBINT2_REALTYPE fp258;
fp258 = fp340 * fp159;
LIBINT2_REALTYPE fp68;
fp68 = fp258;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp342;
fp342 = fp204 * fp190;
LIBINT2_REALTYPE fp259;
fp259 = fp342 * fp161;
LIBINT2_REALTYPE fp67;
fp67 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp344;
fp344 = fp204 * fp189;
LIBINT2_REALTYPE fp260;
fp260 = fp344 * fp163;
LIBINT2_REALTYPE fp66;
fp66 = fp260;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->BO_x[vi], fp214, fp215);
LIBINT2_REALTYPE fp346;
fp346 = fp206 * fp192;
LIBINT2_REALTYPE fp261;
fp261 = fp346 * fp159;
LIBINT2_REALTYPE fp65;
fp65 = fp261;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp348;
fp348 = fp206 * fp191;
LIBINT2_REALTYPE fp262;
fp262 = fp348 * fp161;
LIBINT2_REALTYPE fp64;
fp64 = fp262;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp350;
fp350 = fp206 * fp190;
LIBINT2_REALTYPE fp263;
fp263 = fp350 * fp163;
LIBINT2_REALTYPE fp63;
fp63 = fp263;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->BO_x[vi], fp215, fp216);
LIBINT2_REALTYPE fp352;
fp352 = fp208 * fp192;
LIBINT2_REALTYPE fp264;
fp264 = fp352 * fp161;
LIBINT2_REALTYPE fp62;
fp62 = fp264;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp354;
fp354 = fp208 * fp191;
LIBINT2_REALTYPE fp265;
fp265 = fp354 * fp163;
LIBINT2_REALTYPE fp61;
fp61 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp138;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PB_x[vi], fp141, fp133);
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + fp132;
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->BO_x[vi], fp216, fp210);
LIBINT2_REALTYPE fp356;
fp356 = fp211 * fp192;
LIBINT2_REALTYPE fp266;
fp266 = fp356 * fp163;
LIBINT2_REALTYPE fp60;
fp60 = fp266;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp268;
fp268 = fp204 * fp187;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp165;
LIBINT2_REALTYPE fp59;
fp59 = fp267;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp270;
fp270 = fp204 * fp185;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp166;
LIBINT2_REALTYPE fp58;
fp58 = fp269;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp272;
fp272 = fp204 * fp183;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp167;
LIBINT2_REALTYPE fp57;
fp57 = fp271;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp274;
fp274 = fp204 * fp181;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp168;
LIBINT2_REALTYPE fp56;
fp56 = fp273;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp276;
fp276 = fp206 * fp187;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp166;
LIBINT2_REALTYPE fp55;
fp55 = fp275;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp278;
fp278 = fp206 * fp185;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp167;
LIBINT2_REALTYPE fp54;
fp54 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp280;
fp280 = fp206 * fp183;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp168;
LIBINT2_REALTYPE fp53;
fp53 = fp279;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp282;
fp282 = fp208 * fp187;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp167;
LIBINT2_REALTYPE fp52;
fp52 = fp281;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp284;
fp284 = fp208 * fp185;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp168;
LIBINT2_REALTYPE fp51;
fp51 = fp283;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp286;
fp286 = fp211 * fp187;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp168;
LIBINT2_REALTYPE fp50;
fp50 = fp285;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->BO_x[vi], fp204, fp206);
LIBINT2_REALTYPE fp288;
fp288 = fp193 * fp192;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp165;
LIBINT2_REALTYPE fp49;
fp49 = fp287;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp290;
fp290 = fp193 * fp191;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp166;
LIBINT2_REALTYPE fp48;
fp48 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp292;
fp292 = fp193 * fp190;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp167;
LIBINT2_REALTYPE fp47;
fp47 = fp291;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp294;
fp294 = fp193 * fp189;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp168;
LIBINT2_REALTYPE fp46;
fp46 = fp293;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->BO_x[vi], fp206, fp208);
LIBINT2_REALTYPE fp296;
fp296 = fp195 * fp192;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp166;
LIBINT2_REALTYPE fp45;
fp45 = fp295;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp298;
fp298 = fp195 * fp191;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp167;
LIBINT2_REALTYPE fp44;
fp44 = fp297;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp300;
fp300 = fp195 * fp190;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp168;
LIBINT2_REALTYPE fp43;
fp43 = fp299;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->BO_x[vi], fp208, fp211);
LIBINT2_REALTYPE fp302;
fp302 = fp197 * fp192;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp167;
LIBINT2_REALTYPE fp42;
fp42 = fp301;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp304;
fp304 = fp197 * fp191;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp168;
LIBINT2_REALTYPE fp41;
fp41 = fp303;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp203;
fp203 = inteval->BO_x[vi] * fp211;
LIBINT2_REALTYPE fp201;
fp201 = inteval->BO_x[vi] * fp210;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp141;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PB_x[vi], fp132, fp129);
LIBINT2_REALTYPE fp199;
fp199 = 0.0000000000000000e+00 + fp128;
LIBINT2_REALTYPE fp200;
fp200 = fp199 + fp201;
LIBINT2_REALTYPE fp202;
fp202 = fp200 + fp203;
LIBINT2_REALTYPE fp306;
fp306 = fp202 * fp192;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp168;
LIBINT2_REALTYPE fp40;
fp40 = fp305;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp307;
fp307 = fp358 * fp157;
LIBINT2_REALTYPE fp39;
fp39 = fp307;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp308;
fp308 = fp360 * fp159;
LIBINT2_REALTYPE fp38;
fp38 = fp308;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp309;
fp309 = fp362 * fp161;
LIBINT2_REALTYPE fp37;
fp37 = fp309;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp310;
fp310 = fp364 * fp163;
LIBINT2_REALTYPE fp36;
fp36 = fp310;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp311;
fp311 = fp366 * fp159;
LIBINT2_REALTYPE fp35;
fp35 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp312;
fp312 = fp368 * fp161;
LIBINT2_REALTYPE fp34;
fp34 = fp312;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp313;
fp313 = fp370 * fp163;
LIBINT2_REALTYPE fp33;
fp33 = fp313;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp314;
fp314 = fp372 * fp161;
LIBINT2_REALTYPE fp32;
fp32 = fp314;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp315;
fp315 = fp374 * fp163;
LIBINT2_REALTYPE fp31;
fp31 = fp315;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp316;
fp316 = fp376 * fp163;
LIBINT2_REALTYPE fp30;
fp30 = fp316;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp165;
LIBINT2_REALTYPE fp29;
fp29 = fp317;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp166;
LIBINT2_REALTYPE fp28;
fp28 = fp319;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp167;
LIBINT2_REALTYPE fp27;
fp27 = fp321;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp168;
LIBINT2_REALTYPE fp26;
fp26 = fp323;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp166;
LIBINT2_REALTYPE fp25;
fp25 = fp325;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp167;
LIBINT2_REALTYPE fp24;
fp24 = fp327;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp168;
LIBINT2_REALTYPE fp23;
fp23 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp167;
LIBINT2_REALTYPE fp22;
fp22 = fp331;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp168;
LIBINT2_REALTYPE fp21;
fp21 = fp333;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp168;
LIBINT2_REALTYPE fp20;
fp20 = fp335;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp165;
LIBINT2_REALTYPE fp19;
fp19 = fp337;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp166;
LIBINT2_REALTYPE fp18;
fp18 = fp339;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp167;
LIBINT2_REALTYPE fp17;
fp17 = fp341;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp168;
LIBINT2_REALTYPE fp16;
fp16 = fp343;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp166;
LIBINT2_REALTYPE fp15;
fp15 = fp345;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp167;
LIBINT2_REALTYPE fp14;
fp14 = fp347;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp168;
LIBINT2_REALTYPE fp13;
fp13 = fp349;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp167;
LIBINT2_REALTYPE fp12;
fp12 = fp351;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp168;
LIBINT2_REALTYPE fp11;
fp11 = fp353;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp168;
LIBINT2_REALTYPE fp10;
fp10 = fp355;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp165;
LIBINT2_REALTYPE fp9;
fp9 = fp357;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp166;
LIBINT2_REALTYPE fp8;
fp8 = fp359;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp167;
LIBINT2_REALTYPE fp7;
fp7 = fp361;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp168;
LIBINT2_REALTYPE fp6;
fp6 = fp363;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp166;
LIBINT2_REALTYPE fp5;
fp5 = fp365;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp167;
LIBINT2_REALTYPE fp4;
fp4 = fp367;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp168;
LIBINT2_REALTYPE fp3;
fp3 = fp369;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp167;
LIBINT2_REALTYPE fp2;
fp2 = fp371;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp168;
LIBINT2_REALTYPE fp1;
fp1 = fp373;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp168;
LIBINT2_REALTYPE fp0;
fp0 = fp375;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 377 */
}

#ifdef __cplusplus
};
#endif
