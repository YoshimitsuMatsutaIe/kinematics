/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                 This file is part of 'jo_3_dot_BY_SYMPY_'                  *
 ******************************************************************************/
#include "jo_3_dot.h"
#include <math.h>

void jo_3_dot(double *dq, double len_L1, double len_L2, double len_L3, double *q, double *out_4530654197288968354) {

   out_4530654197288968354[0] = -1.0/2.0*M_SQRT2*len_L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2])*dq[2];
   out_4530654197288968354[1] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_4530654197288968354[2] = (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2])*dq[0];
   out_4530654197288968354[3] = 0;
   out_4530654197288968354[4] = 0;
   out_4530654197288968354[5] = 0;
   out_4530654197288968354[6] = 0;
   out_4530654197288968354[7] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2])*dq[2];
   out_4530654197288968354[8] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0])*dq[0] + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2])*dq[0];
   out_4530654197288968354[9] = (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*cos(q[1])*dq[1] - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0])*dq[0] - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - 1.0/2.0*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*cos(q[1])*dq[1] + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0])*dq[2] + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2])*dq[0];
   out_4530654197288968354[10] = 0;
   out_4530654197288968354[11] = 0;
   out_4530654197288968354[12] = 0;
   out_4530654197288968354[13] = 0;
   out_4530654197288968354[14] = 0;
   out_4530654197288968354[15] = len_L2*sin(q[1])*dq[1] - len_L3*sin(q[1])*sin(q[2])*dq[2] + len_L3*cos(q[1])*cos(q[2])*dq[1];
   out_4530654197288968354[16] = -len_L3*sin(q[1])*sin(q[2])*dq[1] + len_L3*cos(q[1])*cos(q[2])*dq[2];
   out_4530654197288968354[17] = 0;
   out_4530654197288968354[18] = 0;
   out_4530654197288968354[19] = 0;
   out_4530654197288968354[20] = 0;

}
