/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "rx_ee.h"
#include <math.h>

void rx_ee(double *q, double *out_3127990023137773493) {

   out_3127990023137773493[0] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_3127990023137773493[1] = -sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);

}
