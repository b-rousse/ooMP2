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
void CR_aB_X5__0___Overlap_X9__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*60+0)*1+lsi)*1] = inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp337;
fp337 = inteval->PB_x[vi] * target[((hsi*60+0)*1+lsi)*1];
target[((hsi*60+1)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp335;
fp335 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp334;
fp334 = fp335 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
LIBINT2_REALTYPE fp333;
fp333 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+1)*1+lsi)*1], fp334);
target[((hsi*60+2)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp331;
fp331 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp330;
fp330 = fp331 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+2)*1+lsi)*1], fp330);
target[((hsi*60+3)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp327;
fp327 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp326;
fp326 = fp327 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp325;
fp325 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+3)*1+lsi)*1], fp326);
target[((hsi*60+4)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp323;
fp323 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp322;
fp322 = fp323 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+4)*1+lsi)*1], fp322);
target[((hsi*60+5)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp319;
fp319 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp318;
fp318 = fp319 * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+5)*1+lsi)*1], fp318);
target[((hsi*60+6)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp315;
fp315 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp314;
fp314 = fp315 * target[((hsi*60+5)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+6)*1+lsi)*1], fp314);
target[((hsi*60+7)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp311;
fp311 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp310;
fp310 = fp311 * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+7)*1+lsi)*1], fp310);
target[((hsi*60+8)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp304;
fp304 = inteval->PA_x[vi] * target[((hsi*60+0)*1+lsi)*1];
target[((hsi*60+10)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp302;
fp302 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp301;
fp301 = fp302 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+1)*1+lsi)*1], fp301);
target[((hsi*60+11)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp298;
fp298 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp298 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+2)*1+lsi)*1], fp297);
target[((hsi*60+12)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp294;
fp294 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp293;
fp293 = fp294 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+3)*1+lsi)*1], fp293);
target[((hsi*60+13)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp290;
fp290 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp289;
fp289 = fp290 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+4)*1+lsi)*1], fp289);
target[((hsi*60+14)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp286;
fp286 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp285;
fp285 = fp286 * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+5)*1+lsi)*1], fp285);
target[((hsi*60+15)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp282;
fp282 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * target[((hsi*60+5)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+6)*1+lsi)*1], fp281);
target[((hsi*60+16)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp278;
fp278 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+7)*1+lsi)*1], fp277);
target[((hsi*60+17)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp274;
fp274 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp273;
fp273 = fp274 * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+8)*1+lsi)*1], fp273);
target[((hsi*60+18)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp266;
fp266 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * target[((hsi*60+0)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+10)*1+lsi)*1], fp265);
target[((hsi*60+20)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp259;
fp259 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp258;
fp258 = fp259 * target[((hsi*60+10)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp261;
fp261 = fp262 * target[((hsi*60+1)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+11)*1+lsi)*1], fp261);
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
target[((hsi*60+21)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp252;
fp252 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * target[((hsi*60+11)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * target[((hsi*60+2)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+12)*1+lsi)*1], fp254);
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
target[((hsi*60+22)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp217;
fp217 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * target[((hsi*60+16)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp219;
fp219 = fp220 * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+17)*1+lsi)*1], fp219);
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
target[((hsi*60+27)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp143;
fp143 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*60+27)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * target[((hsi*60+18)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * target[((hsi*60+17)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * target[((hsi*60+8)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+18)*1+lsi)*1], fp212);
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
target[((hsi*60+28)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+28)*1+lsi)*1], fp145);
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
target[((hsi*60+38)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp224;
fp224 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * target[((hsi*60+15)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp227 * target[((hsi*60+6)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+16)*1+lsi)*1], fp226);
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
target[((hsi*60+26)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp150;
fp150 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*60+26)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * target[((hsi*60+17)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+27)*1+lsi)*1], fp152);
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
target[((hsi*60+37)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp231;
fp231 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp230;
fp230 = fp231 * target[((hsi*60+14)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * target[((hsi*60+5)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+15)*1+lsi)*1], fp233);
LIBINT2_REALTYPE fp229;
fp229 = fp232 + fp230;
target[((hsi*60+25)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp157;
fp157 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * target[((hsi*60+25)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * target[((hsi*60+16)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+26)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*60+36)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp238;
fp238 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * target[((hsi*60+13)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp241 * target[((hsi*60+4)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+14)*1+lsi)*1], fp240);
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
target[((hsi*60+24)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp164;
fp164 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*60+24)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp167 * target[((hsi*60+15)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+25)*1+lsi)*1], fp166);
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*60+35)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp245;
fp245 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * target[((hsi*60+12)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp248 * target[((hsi*60+3)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+13)*1+lsi)*1], fp247);
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
target[((hsi*60+23)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp171;
fp171 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*60+23)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * target[((hsi*60+14)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+24)*1+lsi)*1], fp173);
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
target[((hsi*60+34)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp178;
fp178 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * target[((hsi*60+22)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * target[((hsi*60+13)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+23)*1+lsi)*1], fp180);
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
target[((hsi*60+33)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp185;
fp185 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * target[((hsi*60+21)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * target[((hsi*60+12)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+22)*1+lsi)*1], fp187);
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
target[((hsi*60+32)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * target[((hsi*60+20)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp194;
fp194 = fp195 * target[((hsi*60+11)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+21)*1+lsi)*1], fp194);
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
target[((hsi*60+31)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp199;
fp199 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp199 * target[((hsi*60+10)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+20)*1+lsi)*1], fp198);
target[((hsi*60+30)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp203;
fp203 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp202;
fp202 = fp203 * target[((hsi*60+18)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp306;
fp306 = fp307 * target[((hsi*60+7)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*60+8)*1+lsi)*1], fp306);
target[((hsi*60+9)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * target[((hsi*60+9)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp269;
fp269 = fp270 * target[((hsi*60+8)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+9)*1+lsi)*1], fp269);
target[((hsi*60+19)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+19)*1+lsi)*1], fp205);
LIBINT2_REALTYPE fp201;
fp201 = fp204 + fp202;
target[((hsi*60+29)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp136;
fp136 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*60+28)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * target[((hsi*60+19)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+29)*1+lsi)*1], fp138);
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*60+39)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*60+20)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+30)*1+lsi)*1], fp131);
target[((hsi*60+40)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*60+21)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+31)*1+lsi)*1], fp127);
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*60+41)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * target[((hsi*60+22)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+32)*1+lsi)*1], fp120);
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*60+42)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * target[((hsi*60+23)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+33)*1+lsi)*1], fp113);
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*60+43)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * target[((hsi*60+24)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+34)*1+lsi)*1], fp106);
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*60+44)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp97;
fp97 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * target[((hsi*60+25)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+35)*1+lsi)*1], fp99);
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*60+45)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*60+35)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * target[((hsi*60+26)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+36)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*60+46)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp83;
fp83 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*60+36)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*60+27)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+37)*1+lsi)*1], fp85);
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*60+47)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp76;
fp76 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*60+37)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*60+28)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+38)*1+lsi)*1], fp78);
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*60+48)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp69;
fp69 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*60+38)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*60+29)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+39)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*60+49)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*60+30)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+40)*1+lsi)*1], fp64);
target[((hsi*60+50)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*60+40)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*60+31)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+41)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*60+51)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*60+41)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*60+32)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+42)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*60+52)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*60+42)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*60+33)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+43)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*60+53)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*60+43)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*60+34)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+44)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*60+54)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*60+44)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*60+35)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+45)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*60+55)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*60+45)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*60+36)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+46)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*60+56)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*60+46)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*60+37)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+47)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*60+57)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*60+47)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*60+38)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+48)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*60+58)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*60+48)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*60+39)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*60+49)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 338 */
}

#ifdef __cplusplus
};
#endif
