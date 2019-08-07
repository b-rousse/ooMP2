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

#ifdef __cplusplus
extern "C" {
#endif
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->PB_z[vi] * src0[((hsi*1+0)*1+lsi)*1];
target[((hsi*3+2)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->PB_y[vi] * src0[((hsi*1+0)*1+lsi)*1];
target[((hsi*3+1)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp2;
fp2 = inteval->PB_x[vi] * src0[((hsi*1+0)*1+lsi)*1];
target[((hsi*3+0)*1+lsi)*1] = fp2;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3 */
}

#ifdef __cplusplus
};
#endif
