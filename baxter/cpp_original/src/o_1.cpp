/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_1.h"
#include <math.h>

void o_1(double len_H, double len_L, double len_L0, double len_L1, double len_h, double *q, double *out_4547258868980626745) {

   out_4547258868980626745[0] = -len_L + (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]);
   out_4547258868980626745[1] = -1.0/2.0*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) - len_h;
   out_4547258868980626745[2] = len_H + len_L0;

}
