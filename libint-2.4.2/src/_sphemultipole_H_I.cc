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
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0ig.h>
#include <HRRPart0ket0bra0ih.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kf.h>
#include <HRRPart0ket0bra0kg.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_H_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_H_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2772)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8064)*1+lsi)*1]), &(inteval->stack[((hsi*45+2663)*1+lsi)*1]), &(inteval->stack[((hsi*36+2708)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+8172)*1+lsi)*1]), &(inteval->stack[((hsi*55+2608)*1+lsi)*1]), &(inteval->stack[((hsi*45+2663)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8307)*1+lsi)*1]), &(inteval->stack[((hsi*135+8172)*1+lsi)*1]), &(inteval->stack[((hsi*108+8064)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+8523)*1+lsi)*1]), &(inteval->stack[((hsi*66+2542)*1+lsi)*1]), &(inteval->stack[((hsi*55+2608)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+8688)*1+lsi)*1]), &(inteval->stack[((hsi*165+8523)*1+lsi)*1]), &(inteval->stack[((hsi*135+8172)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+8958)*1+lsi)*1]), &(inteval->stack[((hsi*270+8688)*1+lsi)*1]), &(inteval->stack[((hsi*216+8307)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8172)*1+lsi)*1]), &(inteval->stack[((hsi*36+2708)*1+lsi)*1]), &(inteval->stack[((hsi*28+2744)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9318)*1+lsi)*1]), &(inteval->stack[((hsi*108+8064)*1+lsi)*1]), &(inteval->stack[((hsi*84+8172)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+9486)*1+lsi)*1]), &(inteval->stack[((hsi*216+8307)*1+lsi)*1]), &(inteval->stack[((hsi*168+9318)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+8064)*1+lsi)*1]), &(inteval->stack[((hsi*360+8958)*1+lsi)*1]), &(inteval->stack[((hsi*280+9486)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9318)*1+lsi)*1]), &(inteval->stack[((hsi*78+2464)*1+lsi)*1]), &(inteval->stack[((hsi*66+2542)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+9516)*1+lsi)*1]), &(inteval->stack[((hsi*198+9318)*1+lsi)*1]), &(inteval->stack[((hsi*165+8523)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+9846)*1+lsi)*1]), &(inteval->stack[((hsi*330+9516)*1+lsi)*1]), &(inteval->stack[((hsi*270+8688)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+10296)*1+lsi)*1]), &(inteval->stack[((hsi*450+9846)*1+lsi)*1]), &(inteval->stack[((hsi*360+8958)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+7476)*1+lsi)*1]), &(inteval->stack[((hsi*540+10296)*1+lsi)*1]), &(inteval->stack[((hsi*420+8064)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8484)*1+lsi)*1]), &(inteval->stack[((hsi*45+2355)*1+lsi)*1]), &(inteval->stack[((hsi*36+2400)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+8592)*1+lsi)*1]), &(inteval->stack[((hsi*55+2300)*1+lsi)*1]), &(inteval->stack[((hsi*45+2355)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+8727)*1+lsi)*1]), &(inteval->stack[((hsi*135+8592)*1+lsi)*1]), &(inteval->stack[((hsi*108+8484)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+8943)*1+lsi)*1]), &(inteval->stack[((hsi*66+2234)*1+lsi)*1]), &(inteval->stack[((hsi*55+2300)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9108)*1+lsi)*1]), &(inteval->stack[((hsi*165+8943)*1+lsi)*1]), &(inteval->stack[((hsi*135+8592)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+9378)*1+lsi)*1]), &(inteval->stack[((hsi*270+9108)*1+lsi)*1]), &(inteval->stack[((hsi*216+8727)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+9738)*1+lsi)*1]), &(inteval->stack[((hsi*36+2400)*1+lsi)*1]), &(inteval->stack[((hsi*28+2436)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9822)*1+lsi)*1]), &(inteval->stack[((hsi*108+8484)*1+lsi)*1]), &(inteval->stack[((hsi*84+9738)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2300)*1+lsi)*1]), &(inteval->stack[((hsi*216+8727)*1+lsi)*1]), &(inteval->stack[((hsi*168+9822)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+9738)*1+lsi)*1]), &(inteval->stack[((hsi*360+9378)*1+lsi)*1]), &(inteval->stack[((hsi*280+2300)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2300)*1+lsi)*1]), &(inteval->stack[((hsi*78+2156)*1+lsi)*1]), &(inteval->stack[((hsi*66+2234)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+8484)*1+lsi)*1]), &(inteval->stack[((hsi*198+2300)*1+lsi)*1]), &(inteval->stack[((hsi*165+8943)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2156)*1+lsi)*1]), &(inteval->stack[((hsi*330+8484)*1+lsi)*1]), &(inteval->stack[((hsi*270+9108)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+8484)*1+lsi)*1]), &(inteval->stack[((hsi*450+2156)*1+lsi)*1]), &(inteval->stack[((hsi*360+9378)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+6888)*1+lsi)*1]), &(inteval->stack[((hsi*540+8484)*1+lsi)*1]), &(inteval->stack[((hsi*420+9738)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9024)*1+lsi)*1]), &(inteval->stack[((hsi*45+2047)*1+lsi)*1]), &(inteval->stack[((hsi*36+2092)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2156)*1+lsi)*1]), &(inteval->stack[((hsi*55+1992)*1+lsi)*1]), &(inteval->stack[((hsi*45+2047)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+9132)*1+lsi)*1]), &(inteval->stack[((hsi*135+2156)*1+lsi)*1]), &(inteval->stack[((hsi*108+9024)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+2291)*1+lsi)*1]), &(inteval->stack[((hsi*66+1926)*1+lsi)*1]), &(inteval->stack[((hsi*55+1992)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9348)*1+lsi)*1]), &(inteval->stack[((hsi*165+2291)*1+lsi)*1]), &(inteval->stack[((hsi*135+2156)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+10836)*1+lsi)*1]), &(inteval->stack[((hsi*270+9348)*1+lsi)*1]), &(inteval->stack[((hsi*216+9132)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2456)*1+lsi)*1]), &(inteval->stack[((hsi*36+2092)*1+lsi)*1]), &(inteval->stack[((hsi*28+2128)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1992)*1+lsi)*1]), &(inteval->stack[((hsi*108+9024)*1+lsi)*1]), &(inteval->stack[((hsi*84+2456)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2456)*1+lsi)*1]), &(inteval->stack[((hsi*216+9132)*1+lsi)*1]), &(inteval->stack[((hsi*168+1992)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+11196)*1+lsi)*1]), &(inteval->stack[((hsi*360+10836)*1+lsi)*1]), &(inteval->stack[((hsi*280+2456)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9024)*1+lsi)*1]), &(inteval->stack[((hsi*78+1848)*1+lsi)*1]), &(inteval->stack[((hsi*66+1926)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+1848)*1+lsi)*1]), &(inteval->stack[((hsi*198+9024)*1+lsi)*1]), &(inteval->stack[((hsi*165+2291)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2178)*1+lsi)*1]), &(inteval->stack[((hsi*330+1848)*1+lsi)*1]), &(inteval->stack[((hsi*270+9348)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+9024)*1+lsi)*1]), &(inteval->stack[((hsi*450+2178)*1+lsi)*1]), &(inteval->stack[((hsi*360+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+6300)*1+lsi)*1]), &(inteval->stack[((hsi*540+9024)*1+lsi)*1]), &(inteval->stack[((hsi*420+11196)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1848)*1+lsi)*1]), &(inteval->stack[((hsi*45+1739)*1+lsi)*1]), &(inteval->stack[((hsi*36+1784)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1956)*1+lsi)*1]), &(inteval->stack[((hsi*55+1684)*1+lsi)*1]), &(inteval->stack[((hsi*45+1739)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+2091)*1+lsi)*1]), &(inteval->stack[((hsi*135+1956)*1+lsi)*1]), &(inteval->stack[((hsi*108+1848)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+2307)*1+lsi)*1]), &(inteval->stack[((hsi*66+1618)*1+lsi)*1]), &(inteval->stack[((hsi*55+1684)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+10836)*1+lsi)*1]), &(inteval->stack[((hsi*165+2307)*1+lsi)*1]), &(inteval->stack[((hsi*135+1956)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*270+10836)*1+lsi)*1]), &(inteval->stack[((hsi*216+2091)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2472)*1+lsi)*1]), &(inteval->stack[((hsi*36+1784)*1+lsi)*1]), &(inteval->stack[((hsi*28+1820)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2556)*1+lsi)*1]), &(inteval->stack[((hsi*108+1848)*1+lsi)*1]), &(inteval->stack[((hsi*84+2472)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+1684)*1+lsi)*1]), &(inteval->stack[((hsi*216+2091)*1+lsi)*1]), &(inteval->stack[((hsi*168+2556)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+11976)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*280+1684)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1684)*1+lsi)*1]), &(inteval->stack[((hsi*78+1540)*1+lsi)*1]), &(inteval->stack[((hsi*66+1618)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+1882)*1+lsi)*1]), &(inteval->stack[((hsi*198+1684)*1+lsi)*1]), &(inteval->stack[((hsi*165+2307)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2212)*1+lsi)*1]), &(inteval->stack[((hsi*330+1882)*1+lsi)*1]), &(inteval->stack[((hsi*270+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+1540)*1+lsi)*1]), &(inteval->stack[((hsi*450+2212)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+5712)*1+lsi)*1]), &(inteval->stack[((hsi*540+1540)*1+lsi)*1]), &(inteval->stack[((hsi*420+11976)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2080)*1+lsi)*1]), &(inteval->stack[((hsi*45+1431)*1+lsi)*1]), &(inteval->stack[((hsi*36+1476)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2188)*1+lsi)*1]), &(inteval->stack[((hsi*55+1376)*1+lsi)*1]), &(inteval->stack[((hsi*45+1431)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+2323)*1+lsi)*1]), &(inteval->stack[((hsi*135+2188)*1+lsi)*1]), &(inteval->stack[((hsi*108+2080)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+11616)*1+lsi)*1]), &(inteval->stack[((hsi*66+1310)*1+lsi)*1]), &(inteval->stack[((hsi*55+1376)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+10836)*1+lsi)*1]), &(inteval->stack[((hsi*165+11616)*1+lsi)*1]), &(inteval->stack[((hsi*135+2188)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+12396)*1+lsi)*1]), &(inteval->stack[((hsi*270+10836)*1+lsi)*1]), &(inteval->stack[((hsi*216+2323)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2539)*1+lsi)*1]), &(inteval->stack[((hsi*36+1476)*1+lsi)*1]), &(inteval->stack[((hsi*28+1512)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11781)*1+lsi)*1]), &(inteval->stack[((hsi*108+2080)*1+lsi)*1]), &(inteval->stack[((hsi*84+2539)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+12756)*1+lsi)*1]), &(inteval->stack[((hsi*216+2323)*1+lsi)*1]), &(inteval->stack[((hsi*168+11781)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+2080)*1+lsi)*1]), &(inteval->stack[((hsi*360+12396)*1+lsi)*1]), &(inteval->stack[((hsi*280+12756)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2500)*1+lsi)*1]), &(inteval->stack[((hsi*78+1232)*1+lsi)*1]), &(inteval->stack[((hsi*66+1310)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+12756)*1+lsi)*1]), &(inteval->stack[((hsi*198+2500)*1+lsi)*1]), &(inteval->stack[((hsi*165+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+13086)*1+lsi)*1]), &(inteval->stack[((hsi*330+12756)*1+lsi)*1]), &(inteval->stack[((hsi*270+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+13536)*1+lsi)*1]), &(inteval->stack[((hsi*450+13086)*1+lsi)*1]), &(inteval->stack[((hsi*360+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+5124)*1+lsi)*1]), &(inteval->stack[((hsi*540+13536)*1+lsi)*1]), &(inteval->stack[((hsi*420+2080)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*45+1123)*1+lsi)*1]), &(inteval->stack[((hsi*36+1168)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12504)*1+lsi)*1]), &(inteval->stack[((hsi*55+1068)*1+lsi)*1]), &(inteval->stack[((hsi*45+1123)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+12639)*1+lsi)*1]), &(inteval->stack[((hsi*135+12504)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12855)*1+lsi)*1]), &(inteval->stack[((hsi*66+1002)*1+lsi)*1]), &(inteval->stack[((hsi*55+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+13020)*1+lsi)*1]), &(inteval->stack[((hsi*165+12855)*1+lsi)*1]), &(inteval->stack[((hsi*135+12504)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*270+13020)*1+lsi)*1]), &(inteval->stack[((hsi*216+12639)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+10836)*1+lsi)*1]), &(inteval->stack[((hsi*36+1168)*1+lsi)*1]), &(inteval->stack[((hsi*28+1204)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1068)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*84+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+10836)*1+lsi)*1]), &(inteval->stack[((hsi*216+12639)*1+lsi)*1]), &(inteval->stack[((hsi*168+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+1068)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*280+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+12396)*1+lsi)*1]), &(inteval->stack[((hsi*78+924)*1+lsi)*1]), &(inteval->stack[((hsi*66+1002)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+10836)*1+lsi)*1]), &(inteval->stack[((hsi*198+12396)*1+lsi)*1]), &(inteval->stack[((hsi*165+12855)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*330+10836)*1+lsi)*1]), &(inteval->stack[((hsi*270+13020)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+12846)*1+lsi)*1]), &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+4536)*1+lsi)*1]), &(inteval->stack[((hsi*540+12846)*1+lsi)*1]), &(inteval->stack[((hsi*420+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*45+815)*1+lsi)*1]), &(inteval->stack[((hsi*36+860)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11616)*1+lsi)*1]), &(inteval->stack[((hsi*55+760)*1+lsi)*1]), &(inteval->stack[((hsi*45+815)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+10836)*1+lsi)*1]), &(inteval->stack[((hsi*135+11616)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12504)*1+lsi)*1]), &(inteval->stack[((hsi*66+694)*1+lsi)*1]), &(inteval->stack[((hsi*55+760)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2500)*1+lsi)*1]), &(inteval->stack[((hsi*165+12504)*1+lsi)*1]), &(inteval->stack[((hsi*135+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*270+2500)*1+lsi)*1]), &(inteval->stack[((hsi*216+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12669)*1+lsi)*1]), &(inteval->stack[((hsi*36+860)*1+lsi)*1]), &(inteval->stack[((hsi*28+896)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+760)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*84+12669)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14076)*1+lsi)*1]), &(inteval->stack[((hsi*216+10836)*1+lsi)*1]), &(inteval->stack[((hsi*168+760)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+14356)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*280+14076)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+10836)*1+lsi)*1]), &(inteval->stack[((hsi*78+616)*1+lsi)*1]), &(inteval->stack[((hsi*66+694)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+616)*1+lsi)*1]), &(inteval->stack[((hsi*198+10836)*1+lsi)*1]), &(inteval->stack[((hsi*165+12504)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*330+616)*1+lsi)*1]), &(inteval->stack[((hsi*270+2500)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+14776)*1+lsi)*1]), &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+3948)*1+lsi)*1]), &(inteval->stack[((hsi*540+14776)*1+lsi)*1]), &(inteval->stack[((hsi*420+14356)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+616)*1+lsi)*1]), &(inteval->stack[((hsi*45+507)*1+lsi)*1]), &(inteval->stack[((hsi*36+552)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12396)*1+lsi)*1]), &(inteval->stack[((hsi*55+452)*1+lsi)*1]), &(inteval->stack[((hsi*45+507)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+11616)*1+lsi)*1]), &(inteval->stack[((hsi*135+12396)*1+lsi)*1]), &(inteval->stack[((hsi*108+616)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+10836)*1+lsi)*1]), &(inteval->stack[((hsi*66+386)*1+lsi)*1]), &(inteval->stack[((hsi*55+452)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+724)*1+lsi)*1]), &(inteval->stack[((hsi*165+10836)*1+lsi)*1]), &(inteval->stack[((hsi*135+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+12396)*1+lsi)*1]), &(inteval->stack[((hsi*270+724)*1+lsi)*1]), &(inteval->stack[((hsi*216+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+14076)*1+lsi)*1]), &(inteval->stack[((hsi*36+552)*1+lsi)*1]), &(inteval->stack[((hsi*28+588)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2500)*1+lsi)*1]), &(inteval->stack[((hsi*108+616)*1+lsi)*1]), &(inteval->stack[((hsi*84+14076)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14076)*1+lsi)*1]), &(inteval->stack[((hsi*216+11616)*1+lsi)*1]), &(inteval->stack[((hsi*168+2500)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+15316)*1+lsi)*1]), &(inteval->stack[((hsi*360+12396)*1+lsi)*1]), &(inteval->stack[((hsi*280+14076)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+11616)*1+lsi)*1]), &(inteval->stack[((hsi*78+308)*1+lsi)*1]), &(inteval->stack[((hsi*66+386)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+308)*1+lsi)*1]), &(inteval->stack[((hsi*198+11616)*1+lsi)*1]), &(inteval->stack[((hsi*165+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+15736)*1+lsi)*1]), &(inteval->stack[((hsi*330+308)*1+lsi)*1]), &(inteval->stack[((hsi*270+724)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+308)*1+lsi)*1]), &(inteval->stack[((hsi*450+15736)*1+lsi)*1]), &(inteval->stack[((hsi*360+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+3360)*1+lsi)*1]), &(inteval->stack[((hsi*540+308)*1+lsi)*1]), &(inteval->stack[((hsi*420+15316)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]), &(inteval->stack[((hsi*36+244)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11616)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+10836)*1+lsi)*1]), &(inteval->stack[((hsi*135+11616)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+12504)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+14076)*1+lsi)*1]), &(inteval->stack[((hsi*165+12504)*1+lsi)*1]), &(inteval->stack[((hsi*135+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*270+14076)*1+lsi)*1]), &(inteval->stack[((hsi*216+10836)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2500)*1+lsi)*1]), &(inteval->stack[((hsi*36+244)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+848)*1+lsi)*1]), &(inteval->stack[((hsi*108+12396)*1+lsi)*1]), &(inteval->stack[((hsi*84+2500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15736)*1+lsi)*1]), &(inteval->stack[((hsi*216+10836)*1+lsi)*1]), &(inteval->stack[((hsi*168+848)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+16016)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]), &(inteval->stack[((hsi*280+15736)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+10836)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+16436)*1+lsi)*1]), &(inteval->stack[((hsi*198+10836)*1+lsi)*1]), &(inteval->stack[((hsi*165+12504)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*330+16436)*1+lsi)*1]), &(inteval->stack[((hsi*270+14076)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+16436)*1+lsi)*1]), &(inteval->stack[((hsi*450+12396)*1+lsi)*1]), &(inteval->stack[((hsi*360+11616)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+2772)*1+lsi)*1]), &(inteval->stack[((hsi*540+16436)*1+lsi)*1]), &(inteval->stack[((hsi*420+16016)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*588+2772)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*588+3360)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*588+3948)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*588+4536)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*588+5124)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*588+5712)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*588+6300)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*588+6888)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*588+7476)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
