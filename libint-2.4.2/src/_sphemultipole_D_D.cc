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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <_sphemultipole_D_D_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_D_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,279)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+603)*1+lsi)*1]), &(inteval->stack[((hsi*10+263)*1+lsi)*1]), &(inteval->stack[((hsi*6+273)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+621)*1+lsi)*1]), &(inteval->stack[((hsi*15+248)*1+lsi)*1]), &(inteval->stack[((hsi*10+263)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+567)*1+lsi)*1]), &(inteval->stack[((hsi*30+621)*1+lsi)*1]), &(inteval->stack[((hsi*18+603)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+248)*1+lsi)*1]), &(inteval->stack[((hsi*10+232)*1+lsi)*1]), &(inteval->stack[((hsi*6+242)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+651)*1+lsi)*1]), &(inteval->stack[((hsi*15+217)*1+lsi)*1]), &(inteval->stack[((hsi*10+232)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+531)*1+lsi)*1]), &(inteval->stack[((hsi*30+651)*1+lsi)*1]), &(inteval->stack[((hsi*18+248)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+217)*1+lsi)*1]), &(inteval->stack[((hsi*10+201)*1+lsi)*1]), &(inteval->stack[((hsi*6+211)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+681)*1+lsi)*1]), &(inteval->stack[((hsi*15+186)*1+lsi)*1]), &(inteval->stack[((hsi*10+201)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+495)*1+lsi)*1]), &(inteval->stack[((hsi*30+681)*1+lsi)*1]), &(inteval->stack[((hsi*18+217)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+186)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]), &(inteval->stack[((hsi*6+180)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+711)*1+lsi)*1]), &(inteval->stack[((hsi*15+155)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+459)*1+lsi)*1]), &(inteval->stack[((hsi*30+711)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+155)*1+lsi)*1]), &(inteval->stack[((hsi*10+139)*1+lsi)*1]), &(inteval->stack[((hsi*6+149)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+741)*1+lsi)*1]), &(inteval->stack[((hsi*15+124)*1+lsi)*1]), &(inteval->stack[((hsi*10+139)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+423)*1+lsi)*1]), &(inteval->stack[((hsi*30+741)*1+lsi)*1]), &(inteval->stack[((hsi*18+155)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+124)*1+lsi)*1]), &(inteval->stack[((hsi*10+108)*1+lsi)*1]), &(inteval->stack[((hsi*6+118)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+771)*1+lsi)*1]), &(inteval->stack[((hsi*15+93)*1+lsi)*1]), &(inteval->stack[((hsi*10+108)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+387)*1+lsi)*1]), &(inteval->stack[((hsi*30+771)*1+lsi)*1]), &(inteval->stack[((hsi*18+124)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+93)*1+lsi)*1]), &(inteval->stack[((hsi*10+77)*1+lsi)*1]), &(inteval->stack[((hsi*6+87)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+801)*1+lsi)*1]), &(inteval->stack[((hsi*15+62)*1+lsi)*1]), &(inteval->stack[((hsi*10+77)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+351)*1+lsi)*1]), &(inteval->stack[((hsi*30+801)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+62)*1+lsi)*1]), &(inteval->stack[((hsi*10+46)*1+lsi)*1]), &(inteval->stack[((hsi*6+56)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+831)*1+lsi)*1]), &(inteval->stack[((hsi*15+31)*1+lsi)*1]), &(inteval->stack[((hsi*10+46)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+315)*1+lsi)*1]), &(inteval->stack[((hsi*30+831)*1+lsi)*1]), &(inteval->stack[((hsi*18+62)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+31)*1+lsi)*1]), &(inteval->stack[((hsi*10+15)*1+lsi)*1]), &(inteval->stack[((hsi*6+25)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+861)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*10+15)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+279)*1+lsi)*1]), &(inteval->stack[((hsi*30+861)*1+lsi)*1]), &(inteval->stack[((hsi*18+31)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36+279)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*36+315)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*36+351)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*36+387)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*36+423)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*36+459)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*36+495)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*36+531)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*36+567)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
