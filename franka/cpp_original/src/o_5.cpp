/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_5.h"
#include <math.h>

void o_5(double a4, double a5, double d1, double d3, double d5, double *q, double *out_5528920743459901057) {

   out_5528920743459901057[0] = -a4*sin(q[0])*sin(q[2]) + a4*cos(q[0])*cos(q[1])*cos(q[2]) - a5*sin(q[0])*sin(q[2])*cos(q[3]) + a5*sin(q[1])*sin(q[3])*cos(q[0]) + a5*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + d3*sin(q[1])*cos(q[0]) + d5*sin(q[0])*sin(q[2])*sin(q[3]) + d5*sin(q[1])*cos(q[0])*cos(q[3]) - d5*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5528920743459901057[1] = a4*sin(q[0])*cos(q[1])*cos(q[2]) + a4*sin(q[2])*cos(q[0]) + a5*sin(q[0])*sin(q[1])*sin(q[3]) + a5*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + a5*sin(q[2])*cos(q[0])*cos(q[3]) + d3*sin(q[0])*sin(q[1]) + d5*sin(q[0])*sin(q[1])*cos(q[3]) - d5*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - d5*sin(q[2])*sin(q[3])*cos(q[0]);
   out_5528920743459901057[2] = -a4*sin(q[1])*cos(q[2]) - a5*sin(q[1])*cos(q[2])*cos(q[3]) + a5*sin(q[3])*cos(q[1]) + d1 + d3*cos(q[1]) + d5*sin(q[1])*sin(q[3])*cos(q[2]) + d5*cos(q[1])*cos(q[3]);

}
