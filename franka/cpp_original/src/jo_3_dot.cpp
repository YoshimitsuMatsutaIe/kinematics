/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_3_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "jo_3_dot.h"
#include <math.h>

void jo_3_dot(double a4, double d3, double *dq, double *q, double *out_5958502867052862882) {

   out_5958502867052862882[0] = a4*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + a4*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + a4*sin(q[0])*sin(q[2])*dq[0] - a4*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - a4*cos(q[0])*cos(q[2])*dq[2] - d3*sin(q[0])*cos(q[1])*dq[1] - d3*sin(q[1])*cos(q[0])*dq[0];
   out_5958502867052862882[1] = a4*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + a4*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - a4*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - d3*sin(q[0])*cos(q[1])*dq[0] - d3*sin(q[1])*cos(q[0])*dq[1];
   out_5958502867052862882[2] = a4*sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + a4*sin(q[0])*sin(q[2])*dq[2] + a4*sin(q[1])*sin(q[2])*cos(q[0])*dq[1] - a4*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] - a4*cos(q[0])*cos(q[2])*dq[0];
   out_5958502867052862882[3] = 0;
   out_5958502867052862882[4] = 0;
   out_5958502867052862882[5] = 0;
   out_5958502867052862882[6] = 0;
   out_5958502867052862882[7] = -a4*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - a4*sin(q[0])*cos(q[2])*dq[2] - a4*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - a4*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - a4*sin(q[2])*cos(q[0])*dq[0] - d3*sin(q[0])*sin(q[1])*dq[0] + d3*cos(q[0])*cos(q[1])*dq[1];
   out_5958502867052862882[8] = a4*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - a4*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - a4*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - d3*sin(q[0])*sin(q[1])*dq[1] + d3*cos(q[0])*cos(q[1])*dq[0];
   out_5958502867052862882[9] = a4*sin(q[0])*sin(q[1])*sin(q[2])*dq[1] - a4*sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - a4*sin(q[0])*cos(q[2])*dq[0] - a4*sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - a4*sin(q[2])*cos(q[0])*dq[2];
   out_5958502867052862882[10] = 0;
   out_5958502867052862882[11] = 0;
   out_5958502867052862882[12] = 0;
   out_5958502867052862882[13] = 0;
   out_5958502867052862882[14] = 0;
   out_5958502867052862882[15] = a4*sin(q[1])*cos(q[2])*dq[1] + a4*sin(q[2])*cos(q[1])*dq[2] - d3*cos(q[1])*dq[1];
   out_5958502867052862882[16] = a4*sin(q[1])*cos(q[2])*dq[2] + a4*sin(q[2])*cos(q[1])*dq[1];
   out_5958502867052862882[17] = 0;
   out_5958502867052862882[18] = 0;
   out_5958502867052862882[19] = 0;
   out_5958502867052862882[20] = 0;

}
