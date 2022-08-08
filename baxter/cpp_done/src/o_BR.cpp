/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'o_BR_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::Kinematics::o_BR(const VectorXd& q, VectorXd& out) {

   out(0) = -len_L;
   out(1) = -len_h;
   out(2) = len_H + len_L0;

}
