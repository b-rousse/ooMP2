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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <_sphemultipole_I_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_I_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1476)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+1367)*1+lsi)*1]), &(inteval->stack[((hsi*36+1412)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+1412)*1+lsi)*1]), &(inteval->stack[((hsi*28+1448)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4188)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+1312)*1+lsi)*1]), &(inteval->stack[((hsi*45+1367)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4491)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3716)*1+lsi)*1]), &(inteval->stack[((hsi*216+4491)*1+lsi)*1]), &(inteval->stack[((hsi*168+4188)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+1203)*1+lsi)*1]), &(inteval->stack[((hsi*36+1248)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+1248)*1+lsi)*1]), &(inteval->stack[((hsi*28+1284)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1248)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+1148)*1+lsi)*1]), &(inteval->stack[((hsi*45+1203)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4707)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3436)*1+lsi)*1]), &(inteval->stack[((hsi*216+4707)*1+lsi)*1]), &(inteval->stack[((hsi*168+1248)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]), &(inteval->stack[((hsi*28+1120)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4923)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+984)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+984)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3156)*1+lsi)*1]), &(inteval->stack[((hsi*216+984)*1+lsi)*1]), &(inteval->stack[((hsi*168+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+875)*1+lsi)*1]), &(inteval->stack[((hsi*36+920)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+956)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5091)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+820)*1+lsi)*1]), &(inteval->stack[((hsi*45+875)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2876)*1+lsi)*1]), &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*168+5091)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+711)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+792)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+756)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+656)*1+lsi)*1]), &(inteval->stack[((hsi*45+711)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5475)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2596)*1+lsi)*1]), &(inteval->stack[((hsi*216+5475)*1+lsi)*1]), &(inteval->stack[((hsi*168+756)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+547)*1+lsi)*1]), &(inteval->stack[((hsi*36+592)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+592)*1+lsi)*1]), &(inteval->stack[((hsi*28+628)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5691)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+492)*1+lsi)*1]), &(inteval->stack[((hsi*45+547)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+492)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2316)*1+lsi)*1]), &(inteval->stack[((hsi*216+492)*1+lsi)*1]), &(inteval->stack[((hsi*168+5691)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+383)*1+lsi)*1]), &(inteval->stack[((hsi*36+428)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+464)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5859)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+328)*1+lsi)*1]), &(inteval->stack[((hsi*45+383)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6027)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2036)*1+lsi)*1]), &(inteval->stack[((hsi*216+6027)*1+lsi)*1]), &(inteval->stack[((hsi*168+5859)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+219)*1+lsi)*1]), &(inteval->stack[((hsi*36+264)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+264)*1+lsi)*1]), &(inteval->stack[((hsi*28+300)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+264)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+164)*1+lsi)*1]), &(inteval->stack[((hsi*45+219)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6243)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1756)*1+lsi)*1]), &(inteval->stack[((hsi*216+6243)*1+lsi)*1]), &(inteval->stack[((hsi*168+264)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4104)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6459)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]), &(inteval->stack[((hsi*84+4104)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+3996)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1476)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+6459)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*280+1476)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*280+1756)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*280+2036)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*280+2316)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*280+2596)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*280+2876)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*280+3156)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*280+3436)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*280+3716)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
