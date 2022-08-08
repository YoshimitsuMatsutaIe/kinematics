/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_4_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::Kinematics::o_4(const VectorXd& q, VectorXd& out) {

   out(0) = -len_L + (1.0/2.0)*M_SQRT2*len_L1*sin(q(0)) - 1.0/2.0*M_SQRT2*len_L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L2*cos(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(1))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(2))*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L4*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(0))*sin(q(2))*sin(q(3)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(0))*cos(q(1))*cos(q(3)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(2))*sin(q(3))*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L4*cos(q(0))*cos(q(1))*cos(q(3));
   out(1) = -1.0/2.0*M_SQRT2*len_L1*sin(q(0)) - 1.0/2.0*M_SQRT2*len_L1*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L2*cos(q(0))*cos(q(1)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*sin(q(1))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(0))*sin(q(2)) + (1.0/2.0)*M_SQRT2*len_L3*sin(q(1))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*len_L3*sin(q(2))*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(0))*sin(q(2))*sin(q(3)) - 1.0/2.0*M_SQRT2*len_L4*sin(q(0))*cos(q(1))*cos(q(3)) + (1.0/2.0)*M_SQRT2*len_L4*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*len_L4*sin(q(2))*sin(q(3))*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L4*cos(q(0))*cos(q(1))*cos(q(3)) - len_h;
   out(2) = len_H + len_L0 - len_L2*sin(q(1)) - len_L3*cos(q(1))*cos(q(2)) - len_L4*sin(q(1))*cos(q(3)) - len_L4*sin(q(3))*cos(q(1))*cos(q(2));

}
