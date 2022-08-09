/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_5_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_5.h"
#include <math.h>

void jo_5(double a4, double a5, double d3, double d5, double *q, double *out_3987670689879643223) {

   out_3987670689879643223[0] = -a4*sin(q[0])*cos(q[1])*cos(q[2]) - a4*sin(q[2])*cos(q[0]) - a5*sin(q[0])*sin(q[1])*sin(q[3]) - a5*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - a5*sin(q[2])*cos(q[0])*cos(q[3]) - d3*sin(q[0])*sin(q[1]) - d5*sin(q[0])*sin(q[1])*cos(q[3]) + d5*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + d5*sin(q[2])*sin(q[3])*cos(q[0]);
   out_3987670689879643223[1] = -a4*sin(q[1])*cos(q[0])*cos(q[2]) - a5*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + a5*sin(q[3])*cos(q[0])*cos(q[1]) + d3*cos(q[0])*cos(q[1]) + d5*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + d5*cos(q[0])*cos(q[1])*cos(q[3]);
   out_3987670689879643223[2] = -a4*sin(q[0])*cos(q[2]) - a4*sin(q[2])*cos(q[0])*cos(q[1]) - a5*sin(q[0])*cos(q[2])*cos(q[3]) - a5*sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) + d5*sin(q[0])*sin(q[3])*cos(q[2]) + d5*sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]);
   out_3987670689879643223[3] = a5*sin(q[0])*sin(q[2])*sin(q[3]) + a5*sin(q[1])*cos(q[0])*cos(q[3]) - a5*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]) + d5*sin(q[0])*sin(q[2])*cos(q[3]) - d5*sin(q[1])*sin(q[3])*cos(q[0]) - d5*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_3987670689879643223[4] = 0;
   out_3987670689879643223[5] = 0;
   out_3987670689879643223[6] = 0;
   out_3987670689879643223[7] = -a4*sin(q[0])*sin(q[2]) + a4*cos(q[0])*cos(q[1])*cos(q[2]) - a5*sin(q[0])*sin(q[2])*cos(q[3]) + a5*sin(q[1])*sin(q[3])*cos(q[0]) + a5*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + d3*sin(q[1])*cos(q[0]) + d5*sin(q[0])*sin(q[2])*sin(q[3]) + d5*sin(q[1])*cos(q[0])*cos(q[3]) - d5*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3987670689879643223[8] = -a4*sin(q[0])*sin(q[1])*cos(q[2]) - a5*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + a5*sin(q[0])*sin(q[3])*cos(q[1]) + d3*sin(q[0])*cos(q[1]) + d5*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + d5*sin(q[0])*cos(q[1])*cos(q[3]);
   out_3987670689879643223[9] = -a4*sin(q[0])*sin(q[2])*cos(q[1]) + a4*cos(q[0])*cos(q[2]) - a5*sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + a5*cos(q[0])*cos(q[2])*cos(q[3]) + d5*sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - d5*sin(q[3])*cos(q[0])*cos(q[2]);
   out_3987670689879643223[10] = a5*sin(q[0])*sin(q[1])*cos(q[3]) - a5*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - a5*sin(q[2])*sin(q[3])*cos(q[0]) - d5*sin(q[0])*sin(q[1])*sin(q[3]) - d5*sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - d5*sin(q[2])*cos(q[0])*cos(q[3]);
   out_3987670689879643223[11] = 0;
   out_3987670689879643223[12] = 0;
   out_3987670689879643223[13] = 0;
   out_3987670689879643223[14] = 0;
   out_3987670689879643223[15] = -a4*cos(q[1])*cos(q[2]) - a5*sin(q[1])*sin(q[3]) - a5*cos(q[1])*cos(q[2])*cos(q[3]) - d3*sin(q[1]) - d5*sin(q[1])*cos(q[3]) + d5*sin(q[3])*cos(q[1])*cos(q[2]);
   out_3987670689879643223[16] = a4*sin(q[1])*sin(q[2]) + a5*sin(q[1])*sin(q[2])*cos(q[3]) - d5*sin(q[1])*sin(q[2])*sin(q[3]);
   out_3987670689879643223[17] = a5*sin(q[1])*sin(q[3])*cos(q[2]) + a5*cos(q[1])*cos(q[3]) + d5*sin(q[1])*cos(q[2])*cos(q[3]) - d5*sin(q[3])*cos(q[1]);
   out_3987670689879643223[18] = 0;
   out_3987670689879643223[19] = 0;
   out_3987670689879643223[20] = 0;

}
