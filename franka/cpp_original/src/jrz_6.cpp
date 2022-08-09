/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrz_6_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrz_6.h"
#include <math.h>

void jrz_6(double *q, double *out_5225620928214846354) {

   out_5225620928214846354[0] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[0])*sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[0])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[5]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[2]);
   out_5225620928214846354[1] = sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) - sin(q[1])*sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) - cos(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_5225620928214846354[2] = sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5]) - sin(q[0])*sin(q[3])*cos(q[2])*cos(q[5]) - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[5]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[3])*cos(q[4]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_5225620928214846354[3] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5])*cos(q[4]) - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[5]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3])*cos(q[4]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[4]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]);
   out_5225620928214846354[4] = sin(q[0])*sin(q[2])*sin(q[4])*sin(q[5])*cos(q[3]) - sin(q[0])*sin(q[5])*cos(q[2])*cos(q[4]) - sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5])*cos(q[0]) - sin(q[2])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[4]) - sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_5225620928214846354[5] = sin(q[0])*sin(q[2])*sin(q[3])*sin(q[5]) - sin(q[0])*sin(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[0])*sin(q[4])*cos(q[2])*cos(q[5]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[4])*cos(q[5]) + sin(q[1])*sin(q[5])*cos(q[0])*cos(q[3]) - sin(q[2])*sin(q[4])*cos(q[0])*cos(q[1])*cos(q[5]) - sin(q[3])*sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]);
   out_5225620928214846354[6] = 0;
   out_5225620928214846354[7] = -sin(q[0])*sin(q[2])*sin(q[3])*cos(q[5]) - sin(q[0])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[4])*sin(q[5])*cos(q[2]) + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) - sin(q[1])*cos(q[0])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[1]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[5]) + sin(q[5])*cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_5225620928214846354[8] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[4])*sin(q[5]) - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2])*cos(q[5]) - sin(q[0])*sin(q[1])*sin(q[5])*cos(q[2])*cos(q[3])*cos(q[4]) + sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[4]) - sin(q[0])*cos(q[1])*cos(q[3])*cos(q[5]);
   out_5225620928214846354[9] = -sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1])*cos(q[5]) - sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0]) + sin(q[3])*cos(q[0])*cos(q[2])*cos(q[5]) + sin(q[5])*cos(q[0])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_5225620928214846354[10] = sin(q[0])*sin(q[1])*sin(q[3])*cos(q[5]) + sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3])*cos(q[4]) - sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[4]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) - sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0])*cos(q[4]) + sin(q[2])*cos(q[0])*cos(q[3])*cos(q[5]);
   out_5225620928214846354[11] = -sin(q[0])*sin(q[1])*sin(q[3])*sin(q[4])*sin(q[5]) - sin(q[0])*sin(q[2])*sin(q[5])*cos(q[1])*cos(q[4]) - sin(q[0])*sin(q[4])*sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[2])*sin(q[4])*sin(q[5])*cos(q[0])*cos(q[3]) + sin(q[5])*cos(q[0])*cos(q[2])*cos(q[4]);
   out_5225620928214846354[12] = sin(q[0])*sin(q[1])*sin(q[3])*cos(q[4])*cos(q[5]) + sin(q[0])*sin(q[1])*sin(q[5])*cos(q[3]) - sin(q[0])*sin(q[2])*sin(q[4])*cos(q[1])*cos(q[5]) - sin(q[0])*sin(q[3])*sin(q[5])*cos(q[1])*cos(q[2]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) - sin(q[2])*sin(q[3])*sin(q[5])*cos(q[0]) + sin(q[2])*cos(q[0])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[4])*cos(q[0])*cos(q[2])*cos(q[5]);
   out_5225620928214846354[13] = 0;
   out_5225620928214846354[14] = 0;
   out_5225620928214846354[15] = -sin(q[1])*sin(q[3])*sin(q[5])*cos(q[4]) + sin(q[1])*cos(q[3])*cos(q[5]) + sin(q[2])*sin(q[4])*sin(q[5])*cos(q[1]) - sin(q[3])*cos(q[1])*cos(q[2])*cos(q[5]) - sin(q[5])*cos(q[1])*cos(q[2])*cos(q[3])*cos(q[4]);
   out_5225620928214846354[16] = sin(q[1])*sin(q[2])*sin(q[3])*cos(q[5]) + sin(q[1])*sin(q[2])*sin(q[5])*cos(q[3])*cos(q[4]) + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2]);
   out_5225620928214846354[17] = sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2])*cos(q[4]) - sin(q[1])*cos(q[2])*cos(q[3])*cos(q[5]) + sin(q[3])*cos(q[1])*cos(q[5]) + sin(q[5])*cos(q[1])*cos(q[3])*cos(q[4]);
   out_5225620928214846354[18] = sin(q[1])*sin(q[2])*sin(q[5])*cos(q[4]) + sin(q[1])*sin(q[4])*sin(q[5])*cos(q[2])*cos(q[3]) - sin(q[3])*sin(q[4])*sin(q[5])*cos(q[1]);
   out_5225620928214846354[19] = sin(q[1])*sin(q[2])*sin(q[4])*cos(q[5]) + sin(q[1])*sin(q[3])*sin(q[5])*cos(q[2]) - sin(q[1])*cos(q[2])*cos(q[3])*cos(q[4])*cos(q[5]) + sin(q[3])*cos(q[1])*cos(q[4])*cos(q[5]) + sin(q[5])*cos(q[1])*cos(q[3]);
   out_5225620928214846354[20] = 0;

}
