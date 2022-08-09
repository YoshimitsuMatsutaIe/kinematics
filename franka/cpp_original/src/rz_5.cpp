/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_5.h"
#include <math.h>

void rz_5(double *q, double *out_5470566376829354383) {

   out_5470566376829354383[0] = -sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) + sin(q[0])*cos(q[2])*cos(q[4]) + sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) + sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_5470566376829354383[1] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) + sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) - cos(q[0])*cos(q[2])*cos(q[4]);
   out_5470566376829354383[2] = -sin(q[1])*sin(q[2])*cos(q[4]) - sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) + sin(q[3])*sin(q[4])*cos(q[1]);

}
