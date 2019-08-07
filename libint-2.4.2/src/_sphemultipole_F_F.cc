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
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <_sphemultipole_F_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_F_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,666)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]), &(inteval->stack[((hsi*15+641)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+641)*1+lsi)*1]), &(inteval->stack[((hsi*10+656)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1641)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1764)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1466)*1+lsi)*1]), &(inteval->stack[((hsi*90+1764)*1+lsi)*1]), &(inteval->stack[((hsi*60+1641)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+546)*1+lsi)*1]), &(inteval->stack[((hsi*15+567)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+567)*1+lsi)*1]), &(inteval->stack[((hsi*10+582)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+567)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+518)*1+lsi)*1]), &(inteval->stack[((hsi*21+546)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1854)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1366)*1+lsi)*1]), &(inteval->stack[((hsi*90+1854)*1+lsi)*1]), &(inteval->stack[((hsi*60+567)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+472)*1+lsi)*1]), &(inteval->stack[((hsi*15+493)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+493)*1+lsi)*1]), &(inteval->stack[((hsi*10+508)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+493)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+444)*1+lsi)*1]), &(inteval->stack[((hsi*21+472)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1944)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1266)*1+lsi)*1]), &(inteval->stack[((hsi*90+1944)*1+lsi)*1]), &(inteval->stack[((hsi*60+493)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+398)*1+lsi)*1]), &(inteval->stack[((hsi*15+419)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+419)*1+lsi)*1]), &(inteval->stack[((hsi*10+434)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+419)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+370)*1+lsi)*1]), &(inteval->stack[((hsi*21+398)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2034)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1166)*1+lsi)*1]), &(inteval->stack[((hsi*90+2034)*1+lsi)*1]), &(inteval->stack[((hsi*60+419)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]), &(inteval->stack[((hsi*10+360)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+345)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+296)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2124)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1066)*1+lsi)*1]), &(inteval->stack[((hsi*90+2124)*1+lsi)*1]), &(inteval->stack[((hsi*60+345)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+250)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]), &(inteval->stack[((hsi*10+286)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+271)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+222)*1+lsi)*1]), &(inteval->stack[((hsi*21+250)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2214)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+966)*1+lsi)*1]), &(inteval->stack[((hsi*90+2214)*1+lsi)*1]), &(inteval->stack[((hsi*60+271)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+176)*1+lsi)*1]), &(inteval->stack[((hsi*15+197)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+197)*1+lsi)*1]), &(inteval->stack[((hsi*10+212)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+197)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+148)*1+lsi)*1]), &(inteval->stack[((hsi*21+176)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2304)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+866)*1+lsi)*1]), &(inteval->stack[((hsi*90+2304)*1+lsi)*1]), &(inteval->stack[((hsi*60+197)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+102)*1+lsi)*1]), &(inteval->stack[((hsi*15+123)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+123)*1+lsi)*1]), &(inteval->stack[((hsi*10+138)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+123)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+74)*1+lsi)*1]), &(inteval->stack[((hsi*21+102)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2394)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+766)*1+lsi)*1]), &(inteval->stack[((hsi*90+2394)*1+lsi)*1]), &(inteval->stack[((hsi*60+123)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1611)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]), &(inteval->stack[((hsi*10+64)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+49)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*30+1611)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2484)*1+lsi)*1]), &(inteval->stack[((hsi*63+1701)*1+lsi)*1]), &(inteval->stack[((hsi*45+1566)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+666)*1+lsi)*1]), &(inteval->stack[((hsi*90+2484)*1+lsi)*1]), &(inteval->stack[((hsi*60+49)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*100+666)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*100+766)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*100+866)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*100+966)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*100+1066)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*100+1166)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*100+1266)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*100+1366)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*100+1466)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
