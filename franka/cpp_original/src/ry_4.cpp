/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "ry_4.h"
#include <math.h>

void ry_4(double *q, double *out_7219893225990338260) {

   out_7219893225990338260[0] = sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3]) - sin(q[0])*cos(q[2])*cos(q[4]) - sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4]) - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7219893225990338260[1] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4]) - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3]) + cos(q[0])*cos(q[2])*cos(q[4]);
   out_7219893225990338260[2] = sin(q[1])*sin(q[2])*cos(q[4]) + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3]) - sin(q[3])*sin(q[4])*cos(q[1]);

}
