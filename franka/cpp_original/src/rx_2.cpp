/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_2.h"
#include <math.h>

void rx_2(double *q, double *out_6195378602037862550) {

   out_6195378602037862550[0] = -sin(q[0])*sin(q[2]) + cos(q[0])*cos(q[1])*cos(q[2]);
   out_6195378602037862550[1] = sin(q[0])*cos(q[1])*cos(q[2]) + sin(q[2])*cos(q[0]);
   out_6195378602037862550[2] = -sin(q[1])*cos(q[2]);

}
