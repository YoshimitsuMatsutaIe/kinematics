/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_2_dot.h"
#include <math.h>

void jrx_2_dot(double *dq, double *q, double *out_7365873227648548619) {

   out_7365873227648548619[0] = sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[2])*dq[2];
   out_7365873227648548619[1] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1];
   out_7365873227648548619[2] = sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - cos(q[0])*cos(q[2])*dq[0];
   out_7365873227648548619[3] = 0;
   out_7365873227648548619[4] = 0;
   out_7365873227648548619[5] = 0;
   out_7365873227648548619[6] = 0;
   out_7365873227648548619[7] = -sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - sin(q[2])*cos(q[0])*dq[0];
   out_7365873227648548619[8] = sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0];
   out_7365873227648548619[9] = sin(q[0])*sin(q[1])*sin(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[0])*cos(q[2])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*dq[2];
   out_7365873227648548619[10] = 0;
   out_7365873227648548619[11] = 0;
   out_7365873227648548619[12] = 0;
   out_7365873227648548619[13] = 0;
   out_7365873227648548619[14] = 0;
   out_7365873227648548619[15] = sin(q[1])*cos(q[2])*dq[1] + sin(q[2])*cos(q[1])*dq[2];
   out_7365873227648548619[16] = sin(q[1])*cos(q[2])*dq[2] + sin(q[2])*cos(q[1])*dq[1];
   out_7365873227648548619[17] = 0;
   out_7365873227648548619[18] = 0;
   out_7365873227648548619[19] = 0;
   out_7365873227648548619[20] = 0;

}
