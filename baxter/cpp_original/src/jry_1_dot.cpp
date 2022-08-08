/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jry_1_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jry_1_dot.h"
#include <math.h>

void jry_1_dot(double *dq, double *q, double *out_7352790114080953182) {

   out_7352790114080953182[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_7352790114080953182[1] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_7352790114080953182[2] = 0;
   out_7352790114080953182[3] = 0;
   out_7352790114080953182[4] = 0;
   out_7352790114080953182[5] = 0;
   out_7352790114080953182[6] = 0;
   out_7352790114080953182[7] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[1] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[0];
   out_7352790114080953182[8] = (1.0/2.0)*M_SQRT2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*sin(q[1])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1])*dq[1];
   out_7352790114080953182[9] = 0;
   out_7352790114080953182[10] = 0;
   out_7352790114080953182[11] = 0;
   out_7352790114080953182[12] = 0;
   out_7352790114080953182[13] = 0;
   out_7352790114080953182[14] = 0;
   out_7352790114080953182[15] = -sin(q[1])*dq[1];
   out_7352790114080953182[16] = 0;
   out_7352790114080953182[17] = 0;
   out_7352790114080953182[18] = 0;
   out_7352790114080953182[19] = 0;
   out_7352790114080953182[20] = 0;

}
