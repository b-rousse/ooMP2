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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hh.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_sphemultipole_H_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_H_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2259)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6228)*1+lsi)*1]), &(inteval->stack[((hsi*36+2174)*1+lsi)*1]), &(inteval->stack[((hsi*28+2210)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+6312)*1+lsi)*1]), &(inteval->stack[((hsi*45+2129)*1+lsi)*1]), &(inteval->stack[((hsi*36+2174)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6420)*1+lsi)*1]), &(inteval->stack[((hsi*108+6312)*1+lsi)*1]), &(inteval->stack[((hsi*84+6228)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+6588)*1+lsi)*1]), &(inteval->stack[((hsi*55+2074)*1+lsi)*1]), &(inteval->stack[((hsi*45+2129)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6723)*1+lsi)*1]), &(inteval->stack[((hsi*135+6588)*1+lsi)*1]), &(inteval->stack[((hsi*108+6312)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6939)*1+lsi)*1]), &(inteval->stack[((hsi*216+6723)*1+lsi)*1]), &(inteval->stack[((hsi*168+6420)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6312)*1+lsi)*1]), &(inteval->stack[((hsi*28+2210)*1+lsi)*1]), &(inteval->stack[((hsi*21+2238)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2129)*1+lsi)*1]), &(inteval->stack[((hsi*84+6228)*1+lsi)*1]), &(inteval->stack[((hsi*63+6312)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7219)*1+lsi)*1]), &(inteval->stack[((hsi*168+6420)*1+lsi)*1]), &(inteval->stack[((hsi*126+2129)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6228)*1+lsi)*1]), &(inteval->stack[((hsi*280+6939)*1+lsi)*1]), &(inteval->stack[((hsi*210+7219)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7219)*1+lsi)*1]), &(inteval->stack[((hsi*66+2008)*1+lsi)*1]), &(inteval->stack[((hsi*55+2074)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+7384)*1+lsi)*1]), &(inteval->stack[((hsi*165+7219)*1+lsi)*1]), &(inteval->stack[((hsi*135+6588)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7654)*1+lsi)*1]), &(inteval->stack[((hsi*270+7384)*1+lsi)*1]), &(inteval->stack[((hsi*216+6723)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+7219)*1+lsi)*1]), &(inteval->stack[((hsi*360+7654)*1+lsi)*1]), &(inteval->stack[((hsi*280+6939)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+5787)*1+lsi)*1]), &(inteval->stack[((hsi*420+7219)*1+lsi)*1]), &(inteval->stack[((hsi*315+6228)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6543)*1+lsi)*1]), &(inteval->stack[((hsi*36+1923)*1+lsi)*1]), &(inteval->stack[((hsi*28+1959)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+6627)*1+lsi)*1]), &(inteval->stack[((hsi*45+1878)*1+lsi)*1]), &(inteval->stack[((hsi*36+1923)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6735)*1+lsi)*1]), &(inteval->stack[((hsi*108+6627)*1+lsi)*1]), &(inteval->stack[((hsi*84+6543)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+6903)*1+lsi)*1]), &(inteval->stack[((hsi*55+1823)*1+lsi)*1]), &(inteval->stack[((hsi*45+1878)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2008)*1+lsi)*1]), &(inteval->stack[((hsi*135+6903)*1+lsi)*1]), &(inteval->stack[((hsi*108+6627)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7639)*1+lsi)*1]), &(inteval->stack[((hsi*216+2008)*1+lsi)*1]), &(inteval->stack[((hsi*168+6735)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+7038)*1+lsi)*1]), &(inteval->stack[((hsi*28+1959)*1+lsi)*1]), &(inteval->stack[((hsi*21+1987)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1878)*1+lsi)*1]), &(inteval->stack[((hsi*84+6543)*1+lsi)*1]), &(inteval->stack[((hsi*63+7038)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7919)*1+lsi)*1]), &(inteval->stack[((hsi*168+6735)*1+lsi)*1]), &(inteval->stack[((hsi*126+1878)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6543)*1+lsi)*1]), &(inteval->stack[((hsi*280+7639)*1+lsi)*1]), &(inteval->stack[((hsi*210+7919)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7038)*1+lsi)*1]), &(inteval->stack[((hsi*66+1757)*1+lsi)*1]), &(inteval->stack[((hsi*55+1823)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+7919)*1+lsi)*1]), &(inteval->stack[((hsi*165+7038)*1+lsi)*1]), &(inteval->stack[((hsi*135+6903)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+6858)*1+lsi)*1]), &(inteval->stack[((hsi*270+7919)*1+lsi)*1]), &(inteval->stack[((hsi*216+2008)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+1757)*1+lsi)*1]), &(inteval->stack[((hsi*360+6858)*1+lsi)*1]), &(inteval->stack[((hsi*280+7639)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+5346)*1+lsi)*1]), &(inteval->stack[((hsi*420+1757)*1+lsi)*1]), &(inteval->stack[((hsi*315+6543)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6858)*1+lsi)*1]), &(inteval->stack[((hsi*36+1672)*1+lsi)*1]), &(inteval->stack[((hsi*28+1708)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+6942)*1+lsi)*1]), &(inteval->stack[((hsi*45+1627)*1+lsi)*1]), &(inteval->stack[((hsi*36+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+7050)*1+lsi)*1]), &(inteval->stack[((hsi*108+6942)*1+lsi)*1]), &(inteval->stack[((hsi*84+6858)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7639)*1+lsi)*1]), &(inteval->stack[((hsi*55+1572)*1+lsi)*1]), &(inteval->stack[((hsi*45+1627)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7774)*1+lsi)*1]), &(inteval->stack[((hsi*135+7639)*1+lsi)*1]), &(inteval->stack[((hsi*108+6942)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7990)*1+lsi)*1]), &(inteval->stack[((hsi*216+7774)*1+lsi)*1]), &(inteval->stack[((hsi*168+7050)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6942)*1+lsi)*1]), &(inteval->stack[((hsi*28+1708)*1+lsi)*1]), &(inteval->stack[((hsi*21+1736)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1627)*1+lsi)*1]), &(inteval->stack[((hsi*84+6858)*1+lsi)*1]), &(inteval->stack[((hsi*63+6942)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+8270)*1+lsi)*1]), &(inteval->stack[((hsi*168+7050)*1+lsi)*1]), &(inteval->stack[((hsi*126+1627)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6858)*1+lsi)*1]), &(inteval->stack[((hsi*280+7990)*1+lsi)*1]), &(inteval->stack[((hsi*210+8270)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8270)*1+lsi)*1]), &(inteval->stack[((hsi*66+1506)*1+lsi)*1]), &(inteval->stack[((hsi*55+1572)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8435)*1+lsi)*1]), &(inteval->stack[((hsi*165+8270)*1+lsi)*1]), &(inteval->stack[((hsi*135+7639)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+8705)*1+lsi)*1]), &(inteval->stack[((hsi*270+8435)*1+lsi)*1]), &(inteval->stack[((hsi*216+7774)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+8270)*1+lsi)*1]), &(inteval->stack[((hsi*360+8705)*1+lsi)*1]), &(inteval->stack[((hsi*280+7990)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+4905)*1+lsi)*1]), &(inteval->stack[((hsi*420+8270)*1+lsi)*1]), &(inteval->stack[((hsi*315+6858)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+7639)*1+lsi)*1]), &(inteval->stack[((hsi*36+1421)*1+lsi)*1]), &(inteval->stack[((hsi*28+1457)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+7723)*1+lsi)*1]), &(inteval->stack[((hsi*45+1376)*1+lsi)*1]), &(inteval->stack[((hsi*36+1421)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+7831)*1+lsi)*1]), &(inteval->stack[((hsi*108+7723)*1+lsi)*1]), &(inteval->stack[((hsi*84+7639)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7999)*1+lsi)*1]), &(inteval->stack[((hsi*55+1321)*1+lsi)*1]), &(inteval->stack[((hsi*45+1376)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1506)*1+lsi)*1]), &(inteval->stack[((hsi*135+7999)*1+lsi)*1]), &(inteval->stack[((hsi*108+7723)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8690)*1+lsi)*1]), &(inteval->stack[((hsi*216+1506)*1+lsi)*1]), &(inteval->stack[((hsi*168+7831)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8134)*1+lsi)*1]), &(inteval->stack[((hsi*28+1457)*1+lsi)*1]), &(inteval->stack[((hsi*21+1485)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1376)*1+lsi)*1]), &(inteval->stack[((hsi*84+7639)*1+lsi)*1]), &(inteval->stack[((hsi*63+8134)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+8970)*1+lsi)*1]), &(inteval->stack[((hsi*168+7831)*1+lsi)*1]), &(inteval->stack[((hsi*126+1376)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+7639)*1+lsi)*1]), &(inteval->stack[((hsi*280+8690)*1+lsi)*1]), &(inteval->stack[((hsi*210+8970)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8970)*1+lsi)*1]), &(inteval->stack[((hsi*66+1255)*1+lsi)*1]), &(inteval->stack[((hsi*55+1321)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+9135)*1+lsi)*1]), &(inteval->stack[((hsi*165+8970)*1+lsi)*1]), &(inteval->stack[((hsi*135+7999)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9405)*1+lsi)*1]), &(inteval->stack[((hsi*270+9135)*1+lsi)*1]), &(inteval->stack[((hsi*216+1506)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+1255)*1+lsi)*1]), &(inteval->stack[((hsi*360+9405)*1+lsi)*1]), &(inteval->stack[((hsi*280+8690)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+4464)*1+lsi)*1]), &(inteval->stack[((hsi*420+1255)*1+lsi)*1]), &(inteval->stack[((hsi*315+7639)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+7954)*1+lsi)*1]), &(inteval->stack[((hsi*36+1170)*1+lsi)*1]), &(inteval->stack[((hsi*28+1206)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8038)*1+lsi)*1]), &(inteval->stack[((hsi*45+1125)*1+lsi)*1]), &(inteval->stack[((hsi*36+1170)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8690)*1+lsi)*1]), &(inteval->stack[((hsi*108+8038)*1+lsi)*1]), &(inteval->stack[((hsi*84+7954)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+8858)*1+lsi)*1]), &(inteval->stack[((hsi*55+1070)*1+lsi)*1]), &(inteval->stack[((hsi*45+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+8993)*1+lsi)*1]), &(inteval->stack[((hsi*135+8858)*1+lsi)*1]), &(inteval->stack[((hsi*108+8038)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9209)*1+lsi)*1]), &(inteval->stack[((hsi*216+8993)*1+lsi)*1]), &(inteval->stack[((hsi*168+8690)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8038)*1+lsi)*1]), &(inteval->stack[((hsi*28+1206)*1+lsi)*1]), &(inteval->stack[((hsi*21+1234)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8101)*1+lsi)*1]), &(inteval->stack[((hsi*84+7954)*1+lsi)*1]), &(inteval->stack[((hsi*63+8038)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+9489)*1+lsi)*1]), &(inteval->stack[((hsi*168+8690)*1+lsi)*1]), &(inteval->stack[((hsi*126+8101)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+7954)*1+lsi)*1]), &(inteval->stack[((hsi*280+9209)*1+lsi)*1]), &(inteval->stack[((hsi*210+9489)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8690)*1+lsi)*1]), &(inteval->stack[((hsi*66+1004)*1+lsi)*1]), &(inteval->stack[((hsi*55+1070)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+9489)*1+lsi)*1]), &(inteval->stack[((hsi*165+8690)*1+lsi)*1]), &(inteval->stack[((hsi*135+8858)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9759)*1+lsi)*1]), &(inteval->stack[((hsi*270+9489)*1+lsi)*1]), &(inteval->stack[((hsi*216+8993)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+8690)*1+lsi)*1]), &(inteval->stack[((hsi*360+9759)*1+lsi)*1]), &(inteval->stack[((hsi*280+9209)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+4023)*1+lsi)*1]), &(inteval->stack[((hsi*420+8690)*1+lsi)*1]), &(inteval->stack[((hsi*315+7954)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1004)*1+lsi)*1]), &(inteval->stack[((hsi*36+919)*1+lsi)*1]), &(inteval->stack[((hsi*28+955)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1088)*1+lsi)*1]), &(inteval->stack[((hsi*45+874)*1+lsi)*1]), &(inteval->stack[((hsi*36+919)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9110)*1+lsi)*1]), &(inteval->stack[((hsi*108+1088)*1+lsi)*1]), &(inteval->stack[((hsi*84+1004)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+9278)*1+lsi)*1]), &(inteval->stack[((hsi*55+819)*1+lsi)*1]), &(inteval->stack[((hsi*45+874)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+9413)*1+lsi)*1]), &(inteval->stack[((hsi*135+9278)*1+lsi)*1]), &(inteval->stack[((hsi*108+1088)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9629)*1+lsi)*1]), &(inteval->stack[((hsi*216+9413)*1+lsi)*1]), &(inteval->stack[((hsi*168+9110)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1088)*1+lsi)*1]), &(inteval->stack[((hsi*28+955)*1+lsi)*1]), &(inteval->stack[((hsi*21+983)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+874)*1+lsi)*1]), &(inteval->stack[((hsi*84+1004)*1+lsi)*1]), &(inteval->stack[((hsi*63+1088)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1000)*1+lsi)*1]), &(inteval->stack[((hsi*168+9110)*1+lsi)*1]), &(inteval->stack[((hsi*126+874)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9909)*1+lsi)*1]), &(inteval->stack[((hsi*280+9629)*1+lsi)*1]), &(inteval->stack[((hsi*210+1000)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+874)*1+lsi)*1]), &(inteval->stack[((hsi*66+753)*1+lsi)*1]), &(inteval->stack[((hsi*55+819)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+10224)*1+lsi)*1]), &(inteval->stack[((hsi*165+874)*1+lsi)*1]), &(inteval->stack[((hsi*135+9278)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+753)*1+lsi)*1]), &(inteval->stack[((hsi*270+10224)*1+lsi)*1]), &(inteval->stack[((hsi*216+9413)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+9110)*1+lsi)*1]), &(inteval->stack[((hsi*360+753)*1+lsi)*1]), &(inteval->stack[((hsi*280+9629)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+3582)*1+lsi)*1]), &(inteval->stack[((hsi*420+9110)*1+lsi)*1]), &(inteval->stack[((hsi*315+9909)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+753)*1+lsi)*1]), &(inteval->stack[((hsi*36+668)*1+lsi)*1]), &(inteval->stack[((hsi*28+704)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+837)*1+lsi)*1]), &(inteval->stack[((hsi*45+623)*1+lsi)*1]), &(inteval->stack[((hsi*36+668)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9530)*1+lsi)*1]), &(inteval->stack[((hsi*108+837)*1+lsi)*1]), &(inteval->stack[((hsi*84+753)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+945)*1+lsi)*1]), &(inteval->stack[((hsi*55+568)*1+lsi)*1]), &(inteval->stack[((hsi*45+623)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+10224)*1+lsi)*1]), &(inteval->stack[((hsi*135+945)*1+lsi)*1]), &(inteval->stack[((hsi*108+837)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10440)*1+lsi)*1]), &(inteval->stack[((hsi*216+10224)*1+lsi)*1]), &(inteval->stack[((hsi*168+9530)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9698)*1+lsi)*1]), &(inteval->stack[((hsi*28+704)*1+lsi)*1]), &(inteval->stack[((hsi*21+732)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1080)*1+lsi)*1]), &(inteval->stack[((hsi*84+753)*1+lsi)*1]), &(inteval->stack[((hsi*63+9698)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+623)*1+lsi)*1]), &(inteval->stack[((hsi*168+9530)*1+lsi)*1]), &(inteval->stack[((hsi*126+1080)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9530)*1+lsi)*1]), &(inteval->stack[((hsi*280+10440)*1+lsi)*1]), &(inteval->stack[((hsi*210+623)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+623)*1+lsi)*1]), &(inteval->stack[((hsi*66+502)*1+lsi)*1]), &(inteval->stack[((hsi*55+568)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+10720)*1+lsi)*1]), &(inteval->stack[((hsi*165+623)*1+lsi)*1]), &(inteval->stack[((hsi*135+945)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+502)*1+lsi)*1]), &(inteval->stack[((hsi*270+10720)*1+lsi)*1]), &(inteval->stack[((hsi*216+10224)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10720)*1+lsi)*1]), &(inteval->stack[((hsi*360+502)*1+lsi)*1]), &(inteval->stack[((hsi*280+10440)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+3141)*1+lsi)*1]), &(inteval->stack[((hsi*420+10720)*1+lsi)*1]), &(inteval->stack[((hsi*315+9530)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+502)*1+lsi)*1]), &(inteval->stack[((hsi*36+417)*1+lsi)*1]), &(inteval->stack[((hsi*28+453)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+586)*1+lsi)*1]), &(inteval->stack[((hsi*45+372)*1+lsi)*1]), &(inteval->stack[((hsi*36+417)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+694)*1+lsi)*1]), &(inteval->stack[((hsi*108+586)*1+lsi)*1]), &(inteval->stack[((hsi*84+502)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+10224)*1+lsi)*1]), &(inteval->stack[((hsi*55+317)*1+lsi)*1]), &(inteval->stack[((hsi*45+372)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+862)*1+lsi)*1]), &(inteval->stack[((hsi*135+10224)*1+lsi)*1]), &(inteval->stack[((hsi*108+586)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10359)*1+lsi)*1]), &(inteval->stack[((hsi*216+862)*1+lsi)*1]), &(inteval->stack[((hsi*168+694)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1078)*1+lsi)*1]), &(inteval->stack[((hsi*28+453)*1+lsi)*1]), &(inteval->stack[((hsi*21+481)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+372)*1+lsi)*1]), &(inteval->stack[((hsi*84+502)*1+lsi)*1]), &(inteval->stack[((hsi*63+1078)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+11140)*1+lsi)*1]), &(inteval->stack[((hsi*168+694)*1+lsi)*1]), &(inteval->stack[((hsi*126+372)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+372)*1+lsi)*1]), &(inteval->stack[((hsi*280+10359)*1+lsi)*1]), &(inteval->stack[((hsi*210+11140)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1078)*1+lsi)*1]), &(inteval->stack[((hsi*66+251)*1+lsi)*1]), &(inteval->stack[((hsi*55+317)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+11140)*1+lsi)*1]), &(inteval->stack[((hsi*165+1078)*1+lsi)*1]), &(inteval->stack[((hsi*135+10224)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11410)*1+lsi)*1]), &(inteval->stack[((hsi*270+11140)*1+lsi)*1]), &(inteval->stack[((hsi*216+862)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+687)*1+lsi)*1]), &(inteval->stack[((hsi*360+11410)*1+lsi)*1]), &(inteval->stack[((hsi*280+10359)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+2700)*1+lsi)*1]), &(inteval->stack[((hsi*420+687)*1+lsi)*1]), &(inteval->stack[((hsi*315+372)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+10224)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]), &(inteval->stack[((hsi*28+202)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+10308)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10416)*1+lsi)*1]), &(inteval->stack[((hsi*108+10308)*1+lsi)*1]), &(inteval->stack[((hsi*84+10224)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1107)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+11140)*1+lsi)*1]), &(inteval->stack[((hsi*135+1107)*1+lsi)*1]), &(inteval->stack[((hsi*108+10308)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+11356)*1+lsi)*1]), &(inteval->stack[((hsi*216+11140)*1+lsi)*1]), &(inteval->stack[((hsi*168+10416)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+10584)*1+lsi)*1]), &(inteval->stack[((hsi*28+202)*1+lsi)*1]), &(inteval->stack[((hsi*21+230)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+121)*1+lsi)*1]), &(inteval->stack[((hsi*84+10224)*1+lsi)*1]), &(inteval->stack[((hsi*63+10584)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+11636)*1+lsi)*1]), &(inteval->stack[((hsi*168+10416)*1+lsi)*1]), &(inteval->stack[((hsi*126+121)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+10224)*1+lsi)*1]), &(inteval->stack[((hsi*280+11356)*1+lsi)*1]), &(inteval->stack[((hsi*210+11636)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+121)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+11636)*1+lsi)*1]), &(inteval->stack[((hsi*165+121)*1+lsi)*1]), &(inteval->stack[((hsi*135+1107)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+11636)*1+lsi)*1]), &(inteval->stack[((hsi*216+11140)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+11636)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+11356)*1+lsi)*1]),1);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*441+2259)*1+lsi)*1]), &(inteval->stack[((hsi*420+11636)*1+lsi)*1]), &(inteval->stack[((hsi*315+10224)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*441+2259)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*441+2700)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*441+3141)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*441+3582)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*441+4023)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*441+4464)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*441+4905)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*441+5346)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*441+5787)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
