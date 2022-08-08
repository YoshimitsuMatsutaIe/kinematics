/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_3.h"
#include <math.h>

void o_3(double len_H, double len_L, double len_L0, double len_L1, double len_L2, double len_L3, double len_h, double *q, double *out_7045941283810424319) {

   out_7045941283810424319[0] = -len_L + (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0]);
   out_7045941283810424319[1] = -1.0/2.0*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0]) - len_h;
   out_7045941283810424319[2] = len_H + len_L0 - len_L2*sin(q[1]) - len_L3*cos(q[1])*cos(q[2]);

}
