/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_3.h"
#include <math.h>

void o_3(double a4, double d1, double d3, double *q, double *out_9214899310815853626) {

   out_9214899310815853626[0] = -a4*sin(q[0])*sin(q[2]) + a4*cos(q[0])*cos(q[1])*cos(q[2]) + d3*sin(q[1])*cos(q[0]);
   out_9214899310815853626[1] = a4*sin(q[0])*cos(q[1])*cos(q[2]) + a4*sin(q[2])*cos(q[0]) + d3*sin(q[0])*sin(q[1]);
   out_9214899310815853626[2] = -a4*sin(q[1])*cos(q[2]) + d1 + d3*cos(q[1]);

}
