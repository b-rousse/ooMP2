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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__I__1___TwoPRep_D__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_D__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25070)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_D__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+95630)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14706)*1+lsi)*1]), &(inteval->stack[((hsi*1296+16326)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+99518)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12726)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14706)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+104378)*1+lsi)*1]), &(inteval->stack[((hsi*4860+99518)*1+lsi)*1]), &(inteval->stack[((hsi*3888+95630)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+112154)*1+lsi)*1]), &(inteval->stack[((hsi*1296+16326)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17622)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+115178)*1+lsi)*1]), &(inteval->stack[((hsi*3888+95630)*1+lsi)*1]), &(inteval->stack[((hsi*3024+112154)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+121226)*1+lsi)*1]), &(inteval->stack[((hsi*7776+104378)*1+lsi)*1]), &(inteval->stack[((hsi*6048+115178)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+112154)*1+lsi)*1]), &(inteval->stack[((hsi*2376+10350)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12726)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+131306)*1+lsi)*1]), &(inteval->stack[((hsi*5940+112154)*1+lsi)*1]), &(inteval->stack[((hsi*4860+99518)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+141026)*1+lsi)*1]), &(inteval->stack[((hsi*9720+131306)*1+lsi)*1]), &(inteval->stack[((hsi*7776+104378)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+95630)*1+lsi)*1]), &(inteval->stack[((hsi*12960+141026)*1+lsi)*1]), &(inteval->stack[((hsi*10080+121226)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+10350)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22018)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23278)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+13374)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20478)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22018)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+110750)*1+lsi)*1]), &(inteval->stack[((hsi*3780+13374)*1+lsi)*1]), &(inteval->stack[((hsi*3024+10350)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+116798)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23278)*1+lsi)*1]), &(inteval->stack[((hsi*784+24286)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+119150)*1+lsi)*1]), &(inteval->stack[((hsi*3024+10350)*1+lsi)*1]), &(inteval->stack[((hsi*2352+116798)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+123854)*1+lsi)*1]), &(inteval->stack[((hsi*6048+110750)*1+lsi)*1]), &(inteval->stack[((hsi*4704+119150)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+116798)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18630)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20478)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+17154)*1+lsi)*1]), &(inteval->stack[((hsi*4620+116798)*1+lsi)*1]), &(inteval->stack[((hsi*3780+13374)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+131694)*1+lsi)*1]), &(inteval->stack[((hsi*7560+17154)*1+lsi)*1]), &(inteval->stack[((hsi*6048+110750)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+10350)*1+lsi)*1]), &(inteval->stack[((hsi*10080+131694)*1+lsi)*1]), &(inteval->stack[((hsi*7840+123854)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*35280+110750)*1+lsi)*1]), &(inteval->stack[((hsi*15120+95630)*1+lsi)*1]), &(inteval->stack[((hsi*11760+10350)*1+lsi)*1]),420);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+10350)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+15210)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+146030)*1+lsi)*1]), &(inteval->stack[((hsi*6075+15210)*1+lsi)*1]), &(inteval->stack[((hsi*4860+10350)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+21285)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9090)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+155750)*1+lsi)*1]), &(inteval->stack[((hsi*4860+10350)*1+lsi)*1]), &(inteval->stack[((hsi*3780+21285)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+163310)*1+lsi)*1]), &(inteval->stack[((hsi*9720+146030)*1+lsi)*1]), &(inteval->stack[((hsi*7560+155750)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+5445)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+175910)*1+lsi)*1]), &(inteval->stack[((hsi*7425+5445)*1+lsi)*1]), &(inteval->stack[((hsi*6075+15210)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+0)*1+lsi)*1]), &(inteval->stack[((hsi*12150+175910)*1+lsi)*1]), &(inteval->stack[((hsi*9720+146030)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+175910)*1+lsi)*1]), &(inteval->stack[((hsi*16200+0)*1+lsi)*1]), &(inteval->stack[((hsi*12600+163310)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*45360+194810)*1+lsi)*1]), &(inteval->stack[((hsi*18900+175910)*1+lsi)*1]), &(inteval->stack[((hsi*15120+95630)*1+lsi)*1]),420);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*70560+25070)*1+lsi)*1]), &(inteval->stack[((hsi*45360+194810)*1+lsi)*1]), &(inteval->stack[((hsi*35280+110750)*1+lsi)*1]),420);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*70560+25070)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
