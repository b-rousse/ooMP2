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
#include <HRRPart0ket0bra0fd.h>
#include <HRRPart0ket0bra0fp.h>
#include <HRRPart0ket0bra0gp.h>
#include <_sphemultipole_D_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_D_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,414)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+954)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]), &(inteval->stack[((hsi*10+80)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*21+393)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+894)*1+lsi)*1]), &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*30+954)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1029)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]), &(inteval->stack[((hsi*10+70)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1059)*1+lsi)*1]), &(inteval->stack[((hsi*21+372)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+834)*1+lsi)*1]), &(inteval->stack[((hsi*45+1059)*1+lsi)*1]), &(inteval->stack[((hsi*30+1029)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+195)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*10+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1104)*1+lsi)*1]), &(inteval->stack[((hsi*21+351)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+774)*1+lsi)*1]), &(inteval->stack[((hsi*45+1104)*1+lsi)*1]), &(inteval->stack[((hsi*30+195)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]), &(inteval->stack[((hsi*10+50)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+351)*1+lsi)*1]), &(inteval->stack[((hsi*21+330)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+714)*1+lsi)*1]), &(inteval->stack[((hsi*45+351)*1+lsi)*1]), &(inteval->stack[((hsi*30+60)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+165)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*10+40)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1149)*1+lsi)*1]), &(inteval->stack[((hsi*21+309)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+654)*1+lsi)*1]), &(inteval->stack[((hsi*45+1149)*1+lsi)*1]), &(inteval->stack[((hsi*30+165)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+309)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]), &(inteval->stack[((hsi*10+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1194)*1+lsi)*1]), &(inteval->stack[((hsi*21+288)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+594)*1+lsi)*1]), &(inteval->stack[((hsi*45+1194)*1+lsi)*1]), &(inteval->stack[((hsi*30+309)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]), &(inteval->stack[((hsi*10+20)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1239)*1+lsi)*1]), &(inteval->stack[((hsi*21+267)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+534)*1+lsi)*1]), &(inteval->stack[((hsi*45+1239)*1+lsi)*1]), &(inteval->stack[((hsi*30+30)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+120)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]), &(inteval->stack[((hsi*10+10)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1284)*1+lsi)*1]), &(inteval->stack[((hsi*21+246)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+474)*1+lsi)*1]), &(inteval->stack[((hsi*45+1284)*1+lsi)*1]), &(inteval->stack[((hsi*30+120)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+246)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*10+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1329)*1+lsi)*1]), &(inteval->stack[((hsi*21+225)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+414)*1+lsi)*1]), &(inteval->stack[((hsi*45+1329)*1+lsi)*1]), &(inteval->stack[((hsi*30+246)*1+lsi)*1]),1);
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
