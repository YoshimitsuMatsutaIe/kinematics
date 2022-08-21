/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_2_dot.h"
#include <math.h>

void jry_2_dot(double *dq, double *q, double *out_197684185109039314) {

   out_197684185109039314[0] = -sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + sin(q[0])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*cos(q[0])*cos(q[2])*dq[2] + sin(q[2])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_197684185109039314[1] = -sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + sin(q[0])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*cos(q[0])*cos(q[2])*dq[2] + sin(q[2])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_197684185109039314[2] = -sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + sin(q[0])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*cos(q[1])*cos(q[2])*dq[2] + sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*cos(q[0])*cos(q[2])*dq[2] + sin(q[2])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_197684185109039314[3] = 0;
   out_197684185109039314[4] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_197684185109039314[5] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_197684185109039314[6] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_197684185109039314[7] = 0;

}
