/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                    This file is part of 'o_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::o_1(const VectorXd& q, double L, double h, double H, double L0, double L1, double L2, double L3, double L4, double L5, double L6, VectorXd& out) {

   out(0) = -L + (1.0/2.0)*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0));
   out(1) = -1.0/2.0*M_SQRT2*L1*sin(q(0)) - 1.0/2.0*M_SQRT2*L1*cos(q(0)) - h;
   out(2) = H + L0;

}
