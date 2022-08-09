/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_6_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrx_6.h"
#include <math.h>

void jrx_6(double *q, double *out_8962479472359196222) {

   out_8962479472359196222[0] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*sin(q[6]) - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*cos(q[6]) + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[2])*sin(q[6])*cos(q[1])*cos(q[4]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[6]) - sin(q[0])*sin(q[4])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[6]) - sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5])*cos(q[6]) + sin(q[6])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_8962479472359196222[1] = sin(q[1])*sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*cos(q[6]) - sin(q[1])*sin(q[2])*sin(q[6])*cos(q[0])*cos(q[4]) + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[6]) - sin(q[1])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[6]);
   out_8962479472359196222[2] = sin(q[0])*sin(q[2])*sin(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[2])*sin(q[6])*cos(q[4]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[6]) - sin(q[0])*sin(q[4])*sin(q[6])*cos(q[2])*cos(q[3]) - sin(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[6]) - sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*cos(q[6]) + sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4]);
   out_8962479472359196222[3] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[4])*sin(q[6]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[6]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[6]) + sin(q[1])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[3]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[6]);
   out_8962479472359196222[4] = sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[2])*sin(q[6])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[4])*sin(q[6])*cos(q[2]) - sin(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[3])*sin(q[6])*cos(q[0])*cos(q[4]) - sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*cos(q[6]) + sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_8962479472359196222[5] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4])*cos(q[6]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[6]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4])*cos(q[6]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[6]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5])*cos(q[6]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[6]);
   out_8962479472359196222[6] = -sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*sin(q[6]) - sin(q[0])*sin(q[2])*sin(q[4])*cos(q[3])*cos(q[6]) + sin(q[0])*sin(q[2])*sin(q[6])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[4])*sin(q[6])*cos(q[2])*cos(q[5]) + sin(q[0])*cos(q[2])*cos(q[4])*cos(q[6]) + sin(q[1])*sin(q[3])*sin(q[4])*cos(q[0])*cos(q[6]) - sin(q[1])*sin(q[3])*sin(q[6])*cos(q[0])*cos(q[4])*cos(q[5]) - sin(q[1])*sin(q[5])*sin(q[6])*cos(q[0])*cos(q[3]) + sin(q[2])*sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[5]) + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[4])*cos(q[6]) + sin(q[3])*sin(q[5])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2]) + sin(q[4])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[6]) - sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_8962479472359196222[7] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[6]) - sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[6])*cos(q[2])*cos(q[4]) + sin(q[1])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[6]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[6]) + sin(q[4])*sin(q[6])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[8] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[1])*sin(q[2])*sin(q[6])*cos(q[4]) + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[6]) - sin(q[0])*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[2])*cos(q[3]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[1]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[6]);
   out_8962479472359196222[9] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[6]) - sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[1])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[6])*cos(q[0])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[6]) + sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[3]) + cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[10] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[6]) + sin(q[0])*sin(q[1])*sin(q[4])*sin(q[6])*cos(q[3]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[1])*cos(q[2]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[6]) - sin(q[2])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[0]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[6]);
   out_8962479472359196222[11] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[1])*sin(q[3])*sin(q[6])*cos(q[4]) - sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[1]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3])*cos(q[5])*cos(q[6]) + sin(q[2])*sin(q[6])*cos(q[0])*cos(q[3])*cos(q[4]) + sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2]) + cos(q[0])*cos(q[2])*cos(q[4])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[12] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4])*cos(q[6]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5])*cos(q[6]) + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[6]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5])*cos(q[6]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[6]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5])*cos(q[6]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[6]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[6]);
   out_8962479472359196222[13] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*cos(q[6]) - sin(q[0])*sin(q[1])*sin(q[3])*sin(q[6])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[1])*sin(q[5])*sin(q[6])*cos(q[3]) + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[1])*cos(q[5]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[4])*cos(q[6]) + sin(q[0])*sin(q[3])*sin(q[5])*sin(q[6])*cos(q[1])*cos(q[2]) + sin(q[0])*sin(q[4])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[6]) - sin(q[0])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*sin(q[6])*cos(q[0]) + sin(q[2])*sin(q[4])*cos(q[0])*cos(q[3])*cos(q[6]) - sin(q[2])*sin(q[6])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[4])*sin(q[6])*cos(q[0])*cos(q[2])*cos(q[5]) - cos(q[0])*cos(q[2])*cos(q[4])*cos(q[6]);
   out_8962479472359196222[14] = 0;
   out_8962479472359196222[15] = -sin(q[1])*sin(q[3])*sin(q[4])*sin(q[6]) - sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) - sin(q[1])*sin(q[5])*cos(q[3])*cos(q[6]) + sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5])*cos(q[6]) - sin(q[2])*sin(q[6])*cos(q[1])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[6]) - sin(q[4])*sin(q[6])*cos(q[1])*cos(q[2])*cos(q[3]) - cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[16] = -sin(q[1])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[6]) + sin(q[1])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[3]) + sin(q[1])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[5])*cos(q[6]) - sin(q[1])*sin(q[6])*cos(q[2])*cos(q[4]);
   out_8962479472359196222[17] = sin(q[1])*sin(q[3])*sin(q[4])*sin(q[6])*cos(q[2]) + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[6]) - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[6]) + sin(q[4])*sin(q[6])*cos(q[1])*cos(q[3]) + cos(q[1])*cos(q[3])*cos(q[4])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[18] = sin(q[1])*sin(q[2])*sin(q[4])*sin(q[6]) + sin(q[1])*sin(q[2])*cos(q[4])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3])*cos(q[5])*cos(q[6]) - sin(q[1])*sin(q[6])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[3])*sin(q[4])*cos(q[1])*cos(q[5])*cos(q[6]) + sin(q[3])*sin(q[6])*cos(q[1])*cos(q[4]);
   out_8962479472359196222[19] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[6]) + sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5])*cos(q[6]) + sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[6]) - sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4])*cos(q[6]) + cos(q[1])*cos(q[3])*cos(q[5])*cos(q[6]);
   out_8962479472359196222[20] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[6])*cos(q[5]) - sin(q[1])*sin(q[2])*cos(q[4])*cos(q[6]) - sin(q[1])*sin(q[3])*sin(q[5])*sin(q[6])*cos(q[2]) - sin(q[1])*sin(q[4])*cos(q[2])*cos(q[3])*cos(q[6]) + sin(q[1])*sin(q[6])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[3])*sin(q[4])*cos(q[1])*cos(q[6]) - sin(q[3])*sin(q[6])*cos(q[1])*cos(q[4])*cos(q[5]) - sin(q[5])*sin(q[6])*cos(q[1])*cos(q[3]);

}
