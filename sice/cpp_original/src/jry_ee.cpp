/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                  This file is part of 'jry_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jry_ee.h"
#include <math.h>

void jry_ee(double *q, double *out_6311515957166675039) {

   out_6311515957166675039[0] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_6311515957166675039[1] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_6311515957166675039[2] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_6311515957166675039[3] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_6311515957166675039[4] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6311515957166675039[5] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6311515957166675039[6] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6311515957166675039[7] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);

}
