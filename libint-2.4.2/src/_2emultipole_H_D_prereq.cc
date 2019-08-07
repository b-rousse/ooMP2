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
#include <CR_aB_X5__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _2emultipole_H_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*30+1260)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*30+1290)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*30+1320)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1350)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1134)*1+lsi)*1]),&(stack[((hsi*126+1350)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1476)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1008)*1+lsi)*1]),&(stack[((hsi*126+1476)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1602)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+882)*1+lsi)*1]),&(stack[((hsi*126+1602)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1728)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+756)*1+lsi)*1]),&(stack[((hsi*126+1728)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1854)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+630)*1+lsi)*1]),&(stack[((hsi*126+1854)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+1980)*1+lsi)*1]), &(stack[((hsi*30+1320)*1+lsi)*1]), &(stack[((hsi*30+1290)*1+lsi)*1]), &(stack[((hsi*30+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+504)*1+lsi)*1]),&(stack[((hsi*126+1980)*1+lsi)*1]),126);
CR_aB_Z5__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*24+1260)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*24+1284)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*24+1308)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+2106)*1+lsi)*1]), &(stack[((hsi*24+1308)*1+lsi)*1]), &(stack[((hsi*24+1284)*1+lsi)*1]), &(stack[((hsi*24+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+378)*1+lsi)*1]),&(stack[((hsi*126+2106)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+2232)*1+lsi)*1]), &(stack[((hsi*24+1308)*1+lsi)*1]), &(stack[((hsi*24+1284)*1+lsi)*1]), &(stack[((hsi*24+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+252)*1+lsi)*1]),&(stack[((hsi*126+2232)*1+lsi)*1]),126);
CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+2358)*1+lsi)*1]), &(stack[((hsi*24+1308)*1+lsi)*1]), &(stack[((hsi*24+1284)*1+lsi)*1]), &(stack[((hsi*24+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+126)*1+lsi)*1]),&(stack[((hsi*126+2358)*1+lsi)*1]),126);
CR_aB_Z5__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*18+1260)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*18+1278)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*18+1296)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*126+2484)*1+lsi)*1]), &(stack[((hsi*18+1296)*1+lsi)*1]), &(stack[((hsi*18+1278)*1+lsi)*1]), &(stack[((hsi*18+1260)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+0)*1+lsi)*1]),&(stack[((hsi*126+2484)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1260 */
}

#ifdef __cplusplus
};
#endif
