/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrz_2_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrz_2_dot.h"
#include <math.h>

void jrz_2_dot(double *dq, double *q, double *out_5512522233888576031) {

   out_5512522233888576031[0] = -sin(q[0])*cos(q[1])*dq[1] - sin(q[1])*cos(q[0])*dq[0];
   out_5512522233888576031[1] = -sin(q[0])*cos(q[1])*dq[0] - sin(q[1])*cos(q[0])*dq[1];
   out_5512522233888576031[2] = 0;
   out_5512522233888576031[3] = 0;
   out_5512522233888576031[4] = 0;
   out_5512522233888576031[5] = 0;
   out_5512522233888576031[6] = 0;
   out_5512522233888576031[7] = -sin(q[0])*sin(q[1])*dq[0] + cos(q[0])*cos(q[1])*dq[1];
   out_5512522233888576031[8] = -sin(q[0])*sin(q[1])*dq[1] + cos(q[0])*cos(q[1])*dq[0];
   out_5512522233888576031[9] = 0;
   out_5512522233888576031[10] = 0;
   out_5512522233888576031[11] = 0;
   out_5512522233888576031[12] = 0;
   out_5512522233888576031[13] = 0;
   out_5512522233888576031[14] = 0;
   out_5512522233888576031[15] = -cos(q[1])*dq[1];
   out_5512522233888576031[16] = 0;
   out_5512522233888576031[17] = 0;
   out_5512522233888576031[18] = 0;
   out_5512522233888576031[19] = 0;
   out_5512522233888576031[20] = 0;

}
