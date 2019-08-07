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
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kp.h>
#include <_sphemultipole_D_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_D_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,981)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2493)*1+lsi)*1]), &(inteval->stack[((hsi*36+917)*1+lsi)*1]), &(inteval->stack[((hsi*28+953)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2577)*1+lsi)*1]), &(inteval->stack[((hsi*45+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+917)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2325)*1+lsi)*1]), &(inteval->stack[((hsi*108+2577)*1+lsi)*1]), &(inteval->stack[((hsi*84+2493)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+808)*1+lsi)*1]), &(inteval->stack[((hsi*28+844)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2685)*1+lsi)*1]), &(inteval->stack[((hsi*45+763)*1+lsi)*1]), &(inteval->stack[((hsi*36+808)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2157)*1+lsi)*1]), &(inteval->stack[((hsi*108+2685)*1+lsi)*1]), &(inteval->stack[((hsi*84+872)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+763)*1+lsi)*1]), &(inteval->stack[((hsi*36+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+735)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2793)*1+lsi)*1]), &(inteval->stack[((hsi*45+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+699)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1989)*1+lsi)*1]), &(inteval->stack[((hsi*108+2793)*1+lsi)*1]), &(inteval->stack[((hsi*84+763)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]), &(inteval->stack[((hsi*28+626)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2901)*1+lsi)*1]), &(inteval->stack[((hsi*45+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1821)*1+lsi)*1]), &(inteval->stack[((hsi*108+2901)*1+lsi)*1]), &(inteval->stack[((hsi*84+654)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]), &(inteval->stack[((hsi*28+517)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3009)*1+lsi)*1]), &(inteval->stack[((hsi*45+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1653)*1+lsi)*1]), &(inteval->stack[((hsi*108+3009)*1+lsi)*1]), &(inteval->stack[((hsi*84+545)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]), &(inteval->stack[((hsi*28+408)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3117)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1485)*1+lsi)*1]), &(inteval->stack[((hsi*108+3117)*1+lsi)*1]), &(inteval->stack[((hsi*84+436)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]), &(inteval->stack[((hsi*28+299)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3225)*1+lsi)*1]), &(inteval->stack[((hsi*45+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1317)*1+lsi)*1]), &(inteval->stack[((hsi*108+3225)*1+lsi)*1]), &(inteval->stack[((hsi*84+327)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]), &(inteval->stack[((hsi*28+190)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1149)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+218)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3441)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+981)*1+lsi)*1]), &(inteval->stack[((hsi*108+3441)*1+lsi)*1]), &(inteval->stack[((hsi*84+109)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*168+981)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*168+1149)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*168+1317)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*168+1485)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*168+1653)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*168+1821)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*168+1989)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*168+2157)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*168+2325)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
