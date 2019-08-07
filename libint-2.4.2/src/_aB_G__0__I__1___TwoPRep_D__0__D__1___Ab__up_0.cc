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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6976)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+22096)*1+lsi)*1]), &(inteval->stack[((hsi*756+3888)*1+lsi)*1]), &(inteval->stack[((hsi*540+4644)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+23716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2880)*1+lsi)*1]), &(inteval->stack[((hsi*756+3888)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+25984)*1+lsi)*1]), &(inteval->stack[((hsi*2268+23716)*1+lsi)*1]), &(inteval->stack[((hsi*1620+22096)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+22096)*1+lsi)*1]), &(inteval->stack[((hsi*588+5968)*1+lsi)*1]), &(inteval->stack[((hsi*420+6556)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+23356)*1+lsi)*1]), &(inteval->stack[((hsi*784+5184)*1+lsi)*1]), &(inteval->stack[((hsi*588+5968)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+2880)*1+lsi)*1]), &(inteval->stack[((hsi*1764+23356)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22096)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7560+29224)*1+lsi)*1]), &(inteval->stack[((hsi*3240+25984)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2880)*1+lsi)*1]),90);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+2880)*1+lsi)*1]), &(inteval->stack[((hsi*945+1260)*1+lsi)*1]), &(inteval->stack[((hsi*675+2205)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+22096)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+1260)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+36784)*1+lsi)*1]), &(inteval->stack[((hsi*2835+22096)*1+lsi)*1]), &(inteval->stack[((hsi*2025+2880)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9720+40834)*1+lsi)*1]), &(inteval->stack[((hsi*4050+36784)*1+lsi)*1]), &(inteval->stack[((hsi*3240+25984)*1+lsi)*1]),90);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*15120+6976)*1+lsi)*1]), &(inteval->stack[((hsi*9720+40834)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29224)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15120+6976)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
