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
#include <HRRPart1bra0ket0ip.h>
#include <_aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4096)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+11656)*1+lsi)*1]), &(inteval->stack[((hsi*588+3088)*1+lsi)*1]), &(inteval->stack[((hsi*420+3676)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+12916)*1+lsi)*1]), &(inteval->stack[((hsi*784+2304)*1+lsi)*1]), &(inteval->stack[((hsi*588+3088)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+14680)*1+lsi)*1]), &(inteval->stack[((hsi*1764+12916)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11656)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+11656)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+1764)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+17200)*1+lsi)*1]), &(inteval->stack[((hsi*2268+1764)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7560+4096)*1+lsi)*1]), &(inteval->stack[((hsi*3240+17200)*1+lsi)*1]), &(inteval->stack[((hsi*2520+14680)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7560+4096)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
