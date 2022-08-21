/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_2_dot.h"
#include <math.h>

void jrx_2_dot(double *dq, double *q, double *out_8072764989247492357) {

   out_8072764989247492357[0] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_8072764989247492357[1] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_8072764989247492357[2] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_8072764989247492357[3] = 0;
   out_8072764989247492357[4] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_8072764989247492357[5] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_8072764989247492357[6] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_8072764989247492357[7] = 0;

}
