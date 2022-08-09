/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jrx_3_BY_SYMPY_'                   *
 ******************************************************************************/
#include "jrx_3.h"
#include <math.h>

void jrx_3(double *q, double *out_6092735336620100615) {

   out_6092735336620100615[0] = -sin(q[0])*sin(q[1])*sin(q[3]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[3]);
   out_6092735336620100615[1] = -sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + sin(q[3])*cos(q[0])*cos(q[1]);
   out_6092735336620100615[2] = -sin(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]);
   out_6092735336620100615[3] = sin(q[0])*sin(q[2])*sin(q[3]) + sin(q[1])*cos(q[0])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6092735336620100615[4] = 0;
   out_6092735336620100615[5] = 0;
   out_6092735336620100615[6] = 0;
   out_6092735336620100615[7] = -sin(q[0])*sin(q[2])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_6092735336620100615[8] = -sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1]);
   out_6092735336620100615[9] = -sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + cos(q[0])*cos(q[2])*cos(q[3]);
   out_6092735336620100615[10] = sin(q[0])*sin(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0]);
   out_6092735336620100615[11] = 0;
   out_6092735336620100615[12] = 0;
   out_6092735336620100615[13] = 0;
   out_6092735336620100615[14] = 0;
   out_6092735336620100615[15] = -sin(q[1])*sin(q[3]) - cos(q[1])*cos(q[2])*cos(q[3]);
   out_6092735336620100615[16] = sin(q[1])*sin(q[2])*cos(q[3]);
   out_6092735336620100615[17] = sin(q[1])*sin(q[3])*cos(q[2]) + cos(q[1])*cos(q[3]);
   out_6092735336620100615[18] = 0;
   out_6092735336620100615[19] = 0;
   out_6092735336620100615[20] = 0;

}
