/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "ry_5.h"
#include <math.h>

void ry_5(double *q, double *out_5780809954573883943) {

   out_5780809954573883943[0] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_5780809954573883943[1] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]);
   out_5780809954573883943[2] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + cos(q[1])*cos(q[3])*cos(q[5]);

}
