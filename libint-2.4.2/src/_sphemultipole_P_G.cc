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
#include <HRRPart0ket0bra0gp.h>
#include <_sphemultipole_P_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_P_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,324)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+684)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*15+309)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+639)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+594)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+549)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*15+264)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+504)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]), &(inteval->stack[((hsi*15+249)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+459)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]), &(inteval->stack[((hsi*15+234)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+414)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]), &(inteval->stack[((hsi*15+219)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]), &(inteval->stack[((hsi*15+204)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+324)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+189)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45+324)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*45+369)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*45+414)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*45+459)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*45+504)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*45+549)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*45+594)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*45+639)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*45+684)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
