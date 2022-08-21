/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_3.h"
#include <math.h>

void jo_3(double l1, double l2, double l3, double *q, double *out_1615446184792831910) {

   out_1615446184792831910[0] = -l1*sin(q[0]) - l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]) + l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_1615446184792831910[1] = -l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]) + l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_1615446184792831910[2] = l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_1615446184792831910[3] = 0;
   out_1615446184792831910[4] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]) - l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1615446184792831910[5] = -l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]) - l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1615446184792831910[6] = -l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_1615446184792831910[7] = 0;

}
