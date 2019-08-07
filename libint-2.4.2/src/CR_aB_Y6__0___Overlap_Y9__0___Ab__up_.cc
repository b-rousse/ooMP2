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
void CR_aB_Y6__0___Overlap_Y9__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*70+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp404;
fp404 = inteval->PB_y[vi] * target[((hsi*70+0)*1+lsi)*1];
target[((hsi*70+1)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp402;
fp402 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp401;
fp401 = fp402 * target[((hsi*70+0)*1+lsi)*1];
LIBINT2_REALTYPE fp403;
LIBINT2_REALTYPE fp400;
fp400 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+1)*1+lsi)*1], fp401);
target[((hsi*70+2)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp398;
fp398 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp397;
fp397 = fp398 * target[((hsi*70+1)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
LIBINT2_REALTYPE fp396;
fp396 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+2)*1+lsi)*1], fp397);
target[((hsi*70+3)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp394;
fp394 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp393;
fp393 = fp394 * target[((hsi*70+2)*1+lsi)*1];
LIBINT2_REALTYPE fp395;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+3)*1+lsi)*1], fp393);
target[((hsi*70+4)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp390;
fp390 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp389;
fp389 = fp390 * target[((hsi*70+3)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp388;
fp388 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+4)*1+lsi)*1], fp389);
target[((hsi*70+5)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp386;
fp386 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp385;
fp385 = fp386 * target[((hsi*70+4)*1+lsi)*1];
LIBINT2_REALTYPE fp387;
LIBINT2_REALTYPE fp384;
fp384 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+5)*1+lsi)*1], fp385);
target[((hsi*70+6)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp382;
fp382 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp381;
fp381 = fp382 * target[((hsi*70+5)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
LIBINT2_REALTYPE fp380;
fp380 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+6)*1+lsi)*1], fp381);
target[((hsi*70+7)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp378;
fp378 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp377;
fp377 = fp378 * target[((hsi*70+6)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
LIBINT2_REALTYPE fp376;
fp376 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+7)*1+lsi)*1], fp377);
target[((hsi*70+8)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp371;
fp371 = inteval->PA_y[vi] * target[((hsi*70+0)*1+lsi)*1];
target[((hsi*70+10)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp369;
fp369 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp368;
fp368 = fp369 * target[((hsi*70+0)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
LIBINT2_REALTYPE fp367;
fp367 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+1)*1+lsi)*1], fp368);
target[((hsi*70+11)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp365;
fp365 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp364;
fp364 = fp365 * target[((hsi*70+1)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
LIBINT2_REALTYPE fp363;
fp363 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+2)*1+lsi)*1], fp364);
target[((hsi*70+12)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp361;
fp361 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp360;
fp360 = fp361 * target[((hsi*70+2)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
LIBINT2_REALTYPE fp359;
fp359 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+3)*1+lsi)*1], fp360);
target[((hsi*70+13)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp357;
fp357 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp356;
fp356 = fp357 * target[((hsi*70+3)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
LIBINT2_REALTYPE fp355;
fp355 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+4)*1+lsi)*1], fp356);
target[((hsi*70+14)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp353;
fp353 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp352;
fp352 = fp353 * target[((hsi*70+4)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp351;
fp351 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+5)*1+lsi)*1], fp352);
target[((hsi*70+15)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp349;
fp349 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp348;
fp348 = fp349 * target[((hsi*70+5)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp347;
fp347 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+6)*1+lsi)*1], fp348);
target[((hsi*70+16)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp345;
fp345 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp344;
fp344 = fp345 * target[((hsi*70+6)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp343;
fp343 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+7)*1+lsi)*1], fp344);
target[((hsi*70+17)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp341;
fp341 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp340;
fp340 = fp341 * target[((hsi*70+7)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+8)*1+lsi)*1], fp340);
target[((hsi*70+18)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp333;
fp333 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp332;
fp332 = fp333 * target[((hsi*70+0)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+10)*1+lsi)*1], fp332);
target[((hsi*70+20)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp326;
fp326 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp325;
fp325 = fp326 * target[((hsi*70+10)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp328;
fp328 = fp329 * target[((hsi*70+1)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+11)*1+lsi)*1], fp328);
LIBINT2_REALTYPE fp324;
fp324 = fp327 + fp325;
target[((hsi*70+21)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp319;
fp319 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp318;
fp318 = fp319 * target[((hsi*70+11)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * target[((hsi*70+2)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+12)*1+lsi)*1], fp321);
LIBINT2_REALTYPE fp317;
fp317 = fp320 + fp318;
target[((hsi*70+22)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp291;
fp291 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp290;
fp290 = fp291 * target[((hsi*70+15)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp293;
fp293 = fp294 * target[((hsi*70+6)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+16)*1+lsi)*1], fp293);
LIBINT2_REALTYPE fp289;
fp289 = fp292 + fp290;
target[((hsi*70+26)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp217;
fp217 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * target[((hsi*70+26)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp219;
fp219 = fp220 * target[((hsi*70+17)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp283;
fp283 = fp284 * target[((hsi*70+16)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * target[((hsi*70+7)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+17)*1+lsi)*1], fp286);
LIBINT2_REALTYPE fp282;
fp282 = fp285 + fp283;
target[((hsi*70+27)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+27)*1+lsi)*1], fp219);
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
target[((hsi*70+37)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp143;
fp143 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*70+37)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp276;
fp276 = fp277 * target[((hsi*70+17)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp279;
fp279 = fp280 * target[((hsi*70+8)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+18)*1+lsi)*1], fp279);
LIBINT2_REALTYPE fp275;
fp275 = fp278 + fp276;
target[((hsi*70+28)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp146;
fp146 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * target[((hsi*70+28)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * target[((hsi*70+27)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * target[((hsi*70+18)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+28)*1+lsi)*1], fp212);
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
target[((hsi*70+38)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+38)*1+lsi)*1], fp145);
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
target[((hsi*70+48)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp298;
fp298 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp298 * target[((hsi*70+14)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp300;
fp300 = fp301 * target[((hsi*70+5)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+15)*1+lsi)*1], fp300);
LIBINT2_REALTYPE fp296;
fp296 = fp299 + fp297;
target[((hsi*70+25)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp224;
fp224 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * target[((hsi*70+25)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp227 * target[((hsi*70+16)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+26)*1+lsi)*1], fp226);
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
target[((hsi*70+36)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp150;
fp150 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*70+36)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * target[((hsi*70+27)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+37)*1+lsi)*1], fp152);
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
target[((hsi*70+47)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp305;
fp305 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp304;
fp304 = fp305 * target[((hsi*70+13)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp307;
fp307 = fp308 * target[((hsi*70+4)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+14)*1+lsi)*1], fp307);
LIBINT2_REALTYPE fp303;
fp303 = fp306 + fp304;
target[((hsi*70+24)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp231;
fp231 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp230;
fp230 = fp231 * target[((hsi*70+24)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * target[((hsi*70+15)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+25)*1+lsi)*1], fp233);
LIBINT2_REALTYPE fp229;
fp229 = fp232 + fp230;
target[((hsi*70+35)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp157;
fp157 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * target[((hsi*70+35)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * target[((hsi*70+26)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+36)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*70+46)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp312;
fp312 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp311;
fp311 = fp312 * target[((hsi*70+12)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp314;
fp314 = fp315 * target[((hsi*70+3)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+13)*1+lsi)*1], fp314);
LIBINT2_REALTYPE fp310;
fp310 = fp313 + fp311;
target[((hsi*70+23)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp238;
fp238 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * target[((hsi*70+23)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp241 * target[((hsi*70+14)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+24)*1+lsi)*1], fp240);
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
target[((hsi*70+34)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp164;
fp164 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*70+34)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp167 * target[((hsi*70+25)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+35)*1+lsi)*1], fp166);
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*70+45)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp245;
fp245 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * target[((hsi*70+22)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp248 * target[((hsi*70+13)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+23)*1+lsi)*1], fp247);
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
target[((hsi*70+33)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp171;
fp171 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*70+33)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * target[((hsi*70+24)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+34)*1+lsi)*1], fp173);
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
target[((hsi*70+44)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp252;
fp252 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * target[((hsi*70+21)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * target[((hsi*70+12)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+22)*1+lsi)*1], fp254);
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
target[((hsi*70+32)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp178;
fp178 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * target[((hsi*70+32)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * target[((hsi*70+23)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+33)*1+lsi)*1], fp180);
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
target[((hsi*70+43)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp259;
fp259 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp258;
fp258 = fp259 * target[((hsi*70+20)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * target[((hsi*70+11)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+21)*1+lsi)*1], fp261);
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
target[((hsi*70+31)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp185;
fp185 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * target[((hsi*70+31)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * target[((hsi*70+22)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+32)*1+lsi)*1], fp187);
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
target[((hsi*70+42)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp266;
fp266 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * target[((hsi*70+10)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+20)*1+lsi)*1], fp265);
target[((hsi*70+30)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * target[((hsi*70+30)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp194;
fp194 = fp195 * target[((hsi*70+21)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+31)*1+lsi)*1], fp194);
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
target[((hsi*70+41)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp199;
fp199 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * target[((hsi*70+20)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+30)*1+lsi)*1], fp198);
target[((hsi*70+40)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp270;
fp270 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp269;
fp269 = fp270 * target[((hsi*70+18)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp373;
fp373 = fp374 * target[((hsi*70+7)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*70+8)*1+lsi)*1], fp373);
target[((hsi*70+9)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp273;
fp273 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * target[((hsi*70+9)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp336;
fp336 = fp337 * target[((hsi*70+8)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+9)*1+lsi)*1], fp336);
target[((hsi*70+19)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+19)*1+lsi)*1], fp272);
LIBINT2_REALTYPE fp268;
fp268 = fp271 + fp269;
target[((hsi*70+29)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp203;
fp203 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp203 * target[((hsi*70+28)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * target[((hsi*70+19)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+29)*1+lsi)*1], fp205);
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
target[((hsi*70+39)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp136;
fp136 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*70+38)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * target[((hsi*70+29)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+39)*1+lsi)*1], fp138);
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*70+49)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*70+30)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+40)*1+lsi)*1], fp131);
target[((hsi*70+50)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*70+40)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*70+31)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+41)*1+lsi)*1], fp127);
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*70+51)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*70+41)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * target[((hsi*70+32)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+42)*1+lsi)*1], fp120);
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*70+52)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*70+42)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * target[((hsi*70+33)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+43)*1+lsi)*1], fp113);
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*70+53)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*70+43)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * target[((hsi*70+34)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+44)*1+lsi)*1], fp106);
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*70+54)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp97;
fp97 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*70+44)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * target[((hsi*70+35)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+45)*1+lsi)*1], fp99);
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*70+55)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*70+45)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * target[((hsi*70+36)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+46)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*70+56)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp83;
fp83 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*70+46)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*70+37)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+47)*1+lsi)*1], fp85);
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*70+57)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp76;
fp76 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*70+47)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*70+38)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+48)*1+lsi)*1], fp78);
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*70+58)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp69;
fp69 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*70+48)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*70+39)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+49)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*70+59)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*70+40)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+50)*1+lsi)*1], fp64);
target[((hsi*70+60)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*70+50)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*70+41)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+51)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*70+61)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*70+51)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*70+42)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+52)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*70+62)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*70+52)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*70+43)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+53)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*70+63)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*70+53)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*70+44)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+54)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*70+64)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*70+54)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*70+45)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+55)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*70+65)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*70+55)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*70+46)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+56)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*70+66)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*70+56)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*70+47)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+57)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*70+67)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*70+57)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*70+48)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+58)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*70+68)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*70+58)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*70+49)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*70+59)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*70+69)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 405 */
}

#ifdef __cplusplus
};
#endif
