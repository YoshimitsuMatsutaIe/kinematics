/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_3_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::Kinematics::jo_3(const VectorXd& q, MatrixXd& out) {

   out(0,0) = (1.0/2.0)*M_SQRT2*len_L1*sin(q(0)) + (1.0/2.0)*M_SQRT2*len_L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) + (1.0/2.0)*M_SQRT2*len_L2*cos(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*cos(q(2)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(0))*sin(q(2)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(1))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(2))*cos(q(0));
   out(0,1) = -1.0/2.0*M_SQRT2*len_L2*sin(q(0))*sin(q(1)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(1))*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(0))*cos(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*cos(q(0))*cos(q(1))*cos(q(2));
   out(0,2) = (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*sin(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(1))*sin(q(2))*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L3*cos(q(0))*cos(q(2));
   out(0,3) = 0;
   out(0,4) = 0;
   out(0,5) = 0;
   out(0,6) = 0;
   out(1,0) = (1.0/2.0)*M_SQRT2*len_L1*sin(q(0)) - 1.0/2.0*M_SQRT2*len_L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L2*cos(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(1))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(2))*cos(q(0));
   out(1,1) = (1.0/2.0)*M_SQRT2*len_L2*sin(q(0))*sin(q(1)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(1))*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*cos(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*cos(q(0))*cos(q(1))*cos(q(2));
   out(1,2) = -1.0/2.0*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*sin(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(1))*sin(q(2))*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L3*cos(q(0))*cos(q(2));
   out(1,3) = 0;
   out(1,4) = 0;
   out(1,5) = 0;
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -len_L2*cos(q(1)) + len_L3*sin(q(1))*cos(q(2));
   out(2,2) = len_L3*sin(q(2))*cos(q(1));
   out(2,3) = 0;
   out(2,4) = 0;
   out(2,5) = 0;
   out(2,6) = 0;

}
