/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrz_4_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrz_4_dot.h"
#include <math.h>

void jrz_4_dot(double *dq, double *q, double *out_4898849854347111168) {

   out_4898849854347111168[0] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[3])*dq[3] - sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] - sin(q[0])*sin(q[2])*sin(q[3])*dq[0] + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] - sin(q[0])*cos(q[1])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[3])*dq[0] + sin(q[2])*cos(q[0])*cos(q[3])*dq[3] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] + sin(q[3])*cos(q[0])*cos(q[2])*dq[2];
   out_4898849854347111168[1] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[2] + sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[1])*cos(q[0])*cos(q[3])*dq[1] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[0])*cos(q[1])*dq[3];
   out_4898849854347111168[2] = -sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[0] - sin(q[0])*sin(q[2])*sin(q[3])*dq[2] + sin(q[0])*cos(q[2])*cos(q[3])*dq[3] - sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0])*dq[1] + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[3] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[2] + sin(q[3])*cos(q[0])*cos(q[2])*dq[0];
   out_4898849854347111168[3] = sin(q[0])*sin(q[1])*sin(q[3])*dq[0] - sin(q[0])*sin(q[2])*sin(q[3])*dq[3] + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] + sin(q[0])*cos(q[2])*cos(q[3])*dq[2] + sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[0])*cos(q[3])*dq[3] + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] + sin(q[2])*cos(q[0])*cos(q[3])*dq[0] + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*dq[1];
   out_4898849854347111168[4] = 0;
   out_4898849854347111168[5] = 0;
   out_4898849854347111168[6] = 0;
   out_4898849854347111168[7] = -sin(q[0])*sin(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*sin(q[3])*cos(q[0])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + cos(q[0])*cos(q[1])*cos(q[3])*dq[1];
   out_4898849854347111168[8] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[2] + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[3] - sin(q[0])*sin(q[1])*cos(q[3])*dq[1] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*sin(q[3])*cos(q[1])*dq[3] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[0] + cos(q[0])*cos(q[1])*cos(q[3])*dq[0];
   out_4898849854347111168[9] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[3])*cos(q[2])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*dq[2] - cos(q[0])*cos(q[2])*cos(q[3])*dq[3];
   out_4898849854347111168[10] = sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*sin(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] - sin(q[0])*sin(q[3])*cos(q[1])*dq[1] - sin(q[1])*sin(q[3])*cos(q[0])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_4898849854347111168[11] = 0;
   out_4898849854347111168[12] = 0;
   out_4898849854347111168[13] = 0;
   out_4898849854347111168[14] = 0;
   out_4898849854347111168[15] = -sin(q[1])*sin(q[3])*cos(q[2])*dq[1] + sin(q[1])*sin(q[3])*dq[3] - sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + cos(q[1])*cos(q[2])*cos(q[3])*dq[3] - cos(q[1])*cos(q[3])*dq[1];
   out_4898849854347111168[16] = -sin(q[1])*sin(q[2])*cos(q[3])*dq[3] - sin(q[1])*sin(q[3])*cos(q[2])*dq[2] - sin(q[2])*sin(q[3])*cos(q[1])*dq[1];
   out_4898849854347111168[17] = -sin(q[1])*sin(q[2])*cos(q[3])*dq[2] - sin(q[1])*sin(q[3])*cos(q[2])*dq[3] + sin(q[1])*sin(q[3])*dq[1] + cos(q[1])*cos(q[2])*cos(q[3])*dq[1] - cos(q[1])*cos(q[3])*dq[3];
   out_4898849854347111168[18] = 0;
   out_4898849854347111168[19] = 0;
   out_4898849854347111168[20] = 0;

}
