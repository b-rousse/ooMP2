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
#include <HRRPart0bra0ket0gg.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <_sphemultipole_G_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_G_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1305)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]), &(inteval->stack[((hsi*21+1269)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3603)*1+lsi)*1]), &(inteval->stack[((hsi*21+1269)*1+lsi)*1]), &(inteval->stack[((hsi*15+1290)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3603)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3738)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*45+1160)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3888)*1+lsi)*1]), &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4056)*1+lsi)*1]), &(inteval->stack[((hsi*168+3888)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+3105)*1+lsi)*1]), &(inteval->stack[((hsi*210+4056)*1+lsi)*1]), &(inteval->stack[((hsi*150+3738)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]), &(inteval->stack[((hsi*21+1124)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+1060)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3888)*1+lsi)*1]), &(inteval->stack[((hsi*21+1124)*1+lsi)*1]), &(inteval->stack[((hsi*15+1145)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1096)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3888)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3888)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+1096)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1096)*1+lsi)*1]), &(inteval->stack[((hsi*45+1015)*1+lsi)*1]), &(inteval->stack[((hsi*36+1060)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4266)*1+lsi)*1]), &(inteval->stack[((hsi*108+1096)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1015)*1+lsi)*1]), &(inteval->stack[((hsi*168+4266)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+2880)*1+lsi)*1]), &(inteval->stack[((hsi*210+1015)*1+lsi)*1]), &(inteval->stack[((hsi*150+3888)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+951)*1+lsi)*1]), &(inteval->stack[((hsi*21+979)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+915)*1+lsi)*1]), &(inteval->stack[((hsi*28+951)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3603)*1+lsi)*1]), &(inteval->stack[((hsi*21+979)*1+lsi)*1]), &(inteval->stack[((hsi*15+1000)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3603)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4266)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*45+870)*1+lsi)*1]), &(inteval->stack[((hsi*36+915)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4416)*1+lsi)*1]), &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4584)*1+lsi)*1]), &(inteval->stack[((hsi*168+4416)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+2655)*1+lsi)*1]), &(inteval->stack[((hsi*210+4584)*1+lsi)*1]), &(inteval->stack[((hsi*150+4266)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+806)*1+lsi)*1]), &(inteval->stack[((hsi*21+834)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+770)*1+lsi)*1]), &(inteval->stack[((hsi*28+806)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4416)*1+lsi)*1]), &(inteval->stack[((hsi*21+834)*1+lsi)*1]), &(inteval->stack[((hsi*15+855)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+806)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+4416)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4416)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+806)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+806)*1+lsi)*1]), &(inteval->stack[((hsi*45+725)*1+lsi)*1]), &(inteval->stack[((hsi*36+770)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4794)*1+lsi)*1]), &(inteval->stack[((hsi*108+806)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+725)*1+lsi)*1]), &(inteval->stack[((hsi*168+4794)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+2430)*1+lsi)*1]), &(inteval->stack[((hsi*210+725)*1+lsi)*1]), &(inteval->stack[((hsi*150+4416)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]), &(inteval->stack[((hsi*21+689)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3603)*1+lsi)*1]), &(inteval->stack[((hsi*21+689)*1+lsi)*1]), &(inteval->stack[((hsi*15+710)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3603)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4794)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*45+580)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4944)*1+lsi)*1]), &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5112)*1+lsi)*1]), &(inteval->stack[((hsi*168+4944)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+2205)*1+lsi)*1]), &(inteval->stack[((hsi*210+5112)*1+lsi)*1]), &(inteval->stack[((hsi*150+4794)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+516)*1+lsi)*1]), &(inteval->stack[((hsi*21+544)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]), &(inteval->stack[((hsi*28+516)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4944)*1+lsi)*1]), &(inteval->stack[((hsi*21+544)*1+lsi)*1]), &(inteval->stack[((hsi*15+565)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+516)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+4944)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4944)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+516)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+516)*1+lsi)*1]), &(inteval->stack[((hsi*45+435)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5322)*1+lsi)*1]), &(inteval->stack[((hsi*108+516)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+435)*1+lsi)*1]), &(inteval->stack[((hsi*168+5322)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1980)*1+lsi)*1]), &(inteval->stack[((hsi*210+435)*1+lsi)*1]), &(inteval->stack[((hsi*150+4944)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3603)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*15+420)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3603)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5322)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5472)*1+lsi)*1]), &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5640)*1+lsi)*1]), &(inteval->stack[((hsi*168+5472)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1755)*1+lsi)*1]), &(inteval->stack[((hsi*210+5640)*1+lsi)*1]), &(inteval->stack[((hsi*150+5322)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+5472)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]), &(inteval->stack[((hsi*15+275)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+226)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+5472)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5472)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+226)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+226)*1+lsi)*1]), &(inteval->stack[((hsi*45+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5850)*1+lsi)*1]), &(inteval->stack[((hsi*108+226)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+145)*1+lsi)*1]), &(inteval->stack[((hsi*168+5850)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1530)*1+lsi)*1]), &(inteval->stack[((hsi*210+145)*1+lsi)*1]), &(inteval->stack[((hsi*150+5472)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3603)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]), &(inteval->stack[((hsi*15+130)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3603)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5850)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]), &(inteval->stack[((hsi*90+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6000)*1+lsi)*1]), &(inteval->stack[((hsi*108+3603)*1+lsi)*1]), &(inteval->stack[((hsi*84+3393)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6168)*1+lsi)*1]), &(inteval->stack[((hsi*168+6000)*1+lsi)*1]), &(inteval->stack[((hsi*126+3477)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1305)*1+lsi)*1]), &(inteval->stack[((hsi*210+6168)*1+lsi)*1]), &(inteval->stack[((hsi*150+5850)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*225+1305)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*225+1530)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*225+1755)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*225+1980)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*225+2205)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*225+2430)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*225+2655)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*225+2880)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*225+3105)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
