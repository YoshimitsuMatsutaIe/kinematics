/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "ry_3.h"
#include <math.h>

void ry_3(double *q, double *out_1316471419255171156) {

   out_1316471419255171156[0] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1316471419255171156[1] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);

}
