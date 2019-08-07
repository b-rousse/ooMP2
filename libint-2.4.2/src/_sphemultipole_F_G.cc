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
#include <HRRPart0ket0bra0gf.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <_sphemultipole_F_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_F_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+872)*1+lsi)*1]), &(inteval->stack[((hsi*21+303)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+303)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2358)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+836)*1+lsi)*1]), &(inteval->stack[((hsi*28+872)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2532)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2100)*1+lsi)*1]), &(inteval->stack[((hsi*126+2532)*1+lsi)*1]), &(inteval->stack[((hsi*90+2358)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+808)*1+lsi)*1]), &(inteval->stack[((hsi*21+282)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+282)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2658)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+772)*1+lsi)*1]), &(inteval->stack[((hsi*28+808)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+772)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1950)*1+lsi)*1]), &(inteval->stack[((hsi*126+772)*1+lsi)*1]), &(inteval->stack[((hsi*90+2658)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+744)*1+lsi)*1]), &(inteval->stack[((hsi*21+261)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+261)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2748)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+708)*1+lsi)*1]), &(inteval->stack[((hsi*28+744)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2838)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1800)*1+lsi)*1]), &(inteval->stack[((hsi*126+2838)*1+lsi)*1]), &(inteval->stack[((hsi*90+2748)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+261)*1+lsi)*1]), &(inteval->stack[((hsi*28+680)*1+lsi)*1]), &(inteval->stack[((hsi*21+240)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*21+240)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2250)*1+lsi)*1]), &(inteval->stack[((hsi*63+261)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]), &(inteval->stack[((hsi*28+680)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+644)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+261)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1650)*1+lsi)*1]), &(inteval->stack[((hsi*126+644)*1+lsi)*1]), &(inteval->stack[((hsi*90+2250)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2448)*1+lsi)*1]), &(inteval->stack[((hsi*28+616)*1+lsi)*1]), &(inteval->stack[((hsi*21+219)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*21+219)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2964)*1+lsi)*1]), &(inteval->stack[((hsi*63+2448)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+219)*1+lsi)*1]), &(inteval->stack[((hsi*36+580)*1+lsi)*1]), &(inteval->stack[((hsi*28+616)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3054)*1+lsi)*1]), &(inteval->stack[((hsi*84+219)*1+lsi)*1]), &(inteval->stack[((hsi*63+2448)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1500)*1+lsi)*1]), &(inteval->stack[((hsi*126+3054)*1+lsi)*1]), &(inteval->stack[((hsi*90+2964)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+552)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2448)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+45)*1+lsi)*1]), &(inteval->stack[((hsi*63+219)*1+lsi)*1]), &(inteval->stack[((hsi*45+2448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+516)*1+lsi)*1]), &(inteval->stack[((hsi*28+552)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+516)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+219)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*126+516)*1+lsi)*1]), &(inteval->stack[((hsi*90+45)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+198)*1+lsi)*1]), &(inteval->stack[((hsi*28+488)*1+lsi)*1]), &(inteval->stack[((hsi*21+177)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2448)*1+lsi)*1]), &(inteval->stack[((hsi*21+177)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+3180)*1+lsi)*1]), &(inteval->stack[((hsi*63+198)*1+lsi)*1]), &(inteval->stack[((hsi*45+2448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+452)*1+lsi)*1]), &(inteval->stack[((hsi*28+488)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3270)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+198)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1200)*1+lsi)*1]), &(inteval->stack[((hsi*126+3270)*1+lsi)*1]), &(inteval->stack[((hsi*90+3180)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+177)*1+lsi)*1]), &(inteval->stack[((hsi*28+424)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2448)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+3396)*1+lsi)*1]), &(inteval->stack[((hsi*63+177)*1+lsi)*1]), &(inteval->stack[((hsi*45+2448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+240)*1+lsi)*1]), &(inteval->stack[((hsi*36+388)*1+lsi)*1]), &(inteval->stack[((hsi*28+424)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+388)*1+lsi)*1]), &(inteval->stack[((hsi*84+240)*1+lsi)*1]), &(inteval->stack[((hsi*63+177)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+1050)*1+lsi)*1]), &(inteval->stack[((hsi*126+388)*1+lsi)*1]), &(inteval->stack[((hsi*90+3396)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+156)*1+lsi)*1]), &(inteval->stack[((hsi*28+360)*1+lsi)*1]), &(inteval->stack[((hsi*21+135)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+219)*1+lsi)*1]), &(inteval->stack[((hsi*21+135)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+3486)*1+lsi)*1]), &(inteval->stack[((hsi*63+156)*1+lsi)*1]), &(inteval->stack[((hsi*45+219)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*28+360)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+219)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+156)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+900)*1+lsi)*1]), &(inteval->stack[((hsi*126+219)*1+lsi)*1]), &(inteval->stack[((hsi*90+3486)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*150+900)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*150+1050)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*150+1200)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*150+1350)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*150+1500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*150+1650)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*150+1800)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*150+1950)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*150+2100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
