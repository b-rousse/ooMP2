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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <_sphemultipole_G_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_G_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]), &(inteval->stack[((hsi*15+885)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2358)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+800)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2532)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2100)*1+lsi)*1]), &(inteval->stack[((hsi*126+2532)*1+lsi)*1]), &(inteval->stack[((hsi*90+2358)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+736)*1+lsi)*1]), &(inteval->stack[((hsi*21+764)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+764)*1+lsi)*1]), &(inteval->stack[((hsi*15+785)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+764)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+700)*1+lsi)*1]), &(inteval->stack[((hsi*28+736)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2658)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1950)*1+lsi)*1]), &(inteval->stack[((hsi*126+2658)*1+lsi)*1]), &(inteval->stack[((hsi*90+764)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]), &(inteval->stack[((hsi*21+664)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+664)*1+lsi)*1]), &(inteval->stack[((hsi*15+685)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+664)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+600)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2784)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1800)*1+lsi)*1]), &(inteval->stack[((hsi*126+2784)*1+lsi)*1]), &(inteval->stack[((hsi*90+664)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+536)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]), &(inteval->stack[((hsi*15+585)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+564)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+500)*1+lsi)*1]), &(inteval->stack[((hsi*28+536)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2910)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1650)*1+lsi)*1]), &(inteval->stack[((hsi*126+2910)*1+lsi)*1]), &(inteval->stack[((hsi*90+564)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+436)*1+lsi)*1]), &(inteval->stack[((hsi*21+464)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+464)*1+lsi)*1]), &(inteval->stack[((hsi*15+485)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+464)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+400)*1+lsi)*1]), &(inteval->stack[((hsi*28+436)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3036)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1500)*1+lsi)*1]), &(inteval->stack[((hsi*126+3036)*1+lsi)*1]), &(inteval->stack[((hsi*90+464)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+364)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+364)*1+lsi)*1]), &(inteval->stack[((hsi*15+385)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+364)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+300)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3162)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*126+3162)*1+lsi)*1]), &(inteval->stack[((hsi*90+364)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+264)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+200)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3288)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1200)*1+lsi)*1]), &(inteval->stack[((hsi*126+3288)*1+lsi)*1]), &(inteval->stack[((hsi*90+264)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+164)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3414)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+1050)*1+lsi)*1]), &(inteval->stack[((hsi*126+3414)*1+lsi)*1]), &(inteval->stack[((hsi*90+164)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2313)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+64)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3540)*1+lsi)*1]), &(inteval->stack[((hsi*84+2448)*1+lsi)*1]), &(inteval->stack[((hsi*63+2250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+900)*1+lsi)*1]), &(inteval->stack[((hsi*126+3540)*1+lsi)*1]), &(inteval->stack[((hsi*90+64)*1+lsi)*1]),1);
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
