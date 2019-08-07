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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <_sphemultipole_F_D_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_F_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,414)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+954)*1+lsi)*1]), &(inteval->stack[((hsi*15+389)*1+lsi)*1]), &(inteval->stack[((hsi*10+404)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*21+368)*1+lsi)*1]), &(inteval->stack[((hsi*15+389)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+894)*1+lsi)*1]), &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*30+954)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+368)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]), &(inteval->stack[((hsi*10+358)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1029)*1+lsi)*1]), &(inteval->stack[((hsi*21+322)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+834)*1+lsi)*1]), &(inteval->stack[((hsi*45+1029)*1+lsi)*1]), &(inteval->stack[((hsi*30+368)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+322)*1+lsi)*1]), &(inteval->stack[((hsi*15+297)*1+lsi)*1]), &(inteval->stack[((hsi*10+312)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1074)*1+lsi)*1]), &(inteval->stack[((hsi*21+276)*1+lsi)*1]), &(inteval->stack[((hsi*15+297)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+774)*1+lsi)*1]), &(inteval->stack[((hsi*45+1074)*1+lsi)*1]), &(inteval->stack[((hsi*30+322)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+276)*1+lsi)*1]), &(inteval->stack[((hsi*15+251)*1+lsi)*1]), &(inteval->stack[((hsi*10+266)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1119)*1+lsi)*1]), &(inteval->stack[((hsi*21+230)*1+lsi)*1]), &(inteval->stack[((hsi*15+251)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+714)*1+lsi)*1]), &(inteval->stack[((hsi*45+1119)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+230)*1+lsi)*1]), &(inteval->stack[((hsi*15+205)*1+lsi)*1]), &(inteval->stack[((hsi*10+220)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1164)*1+lsi)*1]), &(inteval->stack[((hsi*21+184)*1+lsi)*1]), &(inteval->stack[((hsi*15+205)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+654)*1+lsi)*1]), &(inteval->stack[((hsi*45+1164)*1+lsi)*1]), &(inteval->stack[((hsi*30+230)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+184)*1+lsi)*1]), &(inteval->stack[((hsi*15+159)*1+lsi)*1]), &(inteval->stack[((hsi*10+174)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1209)*1+lsi)*1]), &(inteval->stack[((hsi*21+138)*1+lsi)*1]), &(inteval->stack[((hsi*15+159)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+594)*1+lsi)*1]), &(inteval->stack[((hsi*45+1209)*1+lsi)*1]), &(inteval->stack[((hsi*30+184)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+138)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]), &(inteval->stack[((hsi*10+128)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1254)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+534)*1+lsi)*1]), &(inteval->stack[((hsi*45+1254)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+67)*1+lsi)*1]), &(inteval->stack[((hsi*10+82)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1299)*1+lsi)*1]), &(inteval->stack[((hsi*21+46)*1+lsi)*1]), &(inteval->stack[((hsi*15+67)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+474)*1+lsi)*1]), &(inteval->stack[((hsi*45+1299)*1+lsi)*1]), &(inteval->stack[((hsi*30+92)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+46)*1+lsi)*1]), &(inteval->stack[((hsi*15+21)*1+lsi)*1]), &(inteval->stack[((hsi*10+36)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1344)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+21)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+414)*1+lsi)*1]), &(inteval->stack[((hsi*45+1344)*1+lsi)*1]), &(inteval->stack[((hsi*30+46)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*60+414)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*60+474)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*60+534)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*60+594)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*60+654)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*60+714)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*60+774)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*60+834)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*60+894)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
