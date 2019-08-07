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
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <_sphemultipole_H_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_H_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1665)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1580)*1+lsi)*1]), &(inteval->stack[((hsi*28+1616)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]), &(inteval->stack[((hsi*36+1580)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1616)*1+lsi)*1]), &(inteval->stack[((hsi*21+1644)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5049)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1480)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+5475)*1+lsi)*1]), &(inteval->stack[((hsi*216+5259)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+4185)*1+lsi)*1]), &(inteval->stack[((hsi*280+5475)*1+lsi)*1]), &(inteval->stack[((hsi*210+5049)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1395)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]), &(inteval->stack[((hsi*36+1395)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5259)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]), &(inteval->stack[((hsi*21+1459)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1395)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+5259)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5259)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1395)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1395)*1+lsi)*1]), &(inteval->stack[((hsi*55+1295)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5755)*1+lsi)*1]), &(inteval->stack[((hsi*135+1395)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1295)*1+lsi)*1]), &(inteval->stack[((hsi*216+5755)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+3870)*1+lsi)*1]), &(inteval->stack[((hsi*280+1295)*1+lsi)*1]), &(inteval->stack[((hsi*210+5259)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1165)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]), &(inteval->stack[((hsi*21+1274)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5755)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1165)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5965)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6181)*1+lsi)*1]), &(inteval->stack[((hsi*216+5965)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+3555)*1+lsi)*1]), &(inteval->stack[((hsi*280+6181)*1+lsi)*1]), &(inteval->stack[((hsi*210+5755)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1025)*1+lsi)*1]), &(inteval->stack[((hsi*28+1061)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+980)*1+lsi)*1]), &(inteval->stack[((hsi*36+1025)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5965)*1+lsi)*1]), &(inteval->stack[((hsi*28+1061)*1+lsi)*1]), &(inteval->stack[((hsi*21+1089)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1025)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+5965)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5965)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1025)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1025)*1+lsi)*1]), &(inteval->stack[((hsi*55+925)*1+lsi)*1]), &(inteval->stack[((hsi*45+980)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6461)*1+lsi)*1]), &(inteval->stack[((hsi*135+1025)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+925)*1+lsi)*1]), &(inteval->stack[((hsi*216+6461)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+3240)*1+lsi)*1]), &(inteval->stack[((hsi*280+925)*1+lsi)*1]), &(inteval->stack[((hsi*210+5965)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+840)*1+lsi)*1]), &(inteval->stack[((hsi*28+876)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+795)*1+lsi)*1]), &(inteval->stack[((hsi*36+840)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+876)*1+lsi)*1]), &(inteval->stack[((hsi*21+904)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6461)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+740)*1+lsi)*1]), &(inteval->stack[((hsi*45+795)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6887)*1+lsi)*1]), &(inteval->stack[((hsi*216+6671)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+2925)*1+lsi)*1]), &(inteval->stack[((hsi*280+6887)*1+lsi)*1]), &(inteval->stack[((hsi*210+6461)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+655)*1+lsi)*1]), &(inteval->stack[((hsi*28+691)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]), &(inteval->stack[((hsi*36+655)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6671)*1+lsi)*1]), &(inteval->stack[((hsi*28+691)*1+lsi)*1]), &(inteval->stack[((hsi*21+719)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+655)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+6671)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6671)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+655)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+655)*1+lsi)*1]), &(inteval->stack[((hsi*55+555)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7167)*1+lsi)*1]), &(inteval->stack[((hsi*135+655)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+555)*1+lsi)*1]), &(inteval->stack[((hsi*216+7167)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+2610)*1+lsi)*1]), &(inteval->stack[((hsi*280+555)*1+lsi)*1]), &(inteval->stack[((hsi*210+6671)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]), &(inteval->stack[((hsi*21+534)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7167)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+370)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7377)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7593)*1+lsi)*1]), &(inteval->stack[((hsi*216+7377)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+2295)*1+lsi)*1]), &(inteval->stack[((hsi*280+7593)*1+lsi)*1]), &(inteval->stack[((hsi*210+7167)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+7377)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]), &(inteval->stack[((hsi*21+349)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+285)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+7377)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7377)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+285)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+285)*1+lsi)*1]), &(inteval->stack[((hsi*55+185)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7873)*1+lsi)*1]), &(inteval->stack[((hsi*135+285)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+185)*1+lsi)*1]), &(inteval->stack[((hsi*216+7873)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+1980)*1+lsi)*1]), &(inteval->stack[((hsi*280+185)*1+lsi)*1]), &(inteval->stack[((hsi*210+7377)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4860)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4923)*1+lsi)*1]), &(inteval->stack[((hsi*84+4500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7873)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+8083)*1+lsi)*1]), &(inteval->stack[((hsi*135+4860)*1+lsi)*1]), &(inteval->stack[((hsi*108+4584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8299)*1+lsi)*1]), &(inteval->stack[((hsi*216+8083)*1+lsi)*1]), &(inteval->stack[((hsi*168+4692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+1665)*1+lsi)*1]), &(inteval->stack[((hsi*280+8299)*1+lsi)*1]), &(inteval->stack[((hsi*210+7873)*1+lsi)*1]),1);
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
