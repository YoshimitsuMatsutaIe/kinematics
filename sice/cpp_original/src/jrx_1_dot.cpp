/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_1_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_1_dot.h"
#include <math.h>

void jrx_1_dot(double *dq, double *q, double *out_6438382618188843916) {

   out_6438382618188843916[0] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_6438382618188843916[1] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_6438382618188843916[2] = 0;
   out_6438382618188843916[3] = 0;
   out_6438382618188843916[4] = -sin(q[0])*cos(q[1])*dq[0] - sin(q[0])*cos(q[1])*dq[1] - sin(q[1])*cos(q[0])*dq[0] - sin(q[1])*cos(q[0])*dq[1];
   out_6438382618188843916[5] = -sin(q[0])*cos(q[1])*dq[0] - sin(q[0])*cos(q[1])*dq[1] - sin(q[1])*cos(q[0])*dq[0] - sin(q[1])*cos(q[0])*dq[1];
   out_6438382618188843916[6] = 0;
   out_6438382618188843916[7] = 0;

}
