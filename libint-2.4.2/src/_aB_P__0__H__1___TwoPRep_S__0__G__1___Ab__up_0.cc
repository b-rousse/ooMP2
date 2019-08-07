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
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,555)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1500)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+1752)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+2076)*1+lsi)*1]), &(inteval->stack[((hsi*324+1752)*1+lsi)*1]), &(inteval->stack[((hsi*252+1500)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+2580)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]), &(inteval->stack[((hsi*63+492)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+2769)*1+lsi)*1]), &(inteval->stack[((hsi*252+1500)*1+lsi)*1]), &(inteval->stack[((hsi*189+2580)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+3147)*1+lsi)*1]), &(inteval->stack[((hsi*504+2076)*1+lsi)*1]), &(inteval->stack[((hsi*378+2769)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+2580)*1+lsi)*1]), &(inteval->stack[((hsi*165+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+3777)*1+lsi)*1]), &(inteval->stack[((hsi*405+2580)*1+lsi)*1]), &(inteval->stack[((hsi*324+1752)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+4425)*1+lsi)*1]), &(inteval->stack[((hsi*648+3777)*1+lsi)*1]), &(inteval->stack[((hsi*504+2076)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*945+555)*1+lsi)*1]), &(inteval->stack[((hsi*840+4425)*1+lsi)*1]), &(inteval->stack[((hsi*630+3147)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+555)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
