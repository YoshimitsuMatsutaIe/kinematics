/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "rz_ee.h"
#include <math.h>

void rz_ee(double *q, double *out_1164316380098977063) {

   out_1164316380098977063[0] = -sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) - sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) - sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_1164316380098977063[1] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) - sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]);
   out_1164316380098977063[2] = sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - cos(q[1])*cos(q[3])*cos(q[5]);

}
