/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_2.h"
#include <math.h>

void jo_2(double len_L1, double len_L2, double *q, double *out_1627778551429208078) {

   out_1627778551429208078[0] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1]);
   out_1627778551429208078[1] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]);
   out_1627778551429208078[2] = 0;
   out_1627778551429208078[3] = 0;
   out_1627778551429208078[4] = 0;
   out_1627778551429208078[5] = 0;
   out_1627778551429208078[6] = 0;
   out_1627778551429208078[7] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L2*cos(q[0])*cos(q[1]);
   out_1627778551429208078[8] = (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]);
   out_1627778551429208078[9] = 0;
   out_1627778551429208078[10] = 0;
   out_1627778551429208078[11] = 0;
   out_1627778551429208078[12] = 0;
   out_1627778551429208078[13] = 0;
   out_1627778551429208078[14] = 0;
   out_1627778551429208078[15] = -len_L2*cos(q[1]);
   out_1627778551429208078[16] = 0;
   out_1627778551429208078[17] = 0;
   out_1627778551429208078[18] = 0;
   out_1627778551429208078[19] = 0;
   out_1627778551429208078[20] = 0;

}