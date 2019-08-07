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
void _kinetic_F_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp417;
fp417 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp494;
fp494 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp415;
fp415 = fp494 * fp417;
LIBINT2_REALTYPE fp412;
fp412 = inteval->PA_z[vi] * fp417;
LIBINT2_REALTYPE fp403;
LIBINT2_REALTYPE fp402;
fp402 = libint2::fma_plus(inteval->PA_z[vi], fp412, fp415);
LIBINT2_REALTYPE fp31;
fp31 = 1.5000000000000000e+00 * fp402;
LIBINT2_REALTYPE fp136;
fp136 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp502;
fp502 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp395;
fp395 = fp502 * fp402;
LIBINT2_REALTYPE fp498;
fp498 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp405;
fp405 = fp498 * fp412;
LIBINT2_REALTYPE fp393;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_plus(inteval->PA_z[vi], fp402, fp405);
LIBINT2_REALTYPE fp383;
LIBINT2_REALTYPE fp382;
fp382 = libint2::fma_plus(inteval->PA_z[vi], fp392, fp395);
LIBINT2_REALTYPE fp33;
fp33 = fp136 * fp382;
LIBINT2_REALTYPE fp133;
fp133 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp413;
fp413 = inteval->PB_z[vi] * fp417;
LIBINT2_REALTYPE fp416;
LIBINT2_REALTYPE fp414;
fp414 = libint2::fma_plus(inteval->PA_z[vi], fp413, fp415);
LIBINT2_REALTYPE fp398;
fp398 = fp498 * fp414;
LIBINT2_REALTYPE fp408;
LIBINT2_REALTYPE fp407;
fp407 = libint2::fma_plus(inteval->PB_z[vi], fp413, fp415);
LIBINT2_REALTYPE fp400;
fp400 = fp494 * fp407;
LIBINT2_REALTYPE fp410;
fp410 = fp498 * fp413;
LIBINT2_REALTYPE fp411;
LIBINT2_REALTYPE fp409;
fp409 = libint2::fma_plus(inteval->PA_z[vi], fp407, fp410);
LIBINT2_REALTYPE fp401;
LIBINT2_REALTYPE fp399;
fp399 = libint2::fma_plus(inteval->PA_z[vi], fp409, fp400);
LIBINT2_REALTYPE fp397;
fp397 = fp399 + fp398;
LIBINT2_REALTYPE fp35;
fp35 = fp133 * fp397;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp396;
LIBINT2_REALTYPE fp394;
fp394 = libint2::fma_plus(inteval->PB_z[vi], fp392, fp395);
LIBINT2_REALTYPE fp378;
fp378 = fp498 * fp394;
LIBINT2_REALTYPE fp380;
fp380 = fp502 * fp397;
LIBINT2_REALTYPE fp406;
LIBINT2_REALTYPE fp404;
fp404 = libint2::fma_plus(inteval->PB_z[vi], fp402, fp405);
LIBINT2_REALTYPE fp388;
fp388 = fp498 * fp404;
LIBINT2_REALTYPE fp390;
fp390 = fp498 * fp409;
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp389;
fp389 = libint2::fma_plus(inteval->PA_z[vi], fp397, fp390);
LIBINT2_REALTYPE fp387;
fp387 = fp389 + fp388;
LIBINT2_REALTYPE fp381;
LIBINT2_REALTYPE fp379;
fp379 = libint2::fma_plus(inteval->PA_z[vi], fp387, fp380);
LIBINT2_REALTYPE fp377;
fp377 = fp379 + fp378;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(fp135, fp377, fp35);
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp458;
fp458 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp486;
fp486 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp486 * fp458;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp30;
LIBINT2_REALTYPE fp456;
fp456 = fp494 * fp458;
LIBINT2_REALTYPE fp454;
fp454 = inteval->PB_y[vi] * fp458;
LIBINT2_REALTYPE fp457;
LIBINT2_REALTYPE fp455;
fp455 = libint2::fma_plus(inteval->PA_y[vi], fp454, fp456);
LIBINT2_REALTYPE fp97;
fp97 = fp135 * fp455;
LIBINT2_REALTYPE fp142;
fp142 = fp486 * fp97;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp394;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp486;
LIBINT2_REALTYPE fp459;
fp459 = inteval->PB_x[vi] * fp486;
LIBINT2_REALTYPE fp495;
LIBINT2_REALTYPE fp492;
fp492 = libint2::fma_plus(inteval->PA_x[vi], fp459, fp493);
LIBINT2_REALTYPE fp98;
fp98 = fp135 * fp492;
LIBINT2_REALTYPE fp144;
fp144 = fp98 * fp458;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(fp144, fp394, fp141);
LIBINT2_REALTYPE fp137;
fp137 = fp140 + fp138;
LIBINT2_REALTYPE fp29;
fp29 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp38;
fp38 = fp133 * fp404;
LIBINT2_REALTYPE fp467;
fp467 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp385;
fp385 = fp467 * fp392;
LIBINT2_REALTYPE fp386;
LIBINT2_REALTYPE fp384;
fp384 = libint2::fma_plus(inteval->PB_z[vi], fp382, fp385);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(fp135, fp384, fp38);
LIBINT2_REALTYPE fp147;
fp147 = fp486 * fp454;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp37;
LIBINT2_REALTYPE fp453;
fp453 = inteval->PA_y[vi] * fp458;
LIBINT2_REALTYPE fp95;
fp95 = fp136 * fp453;
LIBINT2_REALTYPE fp451;
fp451 = fp498 * fp454;
LIBINT2_REALTYPE fp449;
LIBINT2_REALTYPE fp448;
fp448 = libint2::fma_plus(inteval->PB_y[vi], fp454, fp456);
LIBINT2_REALTYPE fp452;
LIBINT2_REALTYPE fp450;
fp450 = libint2::fma_plus(inteval->PA_y[vi], fp448, fp451);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_minus(fp135, fp450, fp95);
LIBINT2_REALTYPE fp150;
fp150 = fp486 * fp94;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp392;
LIBINT2_REALTYPE fp152;
fp152 = fp98 * fp454;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(fp152, fp392, fp149);
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
LIBINT2_REALTYPE fp28;
fp28 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp155;
fp155 = fp459 * fp458;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp37;
LIBINT2_REALTYPE fp158;
fp158 = fp459 * fp97;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp392;
LIBINT2_REALTYPE fp487;
fp487 = inteval->PA_x[vi] * fp486;
LIBINT2_REALTYPE fp100;
fp100 = fp136 * fp487;
LIBINT2_REALTYPE fp463;
fp463 = fp498 * fp459;
LIBINT2_REALTYPE fp461;
LIBINT2_REALTYPE fp460;
fp460 = libint2::fma_plus(inteval->PB_x[vi], fp459, fp493);
LIBINT2_REALTYPE fp464;
LIBINT2_REALTYPE fp462;
fp462 = libint2::fma_plus(inteval->PA_x[vi], fp460, fp463);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(fp135, fp462, fp100);
LIBINT2_REALTYPE fp160;
fp160 = fp99 * fp458;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(fp160, fp392, fp157);
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
LIBINT2_REALTYPE fp27;
fp27 = fp153;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * fp412;
LIBINT2_REALTYPE fp43;
fp43 = fp136 * fp392;
LIBINT2_REALTYPE fp122;
fp122 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp122 * fp409;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(fp135, fp387, fp45);
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp163;
fp163 = fp486 * fp453;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp40;
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp111 * fp454;
LIBINT2_REALTYPE fp446;
fp446 = fp498 * fp453;
LIBINT2_REALTYPE fp444;
LIBINT2_REALTYPE fp443;
fp443 = libint2::fma_plus(inteval->PA_y[vi], fp453, fp456);
LIBINT2_REALTYPE fp447;
LIBINT2_REALTYPE fp445;
fp445 = libint2::fma_plus(inteval->PB_y[vi], fp443, fp446);
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(fp135, fp445, fp92);
LIBINT2_REALTYPE fp166;
fp166 = fp486 * fp91;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp404;
LIBINT2_REALTYPE fp168;
fp168 = fp98 * fp453;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(fp168, fp404, fp165);
LIBINT2_REALTYPE fp161;
fp161 = fp164 + fp162;
LIBINT2_REALTYPE fp26;
fp26 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp48;
fp48 = fp122 * fp414;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(fp135, fp394, fp48);
LIBINT2_REALTYPE fp171;
fp171 = fp486 * fp455;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp47;
LIBINT2_REALTYPE fp85;
fp85 = 5.0000000000000000e-01 * fp458;
LIBINT2_REALTYPE fp87;
fp87 = fp136 * fp443;
LIBINT2_REALTYPE fp89;
fp89 = fp111 * fp448;
LIBINT2_REALTYPE fp439;
fp439 = fp498 * fp455;
LIBINT2_REALTYPE fp441;
fp441 = fp494 * fp448;
LIBINT2_REALTYPE fp442;
LIBINT2_REALTYPE fp440;
fp440 = libint2::fma_plus(inteval->PA_y[vi], fp450, fp441);
LIBINT2_REALTYPE fp438;
fp438 = fp440 + fp439;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_minus(fp135, fp438, fp89);
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp174;
fp174 = fp486 * fp84;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp402;
LIBINT2_REALTYPE fp176;
fp176 = fp98 * fp455;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(fp176, fp402, fp173);
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
LIBINT2_REALTYPE fp25;
fp25 = fp169;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp179;
fp179 = fp459 * fp453;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp47;
LIBINT2_REALTYPE fp182;
fp182 = fp459 * fp91;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp402;
LIBINT2_REALTYPE fp184;
fp184 = fp99 * fp453;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(fp184, fp402, fp181);
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
LIBINT2_REALTYPE fp24;
fp24 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * fp417;
LIBINT2_REALTYPE fp53;
fp53 = fp136 * fp402;
LIBINT2_REALTYPE fp55;
fp55 = fp111 * fp407;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(fp135, fp397, fp55);
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp187;
fp187 = fp486 * fp443;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp50;
LIBINT2_REALTYPE fp82;
fp82 = fp122 * fp455;
LIBINT2_REALTYPE fp436;
fp436 = fp502 * fp443;
LIBINT2_REALTYPE fp434;
LIBINT2_REALTYPE fp433;
fp433 = libint2::fma_plus(inteval->PA_y[vi], fp443, fp446);
LIBINT2_REALTYPE fp437;
LIBINT2_REALTYPE fp435;
fp435 = libint2::fma_plus(inteval->PB_y[vi], fp433, fp436);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(fp135, fp435, fp82);
LIBINT2_REALTYPE fp190;
fp190 = fp486 * fp81;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp414;
LIBINT2_REALTYPE fp192;
fp192 = fp98 * fp443;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(fp192, fp414, fp189);
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
LIBINT2_REALTYPE fp23;
fp23 = fp185;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp58;
fp58 = fp111 * fp413;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(fp135, fp404, fp58);
LIBINT2_REALTYPE fp195;
fp195 = fp486 * fp445;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp57;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * fp453;
LIBINT2_REALTYPE fp77;
fp77 = fp136 * fp433;
LIBINT2_REALTYPE fp79;
fp79 = fp122 * fp450;
LIBINT2_REALTYPE fp429;
fp429 = fp498 * fp445;
LIBINT2_REALTYPE fp431;
fp431 = fp498 * fp450;
LIBINT2_REALTYPE fp432;
LIBINT2_REALTYPE fp430;
fp430 = libint2::fma_plus(inteval->PA_y[vi], fp438, fp431);
LIBINT2_REALTYPE fp428;
fp428 = fp430 + fp429;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_minus(fp135, fp428, fp79);
LIBINT2_REALTYPE fp76;
fp76 = fp78 - fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp198;
fp198 = fp486 * fp74;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp412;
LIBINT2_REALTYPE fp200;
fp200 = fp98 * fp445;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(fp200, fp412, fp197);
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
LIBINT2_REALTYPE fp22;
fp22 = fp193;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp203;
fp203 = fp459 * fp443;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp57;
LIBINT2_REALTYPE fp206;
fp206 = fp459 * fp81;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp412;
LIBINT2_REALTYPE fp208;
fp208 = fp99 * fp443;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(fp208, fp412, fp205);
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
LIBINT2_REALTYPE fp21;
fp21 = fp201;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp61;
fp61 = fp136 * fp412;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(fp135, fp409, fp61);
LIBINT2_REALTYPE fp211;
fp211 = fp486 * fp433;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp60;
LIBINT2_REALTYPE fp72;
fp72 = fp133 * fp445;
LIBINT2_REALTYPE fp426;
fp426 = fp467 * fp433;
LIBINT2_REALTYPE fp424;
LIBINT2_REALTYPE fp423;
fp423 = libint2::fma_plus(inteval->PA_y[vi], fp433, fp436);
LIBINT2_REALTYPE fp427;
LIBINT2_REALTYPE fp425;
fp425 = libint2::fma_plus(inteval->PB_y[vi], fp423, fp426);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(fp135, fp425, fp72);
LIBINT2_REALTYPE fp214;
fp214 = fp486 * fp71;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp413;
LIBINT2_REALTYPE fp216;
fp216 = fp98 * fp433;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(fp216, fp413, fp213);
LIBINT2_REALTYPE fp209;
fp209 = fp212 + fp210;
LIBINT2_REALTYPE fp20;
fp20 = fp209;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp63;
fp63 = fp135 * fp414;
LIBINT2_REALTYPE fp219;
fp219 = fp486 * fp435;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp63;
LIBINT2_REALTYPE fp65;
fp65 = 1.5000000000000000e+00 * fp443;
LIBINT2_REALTYPE fp67;
fp67 = fp136 * fp423;
LIBINT2_REALTYPE fp69;
fp69 = fp133 * fp438;
LIBINT2_REALTYPE fp419;
fp419 = fp498 * fp435;
LIBINT2_REALTYPE fp421;
fp421 = fp502 * fp438;
LIBINT2_REALTYPE fp422;
LIBINT2_REALTYPE fp420;
fp420 = libint2::fma_plus(inteval->PA_y[vi], fp428, fp421);
LIBINT2_REALTYPE fp418;
fp418 = fp420 + fp419;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(fp135, fp418, fp69);
LIBINT2_REALTYPE fp66;
fp66 = fp68 - fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp222;
fp222 = fp486 * fp64;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp417;
LIBINT2_REALTYPE fp224;
fp224 = fp98 * fp435;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(fp224, fp417, fp221);
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
LIBINT2_REALTYPE fp19;
fp19 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp227;
fp227 = fp459 * fp433;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp63;
LIBINT2_REALTYPE fp230;
fp230 = fp459 * fp71;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp417;
LIBINT2_REALTYPE fp232;
fp232 = fp99 * fp433;
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(fp232, fp417, fp229);
LIBINT2_REALTYPE fp225;
fp225 = fp228 + fp226;
LIBINT2_REALTYPE fp18;
fp18 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp235;
fp235 = fp487 * fp458;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp40;
LIBINT2_REALTYPE fp238;
fp238 = fp487 * fp97;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp404;
LIBINT2_REALTYPE fp103;
fp103 = fp111 * fp459;
LIBINT2_REALTYPE fp497;
fp497 = fp498 * fp487;
LIBINT2_REALTYPE fp491;
LIBINT2_REALTYPE fp490;
fp490 = libint2::fma_plus(inteval->PA_x[vi], fp487, fp493);
LIBINT2_REALTYPE fp499;
LIBINT2_REALTYPE fp496;
fp496 = libint2::fma_plus(inteval->PB_x[vi], fp490, fp497);
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(fp135, fp496, fp103);
LIBINT2_REALTYPE fp240;
fp240 = fp102 * fp458;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(fp240, fp404, fp237);
LIBINT2_REALTYPE fp233;
fp233 = fp236 + fp234;
LIBINT2_REALTYPE fp17;
fp17 = fp233;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp243;
fp243 = fp487 * fp454;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp47;
LIBINT2_REALTYPE fp246;
fp246 = fp487 * fp94;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp402;
LIBINT2_REALTYPE fp248;
fp248 = fp102 * fp454;
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_plus(fp248, fp402, fp245);
LIBINT2_REALTYPE fp241;
fp241 = fp244 + fp242;
LIBINT2_REALTYPE fp16;
fp16 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp251;
fp251 = fp492 * fp458;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp47;
LIBINT2_REALTYPE fp254;
fp254 = fp492 * fp97;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp402;
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e-01 * fp486;
LIBINT2_REALTYPE fp108;
fp108 = fp136 * fp490;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp460;
LIBINT2_REALTYPE fp477;
fp477 = fp498 * fp492;
LIBINT2_REALTYPE fp479;
fp479 = fp494 * fp460;
LIBINT2_REALTYPE fp480;
LIBINT2_REALTYPE fp478;
fp478 = libint2::fma_plus(inteval->PA_x[vi], fp462, fp479);
LIBINT2_REALTYPE fp476;
fp476 = fp478 + fp477;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(fp135, fp476, fp110);
LIBINT2_REALTYPE fp107;
fp107 = fp109 - fp108;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp256;
fp256 = fp105 * fp458;
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(fp256, fp402, fp253);
LIBINT2_REALTYPE fp249;
fp249 = fp252 + fp250;
LIBINT2_REALTYPE fp15;
fp15 = fp249;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp259;
fp259 = fp487 * fp453;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp50;
LIBINT2_REALTYPE fp262;
fp262 = fp487 * fp91;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp414;
LIBINT2_REALTYPE fp264;
fp264 = fp102 * fp453;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(fp264, fp414, fp261);
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
LIBINT2_REALTYPE fp14;
fp14 = fp257;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp267;
fp267 = fp487 * fp455;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp57;
LIBINT2_REALTYPE fp270;
fp270 = fp487 * fp84;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp412;
LIBINT2_REALTYPE fp272;
fp272 = fp102 * fp455;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(fp272, fp412, fp269);
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
LIBINT2_REALTYPE fp13;
fp13 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp275;
fp275 = fp492 * fp453;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp57;
LIBINT2_REALTYPE fp278;
fp278 = fp492 * fp91;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp412;
LIBINT2_REALTYPE fp280;
fp280 = fp105 * fp453;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(fp280, fp412, fp277);
LIBINT2_REALTYPE fp273;
fp273 = fp276 + fp274;
LIBINT2_REALTYPE fp12;
fp12 = fp273;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp283;
fp283 = fp487 * fp443;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp60;
LIBINT2_REALTYPE fp286;
fp286 = fp487 * fp81;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp413;
LIBINT2_REALTYPE fp288;
fp288 = fp102 * fp443;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(fp288, fp413, fp285);
LIBINT2_REALTYPE fp281;
fp281 = fp284 + fp282;
LIBINT2_REALTYPE fp11;
fp11 = fp281;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp291;
fp291 = fp487 * fp445;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp63;
LIBINT2_REALTYPE fp294;
fp294 = fp487 * fp74;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp417;
LIBINT2_REALTYPE fp296;
fp296 = fp102 * fp445;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(fp296, fp417, fp293);
LIBINT2_REALTYPE fp289;
fp289 = fp292 + fp290;
LIBINT2_REALTYPE fp10;
fp10 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp299;
fp299 = fp492 * fp443;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp63;
LIBINT2_REALTYPE fp302;
fp302 = fp492 * fp81;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp417;
LIBINT2_REALTYPE fp304;
fp304 = fp105 * fp443;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(fp304, fp417, fp301);
LIBINT2_REALTYPE fp297;
fp297 = fp300 + fp298;
LIBINT2_REALTYPE fp9;
fp9 = fp297;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp307;
fp307 = fp490 * fp458;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp50;
LIBINT2_REALTYPE fp310;
fp310 = fp490 * fp97;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp414;
LIBINT2_REALTYPE fp114;
fp114 = fp122 * fp492;
LIBINT2_REALTYPE fp501;
fp501 = fp502 * fp490;
LIBINT2_REALTYPE fp489;
LIBINT2_REALTYPE fp488;
fp488 = libint2::fma_plus(inteval->PA_x[vi], fp490, fp497);
LIBINT2_REALTYPE fp503;
LIBINT2_REALTYPE fp500;
fp500 = libint2::fma_plus(inteval->PB_x[vi], fp488, fp501);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(fp135, fp500, fp114);
LIBINT2_REALTYPE fp312;
fp312 = fp113 * fp458;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(fp312, fp414, fp309);
LIBINT2_REALTYPE fp305;
fp305 = fp308 + fp306;
LIBINT2_REALTYPE fp8;
fp8 = fp305;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp315;
fp315 = fp490 * fp454;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp57;
LIBINT2_REALTYPE fp318;
fp318 = fp490 * fp94;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp412;
LIBINT2_REALTYPE fp320;
fp320 = fp113 * fp454;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp316;
fp316 = libint2::fma_plus(fp320, fp412, fp317);
LIBINT2_REALTYPE fp313;
fp313 = fp316 + fp314;
LIBINT2_REALTYPE fp7;
fp7 = fp313;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp323;
fp323 = fp496 * fp458;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp57;
LIBINT2_REALTYPE fp326;
fp326 = fp496 * fp97;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp412;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * fp487;
LIBINT2_REALTYPE fp119;
fp119 = fp136 * fp488;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp462;
LIBINT2_REALTYPE fp470;
fp470 = fp498 * fp496;
LIBINT2_REALTYPE fp472;
fp472 = fp498 * fp462;
LIBINT2_REALTYPE fp473;
LIBINT2_REALTYPE fp471;
fp471 = libint2::fma_plus(inteval->PA_x[vi], fp476, fp472);
LIBINT2_REALTYPE fp469;
fp469 = fp471 + fp470;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(fp135, fp469, fp121);
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp328;
fp328 = fp116 * fp458;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(fp328, fp412, fp325);
LIBINT2_REALTYPE fp321;
fp321 = fp324 + fp322;
LIBINT2_REALTYPE fp6;
fp6 = fp321;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp331;
fp331 = fp490 * fp453;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp60;
LIBINT2_REALTYPE fp334;
fp334 = fp490 * fp91;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp413;
LIBINT2_REALTYPE fp336;
fp336 = fp113 * fp453;
LIBINT2_REALTYPE fp335;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(fp336, fp413, fp333);
LIBINT2_REALTYPE fp329;
fp329 = fp332 + fp330;
LIBINT2_REALTYPE fp5;
fp5 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp339;
fp339 = fp490 * fp455;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp63;
LIBINT2_REALTYPE fp342;
fp342 = fp490 * fp84;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp417;
LIBINT2_REALTYPE fp344;
fp344 = fp113 * fp455;
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(fp344, fp417, fp341);
LIBINT2_REALTYPE fp337;
fp337 = fp340 + fp338;
LIBINT2_REALTYPE fp4;
fp4 = fp337;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp347;
fp347 = fp496 * fp453;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp63;
LIBINT2_REALTYPE fp350;
fp350 = fp496 * fp91;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp417;
LIBINT2_REALTYPE fp352;
fp352 = fp116 * fp453;
LIBINT2_REALTYPE fp351;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(fp352, fp417, fp349);
LIBINT2_REALTYPE fp345;
fp345 = fp348 + fp346;
LIBINT2_REALTYPE fp3;
fp3 = fp345;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp355;
fp355 = fp488 * fp458;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp60;
LIBINT2_REALTYPE fp358;
fp358 = fp488 * fp97;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp413;
LIBINT2_REALTYPE fp125;
fp125 = fp133 * fp496;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp488;
LIBINT2_REALTYPE fp475;
LIBINT2_REALTYPE fp474;
fp474 = libint2::fma_plus(inteval->PA_x[vi], fp488, fp501);
LIBINT2_REALTYPE fp468;
LIBINT2_REALTYPE fp465;
fp465 = libint2::fma_plus(inteval->PB_x[vi], fp474, fp466);
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(fp135, fp465, fp125);
LIBINT2_REALTYPE fp360;
fp360 = fp124 * fp458;
LIBINT2_REALTYPE fp359;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(fp360, fp413, fp357);
LIBINT2_REALTYPE fp353;
fp353 = fp356 + fp354;
LIBINT2_REALTYPE fp2;
fp2 = fp353;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp363;
fp363 = fp488 * fp454;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp63;
LIBINT2_REALTYPE fp366;
fp366 = fp488 * fp94;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp417;
LIBINT2_REALTYPE fp368;
fp368 = fp124 * fp454;
LIBINT2_REALTYPE fp367;
LIBINT2_REALTYPE fp364;
fp364 = libint2::fma_plus(fp368, fp417, fp365);
LIBINT2_REALTYPE fp361;
fp361 = fp364 + fp362;
LIBINT2_REALTYPE fp1;
fp1 = fp361;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp371;
fp371 = fp500 * fp458;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp63;
LIBINT2_REALTYPE fp374;
fp374 = fp500 * fp97;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp417;
LIBINT2_REALTYPE fp128;
fp128 = 1.5000000000000000e+00 * fp490;
LIBINT2_REALTYPE fp130;
fp130 = fp136 * fp474;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp476;
LIBINT2_REALTYPE fp482;
fp482 = fp498 * fp500;
LIBINT2_REALTYPE fp484;
fp484 = fp502 * fp476;
LIBINT2_REALTYPE fp485;
LIBINT2_REALTYPE fp483;
fp483 = libint2::fma_plus(inteval->PA_x[vi], fp469, fp484);
LIBINT2_REALTYPE fp481;
fp481 = fp483 + fp482;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(fp135, fp481, fp132);
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp376;
fp376 = fp127 * fp458;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_plus(fp376, fp417, fp373);
LIBINT2_REALTYPE fp369;
fp369 = fp372 + fp370;
LIBINT2_REALTYPE fp0;
fp0 = fp369;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 504 */
}

#ifdef __cplusplus
};
#endif
