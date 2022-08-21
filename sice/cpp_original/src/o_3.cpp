/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "o_3.h"
#include <math.h>

void o_3(double l1, double l2, double l3, double *q, double *out_5566312343767398511) {

   out_5566312343767398511[0] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]) - l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5566312343767398511[1] = l1*sin(q[0]) + l2*sin(q[0])*cos(q[1]) + l2*sin(q[1])*cos(q[0]) - l3*sin(q[0])*sin(q[1])*sin(q[2]) + l3*sin(q[0])*cos(q[1])*cos(q[2]) + l3*sin(q[1])*cos(q[0])*cos(q[2]) + l3*sin(q[2])*cos(q[0])*cos(q[1]);

}
