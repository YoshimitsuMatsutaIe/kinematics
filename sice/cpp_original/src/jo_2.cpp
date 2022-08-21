/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_2.h"
#include <math.h>

void jo_2(double l1, double l2, double *q, double *out_5178641788827164693) {

   out_5178641788827164693[0] = -l1*sin(q[0]) - l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]);
   out_5178641788827164693[1] = -l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]);
   out_5178641788827164693[2] = 0;
   out_5178641788827164693[3] = 0;
   out_5178641788827164693[4] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]);
   out_5178641788827164693[5] = -l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]);
   out_5178641788827164693[6] = 0;
   out_5178641788827164693[7] = 0;

}
