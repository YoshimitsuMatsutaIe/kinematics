/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'ry_1_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/franka_emika.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void franka_emika::Kinematics::ry_1(const VectorXd& q, VectorXd& out) {

   out(0) = -sin(q(1))*cos(q(0));
   out(1) = -sin(q(0))*sin(q(1));
   out(2) = -cos(q(1));

}
