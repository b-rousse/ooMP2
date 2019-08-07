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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_WI__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void eri3_aB_WI__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8624)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_WI__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+25088)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5572)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6832)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+28112)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4032)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5572)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+31892)*1+lsi)*1]), &(inteval->stack[((hsi*3780+28112)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25088)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+37940)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2184)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4032)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+42560)*1+lsi)*1]), &(inteval->stack[((hsi*4620+37940)*1+lsi)*1]), &(inteval->stack[((hsi*3780+28112)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+50120)*1+lsi)*1]), &(inteval->stack[((hsi*7560+42560)*1+lsi)*1]), &(inteval->stack[((hsi*6048+31892)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+28112)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6832)*1+lsi)*1]), &(inteval->stack[((hsi*784+7840)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+60200)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25088)*1+lsi)*1]), &(inteval->stack[((hsi*2352+28112)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+64904)*1+lsi)*1]), &(inteval->stack[((hsi*6048+31892)*1+lsi)*1]), &(inteval->stack[((hsi*4704+60200)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+25088)*1+lsi)*1]), &(inteval->stack[((hsi*10080+50120)*1+lsi)*1]), &(inteval->stack[((hsi*7840+64904)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+60200)*1+lsi)*1]), &(inteval->stack[((hsi*2184+0)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2184)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+65744)*1+lsi)*1]), &(inteval->stack[((hsi*5544+60200)*1+lsi)*1]), &(inteval->stack[((hsi*4620+37940)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+74984)*1+lsi)*1]), &(inteval->stack[((hsi*9240+65744)*1+lsi)*1]), &(inteval->stack[((hsi*7560+42560)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+87584)*1+lsi)*1]), &(inteval->stack[((hsi*12600+74984)*1+lsi)*1]), &(inteval->stack[((hsi*10080+50120)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+8624)*1+lsi)*1]), &(inteval->stack[((hsi*15120+87584)*1+lsi)*1]), &(inteval->stack[((hsi*11760+25088)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*16464+8624)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
