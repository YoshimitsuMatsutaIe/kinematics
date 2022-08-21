/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_2_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "jo_2_dot.h"
#include <math.h>

void jo_2_dot(double *dq, double l1, double l2, double *q, double *out_660357083649686940) {

   out_660357083649686940[0] = -l1*cos(q[0])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[1] - l2*cos(q[0])*cos(q[1])*dq[0] - l2*cos(q[0])*cos(q[1])*dq[1];
   out_660357083649686940[1] = l2*sin(q[0])*sin(q[1])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[1] - l2*cos(q[0])*cos(q[1])*dq[0] - l2*cos(q[0])*cos(q[1])*dq[1];
   out_660357083649686940[2] = 0;
   out_660357083649686940[3] = 0;
   out_660357083649686940[4] = -l1*sin(q[0])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[1] - l2*sin(q[1])*cos(q[0])*dq[0] - l2*sin(q[1])*cos(q[0])*dq[1];
   out_660357083649686940[5] = -l2*sin(q[0])*cos(q[1])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[1] - l2*sin(q[1])*cos(q[0])*dq[0] - l2*sin(q[1])*cos(q[0])*dq[1];
   out_660357083649686940[6] = 0;
   out_660357083649686940[7] = 0;

}
