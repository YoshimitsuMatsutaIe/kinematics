/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jrx_3_dot_BY_SYMPY_'                 *
 ******************************************************************************/
#include "jrx_3_dot.h"
#include <math.h>

void jrx_3_dot(double *dq, double *q, double *out_7178267392633411338) {

   out_7178267392633411338[0] = sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[0])*sin(q[1])*cos(q[3])*dq[3] + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[0])*sin(q[2])*cos(q[3])*dq[0] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[3] - sin(q[0])*sin(q[3])*cos(q[1])*dq[1] - sin(q[1])*sin(q[3])*cos(q[0])*dq[0] + sin(q[2])*sin(q[3])*cos(q[0])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - cos(q[0])*cos(q[2])*cos(q[3])*dq[2];
   out_7178267392633411338[1] = sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*sin(q[3])*cos(q[1])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[3] - sin(q[1])*sin(q[3])*cos(q[0])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] + cos(q[0])*cos(q[1])*cos(q[3])*dq[3];
   out_7178267392633411338[2] = sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[3])*cos(q[2])*dq[3] + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3])*dq[1] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[3] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - cos(q[0])*cos(q[2])*cos(q[3])*dq[0];
   out_7178267392633411338[3] = -sin(q[0])*sin(q[1])*cos(q[3])*dq[0] + sin(q[0])*sin(q[2])*cos(q[3])*dq[3] + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[3])*cos(q[2])*dq[2] + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*sin(q[3])*cos(q[0])*dq[3] + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*dq[2] + sin(q[2])*sin(q[3])*cos(q[0])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + cos(q[0])*cos(q[1])*cos(q[3])*dq[1];
   out_7178267392633411338[4] = 0;
   out_7178267392633411338[5] = 0;
   out_7178267392633411338[6] = 0;
   out_7178267392633411338[7] = -sin(q[0])*sin(q[1])*sin(q[3])*dq[0] + sin(q[0])*sin(q[2])*sin(q[3])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[0] - sin(q[0])*cos(q[2])*cos(q[3])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[1] + sin(q[1])*cos(q[0])*cos(q[3])*dq[3] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[2] - sin(q[2])*cos(q[0])*cos(q[3])*dq[0] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[3] + sin(q[3])*cos(q[0])*cos(q[1])*dq[1];
   out_7178267392633411338[8] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[2] + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[3] - sin(q[0])*sin(q[1])*sin(q[3])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[1] + sin(q[0])*cos(q[1])*cos(q[3])*dq[3] - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*dq[0] + sin(q[3])*cos(q[0])*cos(q[1])*dq[0];
   out_7178267392633411338[9] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3])*dq[1] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[3] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[2] - sin(q[0])*cos(q[2])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[3])*dq[2] - sin(q[3])*cos(q[0])*cos(q[2])*dq[3];
   out_7178267392633411338[10] = sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*dq[1] - sin(q[0])*sin(q[1])*sin(q[3])*dq[3] + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*dq[2] + sin(q[0])*sin(q[2])*sin(q[3])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*dq[3] + sin(q[0])*cos(q[1])*cos(q[3])*dq[1] + sin(q[1])*cos(q[0])*cos(q[3])*dq[0] - sin(q[2])*cos(q[0])*cos(q[3])*dq[3] - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[3])*cos(q[0])*cos(q[2])*dq[2];
   out_7178267392633411338[11] = 0;
   out_7178267392633411338[12] = 0;
   out_7178267392633411338[13] = 0;
   out_7178267392633411338[14] = 0;
   out_7178267392633411338[15] = sin(q[1])*cos(q[2])*cos(q[3])*dq[1] - sin(q[1])*cos(q[3])*dq[3] + sin(q[2])*cos(q[1])*cos(q[3])*dq[2] + sin(q[3])*cos(q[1])*cos(q[2])*dq[3] - sin(q[3])*cos(q[1])*dq[1];
   out_7178267392633411338[16] = -sin(q[1])*sin(q[2])*sin(q[3])*dq[3] + sin(q[1])*cos(q[2])*cos(q[3])*dq[2] + sin(q[2])*cos(q[1])*cos(q[3])*dq[1];
   out_7178267392633411338[17] = -sin(q[1])*sin(q[2])*sin(q[3])*dq[2] + sin(q[1])*cos(q[2])*cos(q[3])*dq[3] - sin(q[1])*cos(q[3])*dq[1] + sin(q[3])*cos(q[1])*cos(q[2])*dq[1] - sin(q[3])*cos(q[1])*dq[3];
   out_7178267392633411338[18] = 0;
   out_7178267392633411338[19] = 0;
   out_7178267392633411338[20] = 0;

}
