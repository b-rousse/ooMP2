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
#include <HRRPart0bra0ket0pp.h>
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
#include <_aB_P__0__I__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__I__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2070)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+5850)*1+lsi)*1]), &(inteval->stack[((hsi*135+1743)*1+lsi)*1]), &(inteval->stack[((hsi*108+1878)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+6174)*1+lsi)*1]), &(inteval->stack[((hsi*165+1578)*1+lsi)*1]), &(inteval->stack[((hsi*135+1743)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+6579)*1+lsi)*1]), &(inteval->stack[((hsi*405+6174)*1+lsi)*1]), &(inteval->stack[((hsi*324+5850)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7227)*1+lsi)*1]), &(inteval->stack[((hsi*108+1878)*1+lsi)*1]), &(inteval->stack[((hsi*84+1986)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+7479)*1+lsi)*1]), &(inteval->stack[((hsi*324+5850)*1+lsi)*1]), &(inteval->stack[((hsi*252+7227)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+7983)*1+lsi)*1]), &(inteval->stack[((hsi*648+6579)*1+lsi)*1]), &(inteval->stack[((hsi*504+7479)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+7227)*1+lsi)*1]), &(inteval->stack[((hsi*198+1380)*1+lsi)*1]), &(inteval->stack[((hsi*165+1578)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+8823)*1+lsi)*1]), &(inteval->stack[((hsi*495+7227)*1+lsi)*1]), &(inteval->stack[((hsi*405+6174)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+9633)*1+lsi)*1]), &(inteval->stack[((hsi*810+8823)*1+lsi)*1]), &(inteval->stack[((hsi*648+6579)*1+lsi)*1]),3);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*1260+5850)*1+lsi)*1]), &(inteval->stack[((hsi*1080+9633)*1+lsi)*1]), &(inteval->stack[((hsi*840+7983)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+1380)*1+lsi)*1]), &(inteval->stack[((hsi*270+726)*1+lsi)*1]), &(inteval->stack[((hsi*216+996)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+7110)*1+lsi)*1]), &(inteval->stack[((hsi*330+396)*1+lsi)*1]), &(inteval->stack[((hsi*270+726)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+7920)*1+lsi)*1]), &(inteval->stack[((hsi*810+7110)*1+lsi)*1]), &(inteval->stack[((hsi*648+1380)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+9216)*1+lsi)*1]), &(inteval->stack[((hsi*216+996)*1+lsi)*1]), &(inteval->stack[((hsi*168+1212)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+9720)*1+lsi)*1]), &(inteval->stack[((hsi*648+1380)*1+lsi)*1]), &(inteval->stack[((hsi*504+9216)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+10728)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7920)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9720)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+9216)*1+lsi)*1]), &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+396)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*990+9216)*1+lsi)*1]), &(inteval->stack[((hsi*810+7110)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+12408)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7920)*1+lsi)*1]),6);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*2520+7110)*1+lsi)*1]), &(inteval->stack[((hsi*2160+12408)*1+lsi)*1]), &(inteval->stack[((hsi*1680+10728)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*3780+2070)*1+lsi)*1]), &(inteval->stack[((hsi*2520+7110)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5850)*1+lsi)*1]),420);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3780+2070)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
