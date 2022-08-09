/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_5_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrx_5.h"
#include <math.h>

void jrx_5(double *q, double *out_8986145757008760113) {

   out_8986145757008760113[0] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3]) + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]);
   out_8986145757008760113[1] = sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_8986145757008760113[2] = sin(q[0])*sin(q[2])*sin(q[4])*cos(q[5]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2]) - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]);
   out_8986145757008760113[3] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_8986145757008760113[4] = sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3])*cos(q[5]) - sin(q[0])*cos(q[2])*cos(q[4])*cos(q[5]) - sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[5]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5]) - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]);
   out_8986145757008760113[5] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8986145757008760113[6] = 0;
   out_8986145757008760113[7] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_8986145757008760113[8] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3]);
   out_8986145757008760113[9] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2]) + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_8986145757008760113[10] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3]);
   out_8986145757008760113[11] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[5]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3])*cos(q[5]) + cos(q[0])*cos(q[2])*cos(q[4])*cos(q[5]);
   out_8986145757008760113[12] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]);
   out_8986145757008760113[13] = 0;
   out_8986145757008760113[14] = 0;
   out_8986145757008760113[15] = -sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) - sin(q[1])*sin(q[5])*cos(q[3]) + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_8986145757008760113[16] = -sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5]) + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[5]);
   out_8986145757008760113[17] = sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3]) - sin(q[3])*sin(q[5])*cos(q[1]) + cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_8986145757008760113[18] = sin(q[1])*sin(q[2])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3])*cos(q[5]) - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[5]);
   out_8986145757008760113[19] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + cos(q[1])*cos(q[3])*cos(q[5]);
   out_8986145757008760113[20] = 0;

}
