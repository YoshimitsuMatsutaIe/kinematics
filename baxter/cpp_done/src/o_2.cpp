/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_2_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::Kinematics::o_2(const VectorXd& q, VectorXd& out) {

   out(0) = -len_L + (1.0/2.0)*M_SQRT2*len_L1*sin(q(0)) - 1.0/2.0*M_SQRT2*len_L1*cos(q(0)) + (1.0/2.0)*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L2*cos(q(0))*cos(q(1));
   out(1) = -1.0/2.0*M_SQRT2*len_L1*sin(q(0)) - 1.0/2.0*M_SQRT2*len_L1*cos(q(0)) - 1.0/2.0*M_SQRT2*len_L2*sin(q(0))*cos(q(1)) - 1.0/2.0*M_SQRT2*len_L2*cos(q(0))*cos(q(1)) - len_h;
   out(2) = len_H + len_L0 - len_L2*sin(q(1));

}
