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
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <_sphemultipole_D_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_D_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,765)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1899)*1+lsi)*1]), &(inteval->stack[((hsi*28+716)*1+lsi)*1]), &(inteval->stack[((hsi*21+744)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1962)*1+lsi)*1]), &(inteval->stack[((hsi*36+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+716)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1773)*1+lsi)*1]), &(inteval->stack[((hsi*84+1962)*1+lsi)*1]), &(inteval->stack[((hsi*63+1899)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+631)*1+lsi)*1]), &(inteval->stack[((hsi*21+659)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2046)*1+lsi)*1]), &(inteval->stack[((hsi*36+595)*1+lsi)*1]), &(inteval->stack[((hsi*28+631)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1647)*1+lsi)*1]), &(inteval->stack[((hsi*84+2046)*1+lsi)*1]), &(inteval->stack[((hsi*63+680)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+595)*1+lsi)*1]), &(inteval->stack[((hsi*28+546)*1+lsi)*1]), &(inteval->stack[((hsi*21+574)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2130)*1+lsi)*1]), &(inteval->stack[((hsi*36+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+546)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1521)*1+lsi)*1]), &(inteval->stack[((hsi*84+2130)*1+lsi)*1]), &(inteval->stack[((hsi*63+595)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+489)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2214)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1395)*1+lsi)*1]), &(inteval->stack[((hsi*84+2214)*1+lsi)*1]), &(inteval->stack[((hsi*63+510)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]), &(inteval->stack[((hsi*21+404)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2298)*1+lsi)*1]), &(inteval->stack[((hsi*36+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1269)*1+lsi)*1]), &(inteval->stack[((hsi*84+2298)*1+lsi)*1]), &(inteval->stack[((hsi*63+425)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+319)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2382)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1143)*1+lsi)*1]), &(inteval->stack[((hsi*84+2382)*1+lsi)*1]), &(inteval->stack[((hsi*63+340)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]), &(inteval->stack[((hsi*21+234)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2466)*1+lsi)*1]), &(inteval->stack[((hsi*36+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1017)*1+lsi)*1]), &(inteval->stack[((hsi*84+2466)*1+lsi)*1]), &(inteval->stack[((hsi*63+255)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]), &(inteval->stack[((hsi*21+149)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2550)*1+lsi)*1]), &(inteval->stack[((hsi*36+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+891)*1+lsi)*1]), &(inteval->stack[((hsi*84+2550)*1+lsi)*1]), &(inteval->stack[((hsi*63+170)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2634)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+765)*1+lsi)*1]), &(inteval->stack[((hsi*84+2634)*1+lsi)*1]), &(inteval->stack[((hsi*63+85)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+765)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+891)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+1017)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+1143)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+1269)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+1395)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+1521)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+1647)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+1773)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
