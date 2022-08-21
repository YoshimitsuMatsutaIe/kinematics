/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jry_2_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jry_2.h"
#include <math.h>

void jry_2(double *q, double *out_4774379428997315329) {

   out_4774379428997315329[0] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_4774379428997315329[1] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_4774379428997315329[2] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_4774379428997315329[3] = 0;
   out_4774379428997315329[4] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_4774379428997315329[5] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_4774379428997315329[6] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_4774379428997315329[7] = 0;

}
