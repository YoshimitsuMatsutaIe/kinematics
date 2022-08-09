/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_3.h"
#include <math.h>

void rz_3(double *q, double *out_8970923108909096525) {

   out_8970923108909096525[0] = sin(q[0])*cos(q[2]) + sin(q[2])*cos(q[0])*cos(q[1]);
   out_8970923108909096525[1] = sin(q[0])*sin(q[2])*cos(q[1]) - cos(q[0])*cos(q[2]);
   out_8970923108909096525[2] = -sin(q[1])*sin(q[2]);

}
