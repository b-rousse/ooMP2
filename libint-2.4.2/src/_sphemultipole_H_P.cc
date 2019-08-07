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
#include <HRRPart0bra0ket0hp.h>
#include <_sphemultipole_H_P_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_H_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,441)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+945)*1+lsi)*1]), &(inteval->stack[((hsi*28+392)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+882)*1+lsi)*1]), &(inteval->stack[((hsi*28+343)*1+lsi)*1]), &(inteval->stack[((hsi*21+371)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+819)*1+lsi)*1]), &(inteval->stack[((hsi*28+294)*1+lsi)*1]), &(inteval->stack[((hsi*21+322)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+693)*1+lsi)*1]), &(inteval->stack[((hsi*28+196)*1+lsi)*1]), &(inteval->stack[((hsi*21+224)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+630)*1+lsi)*1]), &(inteval->stack[((hsi*28+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+175)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+567)*1+lsi)*1]), &(inteval->stack[((hsi*28+98)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+49)*1+lsi)*1]), &(inteval->stack[((hsi*21+77)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+441)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*63+441)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*63+504)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*63+567)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*63+630)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*63+693)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*63+756)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*63+819)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*63+882)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*63+945)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
