/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_3_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_3_dot.h"
#include <math.h>

void jrx_3_dot(double *dq, double *q, double *out_2334781045337462398) {

   out_2334781045337462398[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_2334781045337462398[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0];
   out_2334781045337462398[2] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[0];
   out_2334781045337462398[3] = -1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[0];
   out_2334781045337462398[4] = 0;
   out_2334781045337462398[5] = 0;
   out_2334781045337462398[6] = 0;
   out_2334781045337462398[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_2334781045337462398[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0];
   out_2334781045337462398[9] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[2])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[2])*cos(q[3])*dq[0];
   out_2334781045337462398[10] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] + (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[1])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*sin(q[3])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[1])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[0])*sin(q[3])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*cos(q[3])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*cos(q[3])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[2])*sin(q[3])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[2])*cos(q[0])*cos(q[3])*dq[3] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] + (1.0/2.0)*M_SQRT2*sin(q[3])*cos(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*cos(q[0])*cos(q[1])*cos(q[3])*dq[0];
   out_2334781045337462398[11] = 0;
   out_2334781045337462398[12] = 0;
   out_2334781045337462398[13] = 0;
   out_2334781045337462398[14] = 0;
   out_2334781045337462398[15] = -sin(q[1])*sin(q[2])*cos(q[3])*dq[2] - sin(q[1])*sin(q[3])*cos(q[2])*dq[3] - sin(q[1])*sin(q[3])*dq[1] + cos(q[1])*cos(q[2])*cos(q[3])*dq[1] + cos(q[1])*cos(q[3])*dq[3];
   out_2334781045337462398[16] = -sin(q[1])*sin(q[2])*cos(q[3])*dq[1] - sin(q[2])*sin(q[3])*cos(q[1])*dq[3] + cos(q[1])*cos(q[2])*cos(q[3])*dq[2];
   out_2334781045337462398[17] = -sin(q[1])*sin(q[3])*cos(q[2])*dq[1] - sin(q[1])*sin(q[3])*dq[3] - sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + cos(q[1])*cos(q[3])*dq[1];
   out_2334781045337462398[18] = 0;
   out_2334781045337462398[19] = 0;
   out_2334781045337462398[20] = 0;

}
