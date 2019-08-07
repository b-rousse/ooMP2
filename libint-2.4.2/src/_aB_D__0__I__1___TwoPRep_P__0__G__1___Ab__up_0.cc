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
#include <HRRPart0bra0ket0dp.h>
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
#include <_aB_D__0__I__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__I__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3680)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+11240)*1+lsi)*1]), &(inteval->stack[((hsi*270+3026)*1+lsi)*1]), &(inteval->stack[((hsi*216+3296)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+11888)*1+lsi)*1]), &(inteval->stack[((hsi*330+2696)*1+lsi)*1]), &(inteval->stack[((hsi*270+3026)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+12698)*1+lsi)*1]), &(inteval->stack[((hsi*810+11888)*1+lsi)*1]), &(inteval->stack[((hsi*648+11240)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+13994)*1+lsi)*1]), &(inteval->stack[((hsi*216+3296)*1+lsi)*1]), &(inteval->stack[((hsi*168+3512)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+14498)*1+lsi)*1]), &(inteval->stack[((hsi*648+11240)*1+lsi)*1]), &(inteval->stack[((hsi*504+13994)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+15506)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12698)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14498)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+13994)*1+lsi)*1]), &(inteval->stack[((hsi*396+2300)*1+lsi)*1]), &(inteval->stack[((hsi*330+2696)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+17186)*1+lsi)*1]), &(inteval->stack[((hsi*990+13994)*1+lsi)*1]), &(inteval->stack[((hsi*810+11888)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+18806)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17186)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12698)*1+lsi)*1]),6);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*2520+11240)*1+lsi)*1]), &(inteval->stack[((hsi*2160+18806)*1+lsi)*1]), &(inteval->stack[((hsi*1680+15506)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+2300)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]), &(inteval->stack[((hsi*360+1660)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+13760)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]), &(inteval->stack[((hsi*450+1210)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+15110)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13760)*1+lsi)*1]), &(inteval->stack[((hsi*1080+2300)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+17270)*1+lsi)*1]), &(inteval->stack[((hsi*360+1660)*1+lsi)*1]), &(inteval->stack[((hsi*280+2020)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+18110)*1+lsi)*1]), &(inteval->stack[((hsi*1080+2300)*1+lsi)*1]), &(inteval->stack[((hsi*840+17270)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+19790)*1+lsi)*1]), &(inteval->stack[((hsi*2160+15110)*1+lsi)*1]), &(inteval->stack[((hsi*1680+18110)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+17270)*1+lsi)*1]), &(inteval->stack[((hsi*660+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+660)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+0)*1+lsi)*1]), &(inteval->stack[((hsi*1650+17270)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13760)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+22590)*1+lsi)*1]), &(inteval->stack[((hsi*2700+0)*1+lsi)*1]), &(inteval->stack[((hsi*2160+15110)*1+lsi)*1]),10);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*4200+13760)*1+lsi)*1]), &(inteval->stack[((hsi*3600+22590)*1+lsi)*1]), &(inteval->stack[((hsi*2800+19790)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*7560+3680)*1+lsi)*1]), &(inteval->stack[((hsi*4200+13760)*1+lsi)*1]), &(inteval->stack[((hsi*2520+11240)*1+lsi)*1]),420);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7560+3680)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
