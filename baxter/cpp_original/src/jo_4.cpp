/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "jo_4.h"
#include <math.h>

void jo_4(double len_L1, double len_L2, double len_L3, double len_L4, double *q, double *out_220058217800002332) {

   out_220058217800002332[0] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) + (1.0/2.0)*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*cos(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_220058217800002332[1] = -1.0/2.0*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*cos(q[3]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_220058217800002332[2] = (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_220058217800002332[3] = -1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_220058217800002332[4] = 0;
   out_220058217800002332[5] = 0;
   out_220058217800002332[6] = 0;
   out_220058217800002332[7] = (1.0/2.0)*M_SQRT2*len_L1*sin(q[0]) - 1.0/2.0*M_SQRT2*len_L1*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L2*cos(q[0])*cos(q[1]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[1])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*cos(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L4*cos(q[0])*cos(q[1])*cos(q[3]);
   out_220058217800002332[8] = (1.0/2.0)*M_SQRT2*len_L2*sin(q[0])*sin(q[1]) + (1.0/2.0)*M_SQRT2*len_L2*sin(q[1])*cos(q[0]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*cos(q[0])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[1])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_220058217800002332[9] = -1.0/2.0*M_SQRT2*len_L3*sin(q[0])*sin(q[1])*sin(q[2]) + (1.0/2.0)*M_SQRT2*len_L3*sin(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L3*sin(q[1])*sin(q[2])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L3*cos(q[0])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[2]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[2]);
   out_220058217800002332[10] = (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[2])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[0])*sin(q[3])*cos(q[1]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - 1.0/2.0*M_SQRT2*len_L4*sin(q[2])*cos(q[0])*cos(q[3]) + (1.0/2.0)*M_SQRT2*len_L4*sin(q[3])*cos(q[0])*cos(q[1]);
   out_220058217800002332[11] = 0;
   out_220058217800002332[12] = 0;
   out_220058217800002332[13] = 0;
   out_220058217800002332[14] = 0;
   out_220058217800002332[15] = -len_L2*cos(q[1]) + len_L3*sin(q[1])*cos(q[2]) + len_L4*sin(q[1])*sin(q[3])*cos(q[2]) - len_L4*cos(q[1])*cos(q[3]);
   out_220058217800002332[16] = len_L3*sin(q[2])*cos(q[1]) + len_L4*sin(q[2])*sin(q[3])*cos(q[1]);
   out_220058217800002332[17] = len_L4*sin(q[1])*sin(q[3]) - len_L4*cos(q[1])*cos(q[2])*cos(q[3]);
   out_220058217800002332[18] = 0;
   out_220058217800002332[19] = 0;
   out_220058217800002332[20] = 0;

}
