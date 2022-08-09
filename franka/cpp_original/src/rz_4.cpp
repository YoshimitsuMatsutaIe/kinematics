/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_4.h"
#include <math.h>

void rz_4(double *q, double *out_5708388834031211658) {

   out_5708388834031211658[0] = sin(q[0])*sin(q[2])*sin(q[3]) + sin(q[1])*cos(q[0])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5708388834031211658[1] = sin(q[0])*sin(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0]);
   out_5708388834031211658[2] = sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]);

}
