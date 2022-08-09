/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jry_5_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jry_5.h"
#include <math.h>

void jry_5(double *q, double *out_2852623150499638063) {

   out_2852623150499638063[0] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) - sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) + sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]);
   out_2852623150499638063[1] = -sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_2852623150499638063[2] = -sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5]) + sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5]) + sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5]) + sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_2852623150499638063[3] = -sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[5]) - sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]);
   out_2852623150499638063[4] = -sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3]) + sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4]) + sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0]) + sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) + sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_2852623150499638063[5] = -sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) + sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5]) - sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3]) + sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5]) + sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_2852623150499638063[6] = 0;
   out_2852623150499638063[7] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2852623150499638063[8] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) + sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) + sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_2852623150499638063[9] = sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2852623150499638063[10] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[5]) - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5]);
   out_2852623150499638063[11] = sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5]) + sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4]) + sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3]) - sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_2852623150499638063[12] = -sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3]) + sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) - sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]);
   out_2852623150499638063[13] = 0;
   out_2852623150499638063[14] = 0;
   out_2852623150499638063[15] = sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[1])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) + sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_2852623150499638063[16] = -sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5]) - sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2]);
   out_2852623150499638063[17] = -sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4]) + sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) - sin(q[3])*cos(q[1])*cos(q[5]) - sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_2852623150499638063[18] = -sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4]) - sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3]) + sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1]);
   out_2852623150499638063[19] = -sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) - sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) + sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) - sin(q[5])*cos(q[1])*cos(q[3]);
   out_2852623150499638063[20] = 0;

}
