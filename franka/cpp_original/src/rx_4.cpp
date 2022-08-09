/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_4.h"
#include <math.h>

void rx_4(double *q, double *out_4605396555137186137) {

   out_4605396555137186137[0] = -sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[4])*cos(q[2]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_4605396555137186137[1] = sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4]) - sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4]) + sin(q[4])*cos(q[0])*cos(q[2]);
   out_4605396555137186137[2] = sin(q[1])*sin(q[2])*sin(q[4]) - sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*cos(q[1])*cos(q[4]);

}
