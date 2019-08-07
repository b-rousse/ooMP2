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
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hf.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kp.h>
#include <_elecpot_F_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpot_F_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,130)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_F_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+340)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+424)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+487)*1+lsi)*1]), &(inteval->stack[((hsi*84+340)*1+lsi)*1]), &(inteval->stack[((hsi*63+424)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+613)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+721)*1+lsi)*1]), &(inteval->stack[((hsi*108+613)*1+lsi)*1]), &(inteval->stack[((hsi*84+340)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+130)*1+lsi)*1]), &(inteval->stack[((hsi*168+721)*1+lsi)*1]), &(inteval->stack[((hsi*126+487)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+130)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
