/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_1.h"
#include <math.h>

void rx_1(double *q, double *out_5215319765030116739) {

   out_5215319765030116739[0] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_5215319765030116739[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0]);
   out_5215319765030116739[2] = -cos(q[1]);

}
