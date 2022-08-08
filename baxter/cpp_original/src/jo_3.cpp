/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_3.h"
#include <math.h>

void jo_3(double len_L1, double len_L2, double len_L3, double *q, double *out_6207446728660669891) {

   out_6207446728660669891[0] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0]);
   out_6207446728660669891[1] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6207446728660669891[2] = (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2]);
   out_6207446728660669891[3] = 0;
   out_6207446728660669891[4] = 0;
   out_6207446728660669891[5] = 0;
   out_6207446728660669891[6] = 0;
   out_6207446728660669891[7] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0]);
   out_6207446728660669891[8] = (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_6207446728660669891[9] = -1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L3*cos(q[0])*cos(q[2]);
   out_6207446728660669891[10] = 0;
   out_6207446728660669891[11] = 0;
   out_6207446728660669891[12] = 0;
   out_6207446728660669891[13] = 0;
   out_6207446728660669891[14] = 0;
   out_6207446728660669891[15] = -len_L2*cos(q[1]) + len_L3*sin(q[1])*cos(q[2]);
   out_6207446728660669891[16] = len_L3*sin(q[2])*cos(q[1]);
   out_6207446728660669891[17] = 0;
   out_6207446728660669891[18] = 0;
   out_6207446728660669891[19] = 0;
   out_6207446728660669891[20] = 0;

}
