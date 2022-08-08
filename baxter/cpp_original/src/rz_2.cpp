/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "rz_2.h"
#include <math.h>

void rz_2(double *q, double *out_7966980438570399557) {

   out_7966980438570399557[0] = (1.0/2.0)*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_7966980438570399557[1] = -1.0/2.0*M_SQRT2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*cos(q[0])*cos(q[1]);
   out_7966980438570399557[2] = -sin(q[1]);

}
