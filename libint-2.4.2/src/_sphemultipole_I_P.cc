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
#include <HRRPart0bra0ket0ip.h>
#include <_sphemultipole_I_P_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_I_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,576)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1248)*1+lsi)*1]), &(inteval->stack[((hsi*36+512)*1+lsi)*1]), &(inteval->stack[((hsi*28+548)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1164)*1+lsi)*1]), &(inteval->stack[((hsi*36+448)*1+lsi)*1]), &(inteval->stack[((hsi*28+484)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+384)*1+lsi)*1]), &(inteval->stack[((hsi*28+420)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+996)*1+lsi)*1]), &(inteval->stack[((hsi*36+320)*1+lsi)*1]), &(inteval->stack[((hsi*28+356)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+912)*1+lsi)*1]), &(inteval->stack[((hsi*36+256)*1+lsi)*1]), &(inteval->stack[((hsi*28+292)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+828)*1+lsi)*1]), &(inteval->stack[((hsi*36+192)*1+lsi)*1]), &(inteval->stack[((hsi*28+228)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+744)*1+lsi)*1]), &(inteval->stack[((hsi*36+128)*1+lsi)*1]), &(inteval->stack[((hsi*28+164)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+660)*1+lsi)*1]), &(inteval->stack[((hsi*36+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+100)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+576)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*84+576)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*84+660)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*84+744)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*84+828)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*84+912)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*84+996)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*84+1080)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*84+1164)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*84+1248)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
