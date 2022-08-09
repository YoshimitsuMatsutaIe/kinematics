/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_3.h"
#include <math.h>

void rx_3(double *q, double *out_8051557854301833984) {

   out_8051557854301833984[0] = -sin(q[0])*sin(q[2])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_8051557854301833984[1] = sin(q[0])*sin(q[1])*sin(q[3]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[2])*cos(q[0])*cos(q[3]);
   out_8051557854301833984[2] = -sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[1]);

}
