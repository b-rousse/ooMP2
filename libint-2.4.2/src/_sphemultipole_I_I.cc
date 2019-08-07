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
#include <HRRPart0bra0ket0ih.h>
#include <HRRPart0bra0ket0ii.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_I_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_I_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3591)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+10647)*1+lsi)*1]), &(inteval->stack[((hsi*45+3482)*1+lsi)*1]), &(inteval->stack[((hsi*36+3527)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+10755)*1+lsi)*1]), &(inteval->stack[((hsi*55+3427)*1+lsi)*1]), &(inteval->stack[((hsi*45+3482)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+10890)*1+lsi)*1]), &(inteval->stack[((hsi*135+10755)*1+lsi)*1]), &(inteval->stack[((hsi*108+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+11106)*1+lsi)*1]), &(inteval->stack[((hsi*66+3361)*1+lsi)*1]), &(inteval->stack[((hsi*55+3427)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+11271)*1+lsi)*1]), &(inteval->stack[((hsi*165+11106)*1+lsi)*1]), &(inteval->stack[((hsi*135+10755)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11541)*1+lsi)*1]), &(inteval->stack[((hsi*270+11271)*1+lsi)*1]), &(inteval->stack[((hsi*216+10890)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+11901)*1+lsi)*1]), &(inteval->stack[((hsi*78+3283)*1+lsi)*1]), &(inteval->stack[((hsi*66+3361)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12099)*1+lsi)*1]), &(inteval->stack[((hsi*198+11901)*1+lsi)*1]), &(inteval->stack[((hsi*165+11106)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+12429)*1+lsi)*1]), &(inteval->stack[((hsi*330+12099)*1+lsi)*1]), &(inteval->stack[((hsi*270+11271)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+12879)*1+lsi)*1]), &(inteval->stack[((hsi*450+12429)*1+lsi)*1]), &(inteval->stack[((hsi*360+11541)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11106)*1+lsi)*1]), &(inteval->stack[((hsi*36+3527)*1+lsi)*1]), &(inteval->stack[((hsi*28+3563)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11190)*1+lsi)*1]), &(inteval->stack[((hsi*108+10647)*1+lsi)*1]), &(inteval->stack[((hsi*84+11106)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+13419)*1+lsi)*1]), &(inteval->stack[((hsi*216+10890)*1+lsi)*1]), &(inteval->stack[((hsi*168+11190)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10647)*1+lsi)*1]), &(inteval->stack[((hsi*360+11541)*1+lsi)*1]), &(inteval->stack[((hsi*280+13419)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+11067)*1+lsi)*1]), &(inteval->stack[((hsi*540+12879)*1+lsi)*1]), &(inteval->stack[((hsi*420+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+10647)*1+lsi)*1]), &(inteval->stack[((hsi*91+3192)*1+lsi)*1]), &(inteval->stack[((hsi*78+3283)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3192)*1+lsi)*1]), &(inteval->stack[((hsi*234+10647)*1+lsi)*1]), &(inteval->stack[((hsi*198+11901)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+13419)*1+lsi)*1]), &(inteval->stack[((hsi*396+3192)*1+lsi)*1]), &(inteval->stack[((hsi*330+12099)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+11655)*1+lsi)*1]), &(inteval->stack[((hsi*550+13419)*1+lsi)*1]), &(inteval->stack[((hsi*450+12429)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+13419)*1+lsi)*1]), &(inteval->stack[((hsi*675+11655)*1+lsi)*1]), &(inteval->stack[((hsi*540+12879)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+9863)*1+lsi)*1]), &(inteval->stack[((hsi*756+13419)*1+lsi)*1]), &(inteval->stack[((hsi*588+11067)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11655)*1+lsi)*1]), &(inteval->stack[((hsi*45+3083)*1+lsi)*1]), &(inteval->stack[((hsi*36+3128)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11763)*1+lsi)*1]), &(inteval->stack[((hsi*55+3028)*1+lsi)*1]), &(inteval->stack[((hsi*45+3083)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+11898)*1+lsi)*1]), &(inteval->stack[((hsi*135+11763)*1+lsi)*1]), &(inteval->stack[((hsi*108+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+12114)*1+lsi)*1]), &(inteval->stack[((hsi*66+2962)*1+lsi)*1]), &(inteval->stack[((hsi*55+3028)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+12279)*1+lsi)*1]), &(inteval->stack[((hsi*165+12114)*1+lsi)*1]), &(inteval->stack[((hsi*135+11763)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+12549)*1+lsi)*1]), &(inteval->stack[((hsi*270+12279)*1+lsi)*1]), &(inteval->stack[((hsi*216+11898)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+12909)*1+lsi)*1]), &(inteval->stack[((hsi*78+2884)*1+lsi)*1]), &(inteval->stack[((hsi*66+2962)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+10647)*1+lsi)*1]), &(inteval->stack[((hsi*198+12909)*1+lsi)*1]), &(inteval->stack[((hsi*165+12114)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+14175)*1+lsi)*1]), &(inteval->stack[((hsi*330+10647)*1+lsi)*1]), &(inteval->stack[((hsi*270+12279)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+14625)*1+lsi)*1]), &(inteval->stack[((hsi*450+14175)*1+lsi)*1]), &(inteval->stack[((hsi*360+12549)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12114)*1+lsi)*1]), &(inteval->stack[((hsi*36+3128)*1+lsi)*1]), &(inteval->stack[((hsi*28+3164)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2962)*1+lsi)*1]), &(inteval->stack[((hsi*108+11655)*1+lsi)*1]), &(inteval->stack[((hsi*84+12114)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3130)*1+lsi)*1]), &(inteval->stack[((hsi*216+11898)*1+lsi)*1]), &(inteval->stack[((hsi*168+2962)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+11655)*1+lsi)*1]), &(inteval->stack[((hsi*360+12549)*1+lsi)*1]), &(inteval->stack[((hsi*280+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+12075)*1+lsi)*1]), &(inteval->stack[((hsi*540+14625)*1+lsi)*1]), &(inteval->stack[((hsi*420+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+2962)*1+lsi)*1]), &(inteval->stack[((hsi*91+2793)*1+lsi)*1]), &(inteval->stack[((hsi*78+2884)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+11655)*1+lsi)*1]), &(inteval->stack[((hsi*234+2962)*1+lsi)*1]), &(inteval->stack[((hsi*198+12909)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2793)*1+lsi)*1]), &(inteval->stack[((hsi*396+11655)*1+lsi)*1]), &(inteval->stack[((hsi*330+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+12663)*1+lsi)*1]), &(inteval->stack[((hsi*550+2793)*1+lsi)*1]), &(inteval->stack[((hsi*450+14175)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+2793)*1+lsi)*1]), &(inteval->stack[((hsi*675+12663)*1+lsi)*1]), &(inteval->stack[((hsi*540+14625)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+9079)*1+lsi)*1]), &(inteval->stack[((hsi*756+2793)*1+lsi)*1]), &(inteval->stack[((hsi*588+12075)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12663)*1+lsi)*1]), &(inteval->stack[((hsi*45+2684)*1+lsi)*1]), &(inteval->stack[((hsi*36+2729)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12771)*1+lsi)*1]), &(inteval->stack[((hsi*55+2629)*1+lsi)*1]), &(inteval->stack[((hsi*45+2684)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+12906)*1+lsi)*1]), &(inteval->stack[((hsi*135+12771)*1+lsi)*1]), &(inteval->stack[((hsi*108+12663)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+11655)*1+lsi)*1]), &(inteval->stack[((hsi*66+2563)*1+lsi)*1]), &(inteval->stack[((hsi*55+2629)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+10647)*1+lsi)*1]), &(inteval->stack[((hsi*165+11655)*1+lsi)*1]), &(inteval->stack[((hsi*135+12771)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+14175)*1+lsi)*1]), &(inteval->stack[((hsi*270+10647)*1+lsi)*1]), &(inteval->stack[((hsi*216+12906)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+13122)*1+lsi)*1]), &(inteval->stack[((hsi*78+2485)*1+lsi)*1]), &(inteval->stack[((hsi*66+2563)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+14535)*1+lsi)*1]), &(inteval->stack[((hsi*198+13122)*1+lsi)*1]), &(inteval->stack[((hsi*165+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+14865)*1+lsi)*1]), &(inteval->stack[((hsi*330+14535)*1+lsi)*1]), &(inteval->stack[((hsi*270+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+15315)*1+lsi)*1]), &(inteval->stack[((hsi*450+14865)*1+lsi)*1]), &(inteval->stack[((hsi*360+14175)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11655)*1+lsi)*1]), &(inteval->stack[((hsi*36+2729)*1+lsi)*1]), &(inteval->stack[((hsi*28+2765)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10647)*1+lsi)*1]), &(inteval->stack[((hsi*108+12663)*1+lsi)*1]), &(inteval->stack[((hsi*84+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+11655)*1+lsi)*1]), &(inteval->stack[((hsi*216+12906)*1+lsi)*1]), &(inteval->stack[((hsi*168+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10647)*1+lsi)*1]), &(inteval->stack[((hsi*360+14175)*1+lsi)*1]), &(inteval->stack[((hsi*280+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+15855)*1+lsi)*1]), &(inteval->stack[((hsi*540+15315)*1+lsi)*1]), &(inteval->stack[((hsi*420+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+12663)*1+lsi)*1]), &(inteval->stack[((hsi*91+2394)*1+lsi)*1]), &(inteval->stack[((hsi*78+2485)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+10647)*1+lsi)*1]), &(inteval->stack[((hsi*234+12663)*1+lsi)*1]), &(inteval->stack[((hsi*198+13122)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+12663)*1+lsi)*1]), &(inteval->stack[((hsi*396+10647)*1+lsi)*1]), &(inteval->stack[((hsi*330+14535)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+14175)*1+lsi)*1]), &(inteval->stack[((hsi*550+12663)*1+lsi)*1]), &(inteval->stack[((hsi*450+14865)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+12663)*1+lsi)*1]), &(inteval->stack[((hsi*675+14175)*1+lsi)*1]), &(inteval->stack[((hsi*540+15315)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+8295)*1+lsi)*1]), &(inteval->stack[((hsi*756+12663)*1+lsi)*1]), &(inteval->stack[((hsi*588+15855)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14175)*1+lsi)*1]), &(inteval->stack[((hsi*45+2285)*1+lsi)*1]), &(inteval->stack[((hsi*36+2330)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14283)*1+lsi)*1]), &(inteval->stack[((hsi*55+2230)*1+lsi)*1]), &(inteval->stack[((hsi*45+2285)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14418)*1+lsi)*1]), &(inteval->stack[((hsi*135+14283)*1+lsi)*1]), &(inteval->stack[((hsi*108+14175)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14634)*1+lsi)*1]), &(inteval->stack[((hsi*66+2164)*1+lsi)*1]), &(inteval->stack[((hsi*55+2230)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+14799)*1+lsi)*1]), &(inteval->stack[((hsi*165+14634)*1+lsi)*1]), &(inteval->stack[((hsi*135+14283)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+15069)*1+lsi)*1]), &(inteval->stack[((hsi*270+14799)*1+lsi)*1]), &(inteval->stack[((hsi*216+14418)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+15429)*1+lsi)*1]), &(inteval->stack[((hsi*78+2086)*1+lsi)*1]), &(inteval->stack[((hsi*66+2164)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*198+15429)*1+lsi)*1]), &(inteval->stack[((hsi*165+14634)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+16443)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*270+14799)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+16893)*1+lsi)*1]), &(inteval->stack[((hsi*450+16443)*1+lsi)*1]), &(inteval->stack[((hsi*360+15069)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+14634)*1+lsi)*1]), &(inteval->stack[((hsi*36+2330)*1+lsi)*1]), &(inteval->stack[((hsi*28+2366)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2164)*1+lsi)*1]), &(inteval->stack[((hsi*108+14175)*1+lsi)*1]), &(inteval->stack[((hsi*84+14634)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2332)*1+lsi)*1]), &(inteval->stack[((hsi*216+14418)*1+lsi)*1]), &(inteval->stack[((hsi*168+2164)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10647)*1+lsi)*1]), &(inteval->stack[((hsi*360+15069)*1+lsi)*1]), &(inteval->stack[((hsi*280+2332)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+14175)*1+lsi)*1]), &(inteval->stack[((hsi*540+16893)*1+lsi)*1]), &(inteval->stack[((hsi*420+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+14763)*1+lsi)*1]), &(inteval->stack[((hsi*91+1995)*1+lsi)*1]), &(inteval->stack[((hsi*78+2086)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+1995)*1+lsi)*1]), &(inteval->stack[((hsi*234+14763)*1+lsi)*1]), &(inteval->stack[((hsi*198+15429)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+14763)*1+lsi)*1]), &(inteval->stack[((hsi*396+1995)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+1995)*1+lsi)*1]), &(inteval->stack[((hsi*550+14763)*1+lsi)*1]), &(inteval->stack[((hsi*450+16443)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+14763)*1+lsi)*1]), &(inteval->stack[((hsi*675+1995)*1+lsi)*1]), &(inteval->stack[((hsi*540+16893)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+7511)*1+lsi)*1]), &(inteval->stack[((hsi*756+14763)*1+lsi)*1]), &(inteval->stack[((hsi*588+14175)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1995)*1+lsi)*1]), &(inteval->stack[((hsi*45+1886)*1+lsi)*1]), &(inteval->stack[((hsi*36+1931)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2103)*1+lsi)*1]), &(inteval->stack[((hsi*55+1831)*1+lsi)*1]), &(inteval->stack[((hsi*45+1886)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2238)*1+lsi)*1]), &(inteval->stack[((hsi*135+2103)*1+lsi)*1]), &(inteval->stack[((hsi*108+1995)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+10647)*1+lsi)*1]), &(inteval->stack[((hsi*66+1765)*1+lsi)*1]), &(inteval->stack[((hsi*55+1831)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+11655)*1+lsi)*1]), &(inteval->stack[((hsi*165+10647)*1+lsi)*1]), &(inteval->stack[((hsi*135+2103)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+16443)*1+lsi)*1]), &(inteval->stack[((hsi*270+11655)*1+lsi)*1]), &(inteval->stack[((hsi*216+2238)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2454)*1+lsi)*1]), &(inteval->stack[((hsi*78+1687)*1+lsi)*1]), &(inteval->stack[((hsi*66+1765)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+15519)*1+lsi)*1]), &(inteval->stack[((hsi*198+2454)*1+lsi)*1]), &(inteval->stack[((hsi*165+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+16803)*1+lsi)*1]), &(inteval->stack[((hsi*330+15519)*1+lsi)*1]), &(inteval->stack[((hsi*270+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+17253)*1+lsi)*1]), &(inteval->stack[((hsi*450+16803)*1+lsi)*1]), &(inteval->stack[((hsi*360+16443)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+10647)*1+lsi)*1]), &(inteval->stack[((hsi*36+1931)*1+lsi)*1]), &(inteval->stack[((hsi*28+1967)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11655)*1+lsi)*1]), &(inteval->stack[((hsi*108+1995)*1+lsi)*1]), &(inteval->stack[((hsi*84+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1765)*1+lsi)*1]), &(inteval->stack[((hsi*216+2238)*1+lsi)*1]), &(inteval->stack[((hsi*168+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10647)*1+lsi)*1]), &(inteval->stack[((hsi*360+16443)*1+lsi)*1]), &(inteval->stack[((hsi*280+1765)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+1765)*1+lsi)*1]), &(inteval->stack[((hsi*540+17253)*1+lsi)*1]), &(inteval->stack[((hsi*420+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+10647)*1+lsi)*1]), &(inteval->stack[((hsi*91+1596)*1+lsi)*1]), &(inteval->stack[((hsi*78+1687)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+11655)*1+lsi)*1]), &(inteval->stack[((hsi*234+10647)*1+lsi)*1]), &(inteval->stack[((hsi*198+2454)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+17793)*1+lsi)*1]), &(inteval->stack[((hsi*396+11655)*1+lsi)*1]), &(inteval->stack[((hsi*330+15519)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+18343)*1+lsi)*1]), &(inteval->stack[((hsi*550+17793)*1+lsi)*1]), &(inteval->stack[((hsi*450+16803)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+16443)*1+lsi)*1]), &(inteval->stack[((hsi*675+18343)*1+lsi)*1]), &(inteval->stack[((hsi*540+17253)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+6727)*1+lsi)*1]), &(inteval->stack[((hsi*756+16443)*1+lsi)*1]), &(inteval->stack[((hsi*588+1765)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+2353)*1+lsi)*1]), &(inteval->stack[((hsi*45+1487)*1+lsi)*1]), &(inteval->stack[((hsi*36+1532)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+10647)*1+lsi)*1]), &(inteval->stack[((hsi*55+1432)*1+lsi)*1]), &(inteval->stack[((hsi*45+1487)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+11655)*1+lsi)*1]), &(inteval->stack[((hsi*135+10647)*1+lsi)*1]), &(inteval->stack[((hsi*108+2353)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+15519)*1+lsi)*1]), &(inteval->stack[((hsi*66+1366)*1+lsi)*1]), &(inteval->stack[((hsi*55+1432)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+2461)*1+lsi)*1]), &(inteval->stack[((hsi*165+15519)*1+lsi)*1]), &(inteval->stack[((hsi*135+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+10647)*1+lsi)*1]), &(inteval->stack[((hsi*270+2461)*1+lsi)*1]), &(inteval->stack[((hsi*216+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+11871)*1+lsi)*1]), &(inteval->stack[((hsi*78+1288)*1+lsi)*1]), &(inteval->stack[((hsi*66+1366)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+17199)*1+lsi)*1]), &(inteval->stack[((hsi*198+11871)*1+lsi)*1]), &(inteval->stack[((hsi*165+15519)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+17529)*1+lsi)*1]), &(inteval->stack[((hsi*330+17199)*1+lsi)*1]), &(inteval->stack[((hsi*270+2461)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+17979)*1+lsi)*1]), &(inteval->stack[((hsi*450+17529)*1+lsi)*1]), &(inteval->stack[((hsi*360+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+15519)*1+lsi)*1]), &(inteval->stack[((hsi*36+1532)*1+lsi)*1]), &(inteval->stack[((hsi*28+1568)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1366)*1+lsi)*1]), &(inteval->stack[((hsi*108+2353)*1+lsi)*1]), &(inteval->stack[((hsi*84+15519)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2353)*1+lsi)*1]), &(inteval->stack[((hsi*216+11655)*1+lsi)*1]), &(inteval->stack[((hsi*168+1366)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+18519)*1+lsi)*1]), &(inteval->stack[((hsi*360+10647)*1+lsi)*1]), &(inteval->stack[((hsi*280+2353)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+18939)*1+lsi)*1]), &(inteval->stack[((hsi*540+17979)*1+lsi)*1]), &(inteval->stack[((hsi*420+18519)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+2353)*1+lsi)*1]), &(inteval->stack[((hsi*91+1197)*1+lsi)*1]), &(inteval->stack[((hsi*78+1288)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+1197)*1+lsi)*1]), &(inteval->stack[((hsi*234+2353)*1+lsi)*1]), &(inteval->stack[((hsi*198+11871)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+19527)*1+lsi)*1]), &(inteval->stack[((hsi*396+1197)*1+lsi)*1]), &(inteval->stack[((hsi*330+17199)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+20077)*1+lsi)*1]), &(inteval->stack[((hsi*550+19527)*1+lsi)*1]), &(inteval->stack[((hsi*450+17529)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+17199)*1+lsi)*1]), &(inteval->stack[((hsi*675+20077)*1+lsi)*1]), &(inteval->stack[((hsi*540+17979)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+5943)*1+lsi)*1]), &(inteval->stack[((hsi*756+17199)*1+lsi)*1]), &(inteval->stack[((hsi*588+18939)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]), &(inteval->stack[((hsi*36+1133)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*55+1033)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1197)*1+lsi)*1]), &(inteval->stack[((hsi*66+967)*1+lsi)*1]), &(inteval->stack[((hsi*55+1033)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18414)*1+lsi)*1]), &(inteval->stack[((hsi*165+1197)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2353)*1+lsi)*1]), &(inteval->stack[((hsi*270+18414)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+10647)*1+lsi)*1]), &(inteval->stack[((hsi*78+889)*1+lsi)*1]), &(inteval->stack[((hsi*66+967)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*198+10647)*1+lsi)*1]), &(inteval->stack[((hsi*165+1197)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1197)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*270+18414)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+19527)*1+lsi)*1]), &(inteval->stack[((hsi*450+1197)*1+lsi)*1]), &(inteval->stack[((hsi*360+2353)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18414)*1+lsi)*1]), &(inteval->stack[((hsi*36+1133)*1+lsi)*1]), &(inteval->stack[((hsi*28+1169)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18498)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*84+18414)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+15519)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*168+18498)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+17955)*1+lsi)*1]), &(inteval->stack[((hsi*360+2353)*1+lsi)*1]), &(inteval->stack[((hsi*280+15519)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+20067)*1+lsi)*1]), &(inteval->stack[((hsi*540+19527)*1+lsi)*1]), &(inteval->stack[((hsi*420+17955)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+17955)*1+lsi)*1]), &(inteval->stack[((hsi*91+798)*1+lsi)*1]), &(inteval->stack[((hsi*78+889)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+18189)*1+lsi)*1]), &(inteval->stack[((hsi*234+17955)*1+lsi)*1]), &(inteval->stack[((hsi*198+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+20655)*1+lsi)*1]), &(inteval->stack[((hsi*396+18189)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+17955)*1+lsi)*1]), &(inteval->stack[((hsi*550+20655)*1+lsi)*1]), &(inteval->stack[((hsi*450+1197)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+798)*1+lsi)*1]), &(inteval->stack[((hsi*675+17955)*1+lsi)*1]), &(inteval->stack[((hsi*540+19527)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+5159)*1+lsi)*1]), &(inteval->stack[((hsi*756+798)*1+lsi)*1]), &(inteval->stack[((hsi*588+20067)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*45+689)*1+lsi)*1]), &(inteval->stack[((hsi*36+734)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*55+634)*1+lsi)*1]), &(inteval->stack[((hsi*45+689)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+19527)*1+lsi)*1]), &(inteval->stack[((hsi*66+568)*1+lsi)*1]), &(inteval->stack[((hsi*55+634)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18414)*1+lsi)*1]), &(inteval->stack[((hsi*165+19527)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2353)*1+lsi)*1]), &(inteval->stack[((hsi*270+18414)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+10647)*1+lsi)*1]), &(inteval->stack[((hsi*78+490)*1+lsi)*1]), &(inteval->stack[((hsi*66+568)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*198+10647)*1+lsi)*1]), &(inteval->stack[((hsi*165+19527)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+19527)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]), &(inteval->stack[((hsi*270+18414)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+20655)*1+lsi)*1]), &(inteval->stack[((hsi*450+19527)*1+lsi)*1]), &(inteval->stack[((hsi*360+2353)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18414)*1+lsi)*1]), &(inteval->stack[((hsi*36+734)*1+lsi)*1]), &(inteval->stack[((hsi*28+770)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18498)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*84+18414)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+15519)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*168+18498)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+17955)*1+lsi)*1]), &(inteval->stack[((hsi*360+2353)*1+lsi)*1]), &(inteval->stack[((hsi*280+15519)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+21195)*1+lsi)*1]), &(inteval->stack[((hsi*540+20655)*1+lsi)*1]), &(inteval->stack[((hsi*420+17955)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+17955)*1+lsi)*1]), &(inteval->stack[((hsi*91+399)*1+lsi)*1]), &(inteval->stack[((hsi*78+490)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+18189)*1+lsi)*1]), &(inteval->stack[((hsi*234+17955)*1+lsi)*1]), &(inteval->stack[((hsi*198+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+21783)*1+lsi)*1]), &(inteval->stack[((hsi*396+18189)*1+lsi)*1]), &(inteval->stack[((hsi*330+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+17955)*1+lsi)*1]), &(inteval->stack[((hsi*550+21783)*1+lsi)*1]), &(inteval->stack[((hsi*450+19527)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+21783)*1+lsi)*1]), &(inteval->stack[((hsi*675+17955)*1+lsi)*1]), &(inteval->stack[((hsi*540+20655)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+4375)*1+lsi)*1]), &(inteval->stack[((hsi*756+21783)*1+lsi)*1]), &(inteval->stack[((hsi*588+21195)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20655)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+19527)*1+lsi)*1]), &(inteval->stack[((hsi*165+20655)*1+lsi)*1]), &(inteval->stack[((hsi*135+18063)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+18414)*1+lsi)*1]), &(inteval->stack[((hsi*270+19527)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2353)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+10647)*1+lsi)*1]), &(inteval->stack[((hsi*198+2353)*1+lsi)*1]), &(inteval->stack[((hsi*165+20655)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+20655)*1+lsi)*1]), &(inteval->stack[((hsi*330+10647)*1+lsi)*1]), &(inteval->stack[((hsi*270+19527)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+19527)*1+lsi)*1]), &(inteval->stack[((hsi*450+20655)*1+lsi)*1]), &(inteval->stack[((hsi*360+18414)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11655)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+169)*1+lsi)*1]), &(inteval->stack[((hsi*108+17955)*1+lsi)*1]), &(inteval->stack[((hsi*84+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+337)*1+lsi)*1]), &(inteval->stack[((hsi*216+18198)*1+lsi)*1]), &(inteval->stack[((hsi*168+169)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+11655)*1+lsi)*1]), &(inteval->stack[((hsi*360+18414)*1+lsi)*1]), &(inteval->stack[((hsi*280+337)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+17955)*1+lsi)*1]), &(inteval->stack[((hsi*540+19527)*1+lsi)*1]), &(inteval->stack[((hsi*420+11655)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+169)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+18543)*1+lsi)*1]), &(inteval->stack[((hsi*234+169)*1+lsi)*1]), &(inteval->stack[((hsi*198+2353)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+0)*1+lsi)*1]), &(inteval->stack[((hsi*396+18543)*1+lsi)*1]), &(inteval->stack[((hsi*330+10647)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+22539)*1+lsi)*1]), &(inteval->stack[((hsi*550+0)*1+lsi)*1]), &(inteval->stack[((hsi*450+20655)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+22539)*1+lsi)*1]), &(inteval->stack[((hsi*540+19527)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+3591)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+17955)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*784+3591)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*784+4375)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*784+5159)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*784+5943)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*784+6727)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*784+7511)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*784+8295)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*784+9079)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*784+9863)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
