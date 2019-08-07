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
#include <HRRPart0ket0bra0hf.h>
#include <HRRPart0ket0bra0hg.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_G_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_G_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1665)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1601)*1+lsi)*1]), &(inteval->stack[((hsi*28+1637)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1556)*1+lsi)*1]), &(inteval->stack[((hsi*36+1601)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1637)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5049)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1501)*1+lsi)*1]), &(inteval->stack[((hsi*45+1556)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+5475)*1+lsi)*1]), &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4185)*1+lsi)*1]), &(inteval->stack[((hsi*280+5475)*1+lsi)*1]), &(inteval->stack[((hsi*210+5049)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1437)*1+lsi)*1]), &(inteval->stack[((hsi*28+1473)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1392)*1+lsi)*1]), &(inteval->stack[((hsi*36+1437)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+5259)*1+lsi)*1]), &(inteval->stack[((hsi*28+1473)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1437)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+5259)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5259)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1437)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1437)*1+lsi)*1]), &(inteval->stack[((hsi*55+1337)*1+lsi)*1]), &(inteval->stack[((hsi*45+1392)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5755)*1+lsi)*1]), &(inteval->stack[((hsi*135+1437)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+1337)*1+lsi)*1]), &(inteval->stack[((hsi*216+5755)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+3870)*1+lsi)*1]), &(inteval->stack[((hsi*280+1337)*1+lsi)*1]), &(inteval->stack[((hsi*210+5259)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1273)*1+lsi)*1]), &(inteval->stack[((hsi*28+1309)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1228)*1+lsi)*1]), &(inteval->stack[((hsi*36+1273)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1309)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5755)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1173)*1+lsi)*1]), &(inteval->stack[((hsi*45+1228)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5965)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6181)*1+lsi)*1]), &(inteval->stack[((hsi*216+5965)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+3555)*1+lsi)*1]), &(inteval->stack[((hsi*280+6181)*1+lsi)*1]), &(inteval->stack[((hsi*210+5755)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1109)*1+lsi)*1]), &(inteval->stack[((hsi*28+1145)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1064)*1+lsi)*1]), &(inteval->stack[((hsi*36+1109)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+126)*1+lsi)*1]), &(inteval->stack[((hsi*28+1145)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1109)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+126)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5965)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1109)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1109)*1+lsi)*1]), &(inteval->stack[((hsi*55+1009)*1+lsi)*1]), &(inteval->stack[((hsi*45+1064)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6461)*1+lsi)*1]), &(inteval->stack[((hsi*135+1109)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+1009)*1+lsi)*1]), &(inteval->stack[((hsi*216+6461)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+3240)*1+lsi)*1]), &(inteval->stack[((hsi*280+1009)*1+lsi)*1]), &(inteval->stack[((hsi*210+5965)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+105)*1+lsi)*1]), &(inteval->stack[((hsi*36+945)*1+lsi)*1]), &(inteval->stack[((hsi*28+981)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4500)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+945)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4608)*1+lsi)*1]), &(inteval->stack[((hsi*108+4500)*1+lsi)*1]), &(inteval->stack[((hsi*84+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4776)*1+lsi)*1]), &(inteval->stack[((hsi*28+981)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4839)*1+lsi)*1]), &(inteval->stack[((hsi*84+105)*1+lsi)*1]), &(inteval->stack[((hsi*63+4776)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+6461)*1+lsi)*1]), &(inteval->stack[((hsi*168+4608)*1+lsi)*1]), &(inteval->stack[((hsi*126+4839)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4776)*1+lsi)*1]), &(inteval->stack[((hsi*55+845)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*135+4776)*1+lsi)*1]), &(inteval->stack[((hsi*108+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6887)*1+lsi)*1]), &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*168+4608)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+2925)*1+lsi)*1]), &(inteval->stack[((hsi*280+6887)*1+lsi)*1]), &(inteval->stack[((hsi*210+6461)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+781)*1+lsi)*1]), &(inteval->stack[((hsi*28+817)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+736)*1+lsi)*1]), &(inteval->stack[((hsi*36+781)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6671)*1+lsi)*1]), &(inteval->stack[((hsi*28+817)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+63)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+6671)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+781)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+63)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*55+681)*1+lsi)*1]), &(inteval->stack[((hsi*45+736)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7167)*1+lsi)*1]), &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+7383)*1+lsi)*1]), &(inteval->stack[((hsi*216+7167)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+2610)*1+lsi)*1]), &(inteval->stack[((hsi*280+7383)*1+lsi)*1]), &(inteval->stack[((hsi*210+781)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+617)*1+lsi)*1]), &(inteval->stack[((hsi*28+653)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+572)*1+lsi)*1]), &(inteval->stack[((hsi*36+617)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+7167)*1+lsi)*1]), &(inteval->stack[((hsi*28+653)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6671)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+7167)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7167)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+6671)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*55+517)*1+lsi)*1]), &(inteval->stack[((hsi*45+572)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+517)*1+lsi)*1]), &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+7663)*1+lsi)*1]), &(inteval->stack[((hsi*216+517)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+2295)*1+lsi)*1]), &(inteval->stack[((hsi*280+7663)*1+lsi)*1]), &(inteval->stack[((hsi*210+7167)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+453)*1+lsi)*1]), &(inteval->stack[((hsi*28+489)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+408)*1+lsi)*1]), &(inteval->stack[((hsi*36+453)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+517)*1+lsi)*1]), &(inteval->stack[((hsi*28+489)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6671)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+517)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+453)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+6671)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*55+353)*1+lsi)*1]), &(inteval->stack[((hsi*45+408)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7943)*1+lsi)*1]), &(inteval->stack[((hsi*135+6671)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+8159)*1+lsi)*1]), &(inteval->stack[((hsi*216+7943)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+1980)*1+lsi)*1]), &(inteval->stack[((hsi*280+8159)*1+lsi)*1]), &(inteval->stack[((hsi*210+453)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+289)*1+lsi)*1]), &(inteval->stack[((hsi*28+325)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+244)*1+lsi)*1]), &(inteval->stack[((hsi*36+289)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+21)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4692)*1+lsi)*1]), &(inteval->stack[((hsi*28+325)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4755)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4692)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7943)*1+lsi)*1]), &(inteval->stack[((hsi*168+21)*1+lsi)*1]), &(inteval->stack[((hsi*126+4755)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4692)*1+lsi)*1]), &(inteval->stack[((hsi*55+189)*1+lsi)*1]), &(inteval->stack[((hsi*45+244)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*135+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4500)*1+lsi)*1]), &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*168+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+1665)*1+lsi)*1]), &(inteval->stack[((hsi*280+4500)*1+lsi)*1]), &(inteval->stack[((hsi*210+7943)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*315+1665)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*315+1980)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*315+2295)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*315+2610)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*315+2925)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*315+3240)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*315+3555)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*315+3870)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*315+4185)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
