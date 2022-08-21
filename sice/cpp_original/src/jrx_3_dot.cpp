/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_3_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_3_dot.h"
#include <math.h>

void jrx_3_dot(double *dq, double *q, double *out_9133070642188086198) {

   out_9133070642188086198[0] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3];
   out_9133070642188086198[1] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3];
   out_9133070642188086198[2] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3];
   out_9133070642188086198[3] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[0] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[1] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3];
   out_9133070642188086198[4] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3];
   out_9133070642188086198[5] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3];
   out_9133070642188086198[6] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3];
   out_9133070642188086198[7] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[2] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3];

}
