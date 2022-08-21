/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rx_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rx_2.h"
#include <math.h>

void rx_2(double *q, double *out_2676196042519172584) {

   out_2676196042519172584[0] = -sin(q[0])*sin(q[1])*cos(q[2]) - sin(q[0])*sin(q[2])*cos(q[1]) - sin(q[1])*sin(q[2])*cos(q[0]) + cos(q[0])*cos(q[1])*cos(q[2]);
   out_2676196042519172584[1] = -sin(q[0])*sin(q[1])*sin(q[2]) + sin(q[0])*cos(q[1])*cos(q[2]) + sin(q[1])*cos(q[0])*cos(q[2]) + sin(q[2])*cos(q[0])*cos(q[1]);

}
