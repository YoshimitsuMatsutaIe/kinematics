/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                This file is part of 'jrz_ee_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrz_ee_dot.h"
#include <math.h>

void jrz_ee_dot(double *dq, double *q, double *out_7152843743093698702) {

   out_7152843743093698702[0] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*dq[4] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[5])*dq[3] + sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[1] - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4])*dq[3] - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*dq[5] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5])*dq[0] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[2] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4])*dq[4] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[0] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[3] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*dq[5] - sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[1] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[4] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] + sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[1] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[0] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5])*dq[0] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[3] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*dq[5] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3])*dq[4] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*dq[2] - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[0] - sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5])*dq[2] - sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5])*dq[5] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0] - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*dq[2] - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[4];
   out_7152843743093698702[1] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[0] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[0] + sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0] - sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[0] + sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[0] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[2] + sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*dq[5] + sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[2] + sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4])*dq[4] + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[3] + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*dq[5] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[1] + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*dq[4] + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5])*dq[1] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[1] - sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[4] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[1] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*dq[5] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5])*dq[3] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[1] + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*dq[3] + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*dq[5];
   out_7152843743093698702[2] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5])*dq[2] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[0] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[2] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[4])*dq[4] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4])*dq[3] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2])*dq[5] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3])*dq[4] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*dq[2] - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[1] + sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[1] + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[1] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[3] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*dq[5] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*dq[4] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[2] - sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5])*dq[0] - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[5] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[2] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*dq[4] - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0];
   out_7152843743093698702[3] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[5])*dq[0] - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4])*dq[0] - sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4])*sin(q[5])*dq[4] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5])*dq[3] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[3] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*dq[5] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[0] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[0] - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[2] + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[1] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[3] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*dq[5] - sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3])*dq[4] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[1] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5])*dq[3] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[2] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[2] - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5])*dq[0] + sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[4] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*dq[5] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[3] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5])*dq[1] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[3] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[5] + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*dq[1];
   out_7152843743093698702[4] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*dq[0] - sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4])*sin(q[5])*dq[3] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4])*dq[0] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[4] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[4])*dq[2] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*dq[4] - sin(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*dq[5] + sin(q[1])*sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4])*dq[1] - sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[5])*dq[5] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[4] + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3])*dq[3] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[4] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*dq[5] + sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3] - sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[1] - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[5] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[4] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*dq[2] - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[0];
   out_7152843743093698702[5] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*dq[0] - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4])*cos(q[5])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*dq[0] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3])*cos(q[5])*dq[4] + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[5])*dq[2] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[5] + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2])*dq[2] + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*dq[5] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[0] - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[2] - sin(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*dq[4] + sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*dq[1] - sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[5])*dq[4] + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*dq[5] - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[1] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*dq[3] + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5])*dq[5] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*dq[0] + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*dq[5] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*dq[4] - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[5] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*dq[1] - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[4] - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*dq[2] - sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5])*dq[0] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[5] - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1];
   out_7152843743093698702[6] = 0;
   out_7152843743093698702[7] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*dq[0] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3])*dq[4] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*dq[2] - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5])*dq[3] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*dq[0] - sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5])*dq[2] - sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5])*dq[5] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0] - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[2] - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4])*dq[4] + sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*dq[1] - sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*dq[4] - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*dq[5] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[5])*dq[3] - sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*dq[1] + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[3] + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*dq[5] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5])*dq[2] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[0] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5])*dq[5] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*dq[2] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[4] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[0] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*dq[3] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[5] + sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[1] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[4] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[0] + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] - cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[1];
   out_7152843743093698702[8] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[2] + sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4])*dq[4] + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4])*dq[3] + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*dq[5] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*dq[1] + sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3])*dq[4] + sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*dq[2] - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5])*dq[1] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*dq[1] - sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1])*dq[4] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[5])*dq[3] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[1] + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[3] + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*dq[5] + sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*dq[0] - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5])*dq[0] - sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0] + sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[0] - cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5])*dq[0];
   out_7152843743093698702[9] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*dq[1] + sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1])*dq[5] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[3])*dq[4] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*dq[0] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[5])*dq[3] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*dq[2] - sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5])*dq[0] - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[5])*dq[5] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[2] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[4] - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[0] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5])*dq[0] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[2] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*dq[5] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*dq[0] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[2] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4])*dq[4] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[3] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*dq[5] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*dq[4] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[2] + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3];
   out_7152843743093698702[10] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*dq[3] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*dq[5] - sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[3])*dq[4] - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[1] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4])*dq[0] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[5])*dq[2] - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5])*dq[0] + sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[4] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[5])*dq[1] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[3] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[5] + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[5])*dq[0] + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[0] + sin(q[2])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*dq[4] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*dq[5] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[3] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[3] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*dq[5] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*dq[0] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4])*dq[2] + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[0] + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[5])*dq[2];
   out_7152843743093698702[11] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[5])*dq[5] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*dq[4] + sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*sin(q[1])*sin(q[4])*sin(q[5])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*dq[4] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3])*dq[0] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4])*cos(q[5])*dq[5] + sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[3] - sin(q[0])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1])*dq[1] - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[5] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[4] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[2] - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4])*dq[0] - sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*dq[0] + sin(q[2])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0])*dq[3] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3])*cos(q[5])*dq[5] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4])*dq[0] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[4] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[4])*dq[2] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[4] + cos(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*dq[5];
   out_7152843743093698702[12] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[5])*dq[4] + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*dq[5] - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*dq[3] - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[1] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[3] + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5])*dq[5] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*dq[0] + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*dq[5] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[2] - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4])*cos(q[5])*dq[4] - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[0] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*dq[3] - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*dq[5] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5])*dq[1] - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[4] - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[5])*dq[2] - sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5])*dq[0] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*dq[5] - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*dq[1] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*dq[0] + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*dq[0] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*dq[3] - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*dq[5] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5])*dq[0] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3])*cos(q[5])*dq[4] - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*dq[2] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*dq[5] - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*dq[3] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*dq[2] - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*dq[5] + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[0] + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[2] + cos(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*dq[4];
   out_7152843743093698702[13] = 0;
   out_7152843743093698702[14] = 0;
   out_7152843743093698702[15] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[1] + sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*dq[4] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[1] - sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*dq[5] - sin(q[1])*sin(q[3])*cos(q[5])*dq[3] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[1] - sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4])*dq[3] - sin(q[1])*sin(q[5])*cos(q[3])*dq[5] + sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5])*dq[2] + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*dq[5] + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[2] + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4])*dq[4] + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[3] + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*dq[5] - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[1] + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[4] + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[2] - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[3] + cos(q[1])*cos(q[3])*cos(q[5])*dq[1];
   out_7152843743093698702[16] = -sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4])*dq[3] - sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5])*dq[5] - sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3])*dq[4] - sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[2] + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[5])*dq[3] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[2] + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[5])*dq[5] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[2] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[4])*dq[4] + sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5])*dq[1] + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4])*dq[1] + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*dq[1];
   out_7152843743093698702[17] = -sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4])*dq[2] + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[5])*dq[2] - sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[2])*dq[4] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4])*cos(q[5])*dq[5] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[3] - sin(q[1])*sin(q[3])*cos(q[5])*dq[1] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[3] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*dq[5] - sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4])*dq[1] + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4])*dq[1] - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[3] - sin(q[3])*sin(q[5])*cos(q[1])*dq[5] - sin(q[4])*sin(q[5])*cos(q[1])*cos(q[3])*dq[4] - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*dq[1] + cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[5] + cos(q[1])*cos(q[3])*cos(q[5])*dq[3];
   out_7152843743093698702[18] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3])*dq[2] - sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[4] + sin(q[1])*sin(q[2])*cos(q[4])*cos(q[5])*dq[5] - sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[2])*dq[3] + sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*dq[1] + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3])*cos(q[5])*dq[5] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[4] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[4])*dq[2] + sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4])*dq[1] - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[5])*dq[5] - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[4] + sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[4])*sin(q[5])*cos(q[1])*cos(q[3])*dq[3];
   out_7152843743093698702[19] = -sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5])*dq[2] - sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*dq[5] + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[2] + sin(q[1])*sin(q[2])*cos(q[4])*cos(q[5])*dq[4] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4])*cos(q[5])*dq[3] + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*dq[5] - sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*dq[1] + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3])*cos(q[5])*dq[4] + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[5])*dq[2] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*dq[5] + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*dq[3] - sin(q[1])*sin(q[5])*cos(q[3])*dq[1] + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*dq[1] - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[5])*dq[4] + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*dq[5] - sin(q[3])*sin(q[5])*cos(q[1])*dq[3] - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*dq[1] + cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*dq[3] + cos(q[1])*cos(q[3])*cos(q[5])*dq[5];
   out_7152843743093698702[20] = 0;

}
