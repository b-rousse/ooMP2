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
#include <HRRPart0ket0bra0gd.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0hp.h>
#include <_sphemultipole_D_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_D_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,576)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1386)*1+lsi)*1]), &(inteval->stack[((hsi*21+540)*1+lsi)*1]), &(inteval->stack[((hsi*15+561)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1431)*1+lsi)*1]), &(inteval->stack[((hsi*28+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+540)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1296)*1+lsi)*1]), &(inteval->stack[((hsi*63+1431)*1+lsi)*1]), &(inteval->stack[((hsi*45+1386)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+476)*1+lsi)*1]), &(inteval->stack[((hsi*15+497)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1494)*1+lsi)*1]), &(inteval->stack[((hsi*28+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+476)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1206)*1+lsi)*1]), &(inteval->stack[((hsi*63+1494)*1+lsi)*1]), &(inteval->stack[((hsi*45+512)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+412)*1+lsi)*1]), &(inteval->stack[((hsi*15+433)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1557)*1+lsi)*1]), &(inteval->stack[((hsi*28+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+412)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1116)*1+lsi)*1]), &(inteval->stack[((hsi*63+1557)*1+lsi)*1]), &(inteval->stack[((hsi*45+448)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]), &(inteval->stack[((hsi*15+369)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1620)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1026)*1+lsi)*1]), &(inteval->stack[((hsi*63+1620)*1+lsi)*1]), &(inteval->stack[((hsi*45+384)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]), &(inteval->stack[((hsi*15+305)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1683)*1+lsi)*1]), &(inteval->stack[((hsi*28+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+936)*1+lsi)*1]), &(inteval->stack[((hsi*63+1683)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]), &(inteval->stack[((hsi*15+241)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1746)*1+lsi)*1]), &(inteval->stack[((hsi*28+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+846)*1+lsi)*1]), &(inteval->stack[((hsi*63+1746)*1+lsi)*1]), &(inteval->stack[((hsi*45+256)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1809)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+756)*1+lsi)*1]), &(inteval->stack[((hsi*63+1809)*1+lsi)*1]), &(inteval->stack[((hsi*45+192)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1872)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+666)*1+lsi)*1]), &(inteval->stack[((hsi*63+1872)*1+lsi)*1]), &(inteval->stack[((hsi*45+128)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1935)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+576)*1+lsi)*1]), &(inteval->stack[((hsi*63+1935)*1+lsi)*1]), &(inteval->stack[((hsi*45+64)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+576)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+666)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+756)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+846)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+936)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+1026)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+1116)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+1206)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+1296)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
