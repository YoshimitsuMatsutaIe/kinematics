/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "ry_2.h"
#include <math.h>

void ry_2(double *q, double *out_1468864608753905895) {

   out_1468864608753905895[0] = -sin(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_1468864608753905895[1] = -sin(q[0])*sin(q[2])*cos(q[1]) + cos(q[0])*cos(q[2]);
   out_1468864608753905895[2] = sin(q[1])*sin(q[2]);

}
