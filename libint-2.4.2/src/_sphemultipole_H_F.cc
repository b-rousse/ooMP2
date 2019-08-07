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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <_sphemultipole_H_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_H_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1170)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+1085)*1+lsi)*1]), &(inteval->stack[((hsi*28+1121)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+1121)*1+lsi)*1]), &(inteval->stack[((hsi*21+1149)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3207)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+1040)*1+lsi)*1]), &(inteval->stack[((hsi*36+1085)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3441)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2850)*1+lsi)*1]), &(inteval->stack[((hsi*168+3441)*1+lsi)*1]), &(inteval->stack[((hsi*126+3207)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+955)*1+lsi)*1]), &(inteval->stack[((hsi*28+991)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+991)*1+lsi)*1]), &(inteval->stack[((hsi*21+1019)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+991)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+910)*1+lsi)*1]), &(inteval->stack[((hsi*36+955)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3609)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2640)*1+lsi)*1]), &(inteval->stack[((hsi*168+3609)*1+lsi)*1]), &(inteval->stack[((hsi*126+991)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+825)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+889)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+861)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+780)*1+lsi)*1]), &(inteval->stack[((hsi*36+825)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3777)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2430)*1+lsi)*1]), &(inteval->stack[((hsi*168+3777)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+695)*1+lsi)*1]), &(inteval->stack[((hsi*28+731)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+731)*1+lsi)*1]), &(inteval->stack[((hsi*21+759)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+731)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+650)*1+lsi)*1]), &(inteval->stack[((hsi*36+695)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3945)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2220)*1+lsi)*1]), &(inteval->stack[((hsi*168+3945)*1+lsi)*1]), &(inteval->stack[((hsi*126+731)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+565)*1+lsi)*1]), &(inteval->stack[((hsi*28+601)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+601)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+601)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+520)*1+lsi)*1]), &(inteval->stack[((hsi*36+565)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4113)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2010)*1+lsi)*1]), &(inteval->stack[((hsi*168+4113)*1+lsi)*1]), &(inteval->stack[((hsi*126+601)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]), &(inteval->stack[((hsi*21+499)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+471)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4281)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1800)*1+lsi)*1]), &(inteval->stack[((hsi*168+4281)*1+lsi)*1]), &(inteval->stack[((hsi*126+471)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+305)*1+lsi)*1]), &(inteval->stack[((hsi*28+341)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+341)*1+lsi)*1]), &(inteval->stack[((hsi*21+369)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+341)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+260)*1+lsi)*1]), &(inteval->stack[((hsi*36+305)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4449)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1590)*1+lsi)*1]), &(inteval->stack[((hsi*168+4449)*1+lsi)*1]), &(inteval->stack[((hsi*126+341)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+175)*1+lsi)*1]), &(inteval->stack[((hsi*28+211)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+211)*1+lsi)*1]), &(inteval->stack[((hsi*21+239)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+211)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+130)*1+lsi)*1]), &(inteval->stack[((hsi*36+175)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4617)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1380)*1+lsi)*1]), &(inteval->stack[((hsi*168+4617)*1+lsi)*1]), &(inteval->stack[((hsi*126+211)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3144)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+81)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3144)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4785)*1+lsi)*1]), &(inteval->stack[((hsi*108+3333)*1+lsi)*1]), &(inteval->stack[((hsi*84+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1170)*1+lsi)*1]), &(inteval->stack[((hsi*168+4785)*1+lsi)*1]), &(inteval->stack[((hsi*126+81)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+1170)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*210+1380)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*210+1590)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*210+1800)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*210+2010)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*210+2220)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*210+2430)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*210+2640)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*210+2850)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
