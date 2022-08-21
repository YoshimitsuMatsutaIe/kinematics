/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_1_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_1_dot.h"
#include <math.h>

void jry_1_dot(double *dq, double *q, double *out_251752800225189795) {

   out_251752800225189795[0] = sin(q[0])*cos(q[1])*dq[0] + sin(q[0])*cos(q[1])*dq[1] + sin(q[1])*cos(q[0])*dq[0] + sin(q[1])*cos(q[0])*dq[1];
   out_251752800225189795[1] = sin(q[0])*cos(q[1])*dq[0] + sin(q[0])*cos(q[1])*dq[1] + sin(q[1])*cos(q[0])*dq[0] + sin(q[1])*cos(q[0])*dq[1];
   out_251752800225189795[2] = 0;
   out_251752800225189795[3] = 0;
   out_251752800225189795[4] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_251752800225189795[5] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_251752800225189795[6] = 0;
   out_251752800225189795[7] = 0;

}
