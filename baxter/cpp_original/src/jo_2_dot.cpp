/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_2_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "jo_2_dot.h"
#include <math.h>

void jo_2_dot(double *dq, double len_L1, double len_L2, double *q, double *out_7303551935477905481) {

   out_7303551935477905481[0] = -1.0/2.0*M_SQRT2*len_L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[0];
   out_7303551935477905481[1] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[1];
   out_7303551935477905481[2] = 0;
   out_7303551935477905481[3] = 0;
   out_7303551935477905481[4] = 0;
   out_7303551935477905481[5] = 0;
   out_7303551935477905481[6] = 0;
   out_7303551935477905481[7] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[0];
   out_7303551935477905481[8] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[1];
   out_7303551935477905481[9] = 0;
   out_7303551935477905481[10] = 0;
   out_7303551935477905481[11] = 0;
   out_7303551935477905481[12] = 0;
   out_7303551935477905481[13] = 0;
   out_7303551935477905481[14] = 0;
   out_7303551935477905481[15] = len_L2*sin(q[1])*dq[1];
   out_7303551935477905481[16] = 0;
   out_7303551935477905481[17] = 0;
   out_7303551935477905481[18] = 0;
   out_7303551935477905481[19] = 0;
   out_7303551935477905481[20] = 0;

}
