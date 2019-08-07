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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <_sphemultipole_I_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_I_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2070)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1961)*1+lsi)*1]), &(inteval->stack[((hsi*36+2006)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+1906)*1+lsi)*1]), &(inteval->stack[((hsi*45+1961)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6309)*1+lsi)*1]), &(inteval->stack[((hsi*36+2006)*1+lsi)*1]), &(inteval->stack[((hsi*28+2042)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6393)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6309)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6561)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+6393)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6309)*1+lsi)*1]), &(inteval->stack[((hsi*66+1840)*1+lsi)*1]), &(inteval->stack[((hsi*55+1906)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*165+6309)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7111)*1+lsi)*1]), &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+5430)*1+lsi)*1]), &(inteval->stack[((hsi*360+7111)*1+lsi)*1]), &(inteval->stack[((hsi*280+6561)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1731)*1+lsi)*1]), &(inteval->stack[((hsi*36+1776)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+1676)*1+lsi)*1]), &(inteval->stack[((hsi*45+1731)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6841)*1+lsi)*1]), &(inteval->stack[((hsi*36+1776)*1+lsi)*1]), &(inteval->stack[((hsi*28+1812)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1731)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6841)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7471)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+1731)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1731)*1+lsi)*1]), &(inteval->stack[((hsi*66+1610)*1+lsi)*1]), &(inteval->stack[((hsi*55+1676)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*165+1731)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1610)*1+lsi)*1]), &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+5010)*1+lsi)*1]), &(inteval->stack[((hsi*360+1610)*1+lsi)*1]), &(inteval->stack[((hsi*280+7471)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1501)*1+lsi)*1]), &(inteval->stack[((hsi*36+1546)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+1446)*1+lsi)*1]), &(inteval->stack[((hsi*45+1501)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6841)*1+lsi)*1]), &(inteval->stack[((hsi*36+1546)*1+lsi)*1]), &(inteval->stack[((hsi*28+1582)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6309)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6841)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7751)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+6309)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*66+1380)*1+lsi)*1]), &(inteval->stack[((hsi*55+1446)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+8301)*1+lsi)*1]), &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+4590)*1+lsi)*1]), &(inteval->stack[((hsi*360+8301)*1+lsi)*1]), &(inteval->stack[((hsi*280+7751)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1271)*1+lsi)*1]), &(inteval->stack[((hsi*36+1316)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+1216)*1+lsi)*1]), &(inteval->stack[((hsi*45+1271)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8031)*1+lsi)*1]), &(inteval->stack[((hsi*36+1316)*1+lsi)*1]), &(inteval->stack[((hsi*28+1352)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1271)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8661)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+1271)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1271)*1+lsi)*1]), &(inteval->stack[((hsi*66+1150)*1+lsi)*1]), &(inteval->stack[((hsi*55+1216)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*165+1271)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1150)*1+lsi)*1]), &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+4170)*1+lsi)*1]), &(inteval->stack[((hsi*360+1150)*1+lsi)*1]), &(inteval->stack[((hsi*280+8661)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1041)*1+lsi)*1]), &(inteval->stack[((hsi*36+1086)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+986)*1+lsi)*1]), &(inteval->stack[((hsi*45+1041)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6841)*1+lsi)*1]), &(inteval->stack[((hsi*36+1086)*1+lsi)*1]), &(inteval->stack[((hsi*28+1122)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8031)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6841)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8941)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*66+920)*1+lsi)*1]), &(inteval->stack[((hsi*55+986)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9221)*1+lsi)*1]), &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+3750)*1+lsi)*1]), &(inteval->stack[((hsi*360+9221)*1+lsi)*1]), &(inteval->stack[((hsi*280+8941)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+811)*1+lsi)*1]), &(inteval->stack[((hsi*36+856)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+756)*1+lsi)*1]), &(inteval->stack[((hsi*45+811)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8031)*1+lsi)*1]), &(inteval->stack[((hsi*36+856)*1+lsi)*1]), &(inteval->stack[((hsi*28+892)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+811)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9581)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+811)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+811)*1+lsi)*1]), &(inteval->stack[((hsi*66+690)*1+lsi)*1]), &(inteval->stack[((hsi*55+756)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*165+811)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+690)*1+lsi)*1]), &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+3330)*1+lsi)*1]), &(inteval->stack[((hsi*360+690)*1+lsi)*1]), &(inteval->stack[((hsi*280+9581)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+581)*1+lsi)*1]), &(inteval->stack[((hsi*36+626)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+526)*1+lsi)*1]), &(inteval->stack[((hsi*45+581)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6841)*1+lsi)*1]), &(inteval->stack[((hsi*36+626)*1+lsi)*1]), &(inteval->stack[((hsi*28+662)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8031)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6841)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9861)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*66+460)*1+lsi)*1]), &(inteval->stack[((hsi*55+526)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+10141)*1+lsi)*1]), &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+2910)*1+lsi)*1]), &(inteval->stack[((hsi*360+10141)*1+lsi)*1]), &(inteval->stack[((hsi*280+9861)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+351)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+296)*1+lsi)*1]), &(inteval->stack[((hsi*45+351)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8031)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]), &(inteval->stack[((hsi*28+432)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+351)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10501)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+351)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+351)*1+lsi)*1]), &(inteval->stack[((hsi*66+230)*1+lsi)*1]), &(inteval->stack[((hsi*55+296)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*165+351)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+230)*1+lsi)*1]), &(inteval->stack[((hsi*270+6841)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+2490)*1+lsi)*1]), &(inteval->stack[((hsi*360+230)*1+lsi)*1]), &(inteval->stack[((hsi*280+10501)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6841)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]), &(inteval->stack[((hsi*28+202)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8031)*1+lsi)*1]), &(inteval->stack[((hsi*108+5850)*1+lsi)*1]), &(inteval->stack[((hsi*84+6841)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10781)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]), &(inteval->stack[((hsi*168+8031)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*165+6841)*1+lsi)*1]), &(inteval->stack[((hsi*135+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11061)*1+lsi)*1]), &(inteval->stack[((hsi*270+8031)*1+lsi)*1]), &(inteval->stack[((hsi*216+6093)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+2070)*1+lsi)*1]), &(inteval->stack[((hsi*360+11061)*1+lsi)*1]), &(inteval->stack[((hsi*280+10781)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*420+2070)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*420+2490)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*420+2910)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*420+3330)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*420+3750)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*420+4170)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*420+4590)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*420+5010)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*420+5430)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
