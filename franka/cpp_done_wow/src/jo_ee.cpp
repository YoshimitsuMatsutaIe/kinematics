/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'jo_ee_BY_SYMPY_'                   *
 ******************************************************************************/
#include "../include/franka_emika.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void franka_emika::Kinematics::jo_ee(const VectorXd& q, MatrixXd& out) {

   out(0,0) = -a4*sin(q(0))*cos(q(1))*cos(q(2)) - a4*sin(q(2))*cos(q(0)) - a5*sin(q(0))*sin(q(1))*sin(q(3)) - a5*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) - a5*sin(q(2))*cos(q(0))*cos(q(3)) - a7*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(3)) + a7*sin(q(0))*sin(q(2))*sin(q(4))*cos(q(1))*cos(q(5)) + a7*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2)) - a7*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0)) - a7*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(4))*cos(q(0))*cos(q(2))*cos(q(5)) - d3*sin(q(0))*sin(q(1)) - d5*sin(q(0))*sin(q(1))*cos(q(3)) + d5*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) + d5*sin(q(2))*sin(q(3))*cos(q(0)) - df*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(4)) + df*sin(q(0))*sin(q(1))*cos(q(3))*cos(q(5)) + df*sin(q(0))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(1)) - df*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2))*cos(q(5)) - df*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4)) - df*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(5)) - df*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) - df*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(2));
   out(0,1) = -a4*sin(q(1))*cos(q(0))*cos(q(2)) - a5*sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3)) + a5*sin(q(3))*cos(q(0))*cos(q(1)) + a7*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(5)) + a7*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(2)) - a7*sin(q(1))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(4))*cos(q(5)) + a7*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(3)) + d3*cos(q(0))*cos(q(1)) + d5*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2)) + d5*cos(q(0))*cos(q(1))*cos(q(3)) + df*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0)) - df*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2))*cos(q(5)) - df*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4)) + df*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(4)) - df*cos(q(0))*cos(q(1))*cos(q(3))*cos(q(5));
   out(0,2) = -a4*sin(q(0))*cos(q(2)) - a4*sin(q(2))*cos(q(0))*cos(q(1)) - a5*sin(q(0))*cos(q(2))*cos(q(3)) - a5*sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3)) + a7*sin(q(0))*sin(q(2))*sin(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(2)) - a7*sin(q(0))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1)) - a7*sin(q(2))*cos(q(0))*cos(q(1))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(4))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(5)) + d5*sin(q(0))*sin(q(3))*cos(q(2)) + d5*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1)) + df*sin(q(0))*sin(q(2))*sin(q(4))*sin(q(5)) - df*sin(q(0))*sin(q(3))*cos(q(2))*cos(q(5)) - df*sin(q(0))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) - df*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(5)) - df*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(3))*cos(q(4)) - df*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2));
   out(0,3) = a5*sin(q(0))*sin(q(2))*sin(q(3)) + a5*sin(q(1))*cos(q(0))*cos(q(3)) - a5*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2)) + a7*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3)) - a7*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0)) + a7*sin(q(1))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(4))*cos(q(5)) - a7*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + d5*sin(q(0))*sin(q(2))*cos(q(3)) - d5*sin(q(1))*sin(q(3))*cos(q(0)) - d5*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + df*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(4)) - df*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(5)) + df*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(5)) + df*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) - df*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(4)) + df*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(5));
   out(0,4) = a7*sin(q(0))*sin(q(2))*sin(q(4))*cos(q(3))*cos(q(5)) - a7*sin(q(0))*cos(q(2))*cos(q(4))*cos(q(5)) - a7*sin(q(1))*sin(q(3))*sin(q(4))*cos(q(0))*cos(q(5)) - a7*sin(q(2))*cos(q(0))*cos(q(1))*cos(q(4))*cos(q(5)) - a7*sin(q(4))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(5)) + df*sin(q(0))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(3)) - df*sin(q(0))*sin(q(5))*cos(q(2))*cos(q(4)) - df*sin(q(1))*sin(q(3))*sin(q(4))*sin(q(5))*cos(q(0)) - df*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(4)) - df*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3));
   out(0,5) = a7*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(5)) + a7*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) + a7*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(2)) - a7*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(4)) + a7*sin(q(1))*cos(q(0))*cos(q(3))*cos(q(5)) + a7*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(1)) - a7*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(5)) - a7*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4)) + df*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5)) - df*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - df*sin(q(0))*sin(q(4))*cos(q(2))*cos(q(5)) + df*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(4))*cos(q(5)) + df*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(3)) - df*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(1))*cos(q(5)) - df*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2)) + df*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5));
   out(0,6) = 0;
   out(1,0) = -a4*sin(q(0))*sin(q(2)) + a4*cos(q(0))*cos(q(1))*cos(q(2)) - a5*sin(q(0))*sin(q(2))*cos(q(3)) + a5*sin(q(1))*sin(q(3))*cos(q(0)) + a5*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) + a7*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5)) - a7*sin(q(0))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(4))*cos(q(2))*cos(q(5)) + a7*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(3)) - a7*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(1))*cos(q(5)) - a7*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2)) + a7*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + d3*sin(q(1))*cos(q(0)) + d5*sin(q(0))*sin(q(2))*sin(q(3)) + d5*sin(q(1))*cos(q(0))*cos(q(3)) - d5*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2)) - df*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(5)) - df*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) - df*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(2)) + df*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(4)) - df*sin(q(1))*cos(q(0))*cos(q(3))*cos(q(5)) - df*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(1)) + df*sin(q(3))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(5)) + df*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4));
   out(1,1) = -a4*sin(q(0))*sin(q(1))*cos(q(2)) - a5*sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3)) + a5*sin(q(0))*sin(q(3))*cos(q(1)) + a7*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2)) - a7*sin(q(0))*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(4))*cos(q(5)) + a7*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(3)) + d3*sin(q(0))*cos(q(1)) + d5*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2)) + d5*sin(q(0))*cos(q(1))*cos(q(3)) + df*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5)) - df*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(5)) - df*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) + df*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(4)) - df*sin(q(0))*cos(q(1))*cos(q(3))*cos(q(5));
   out(1,2) = -a4*sin(q(0))*sin(q(2))*cos(q(1)) + a4*cos(q(0))*cos(q(2)) - a5*sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3)) + a5*cos(q(0))*cos(q(2))*cos(q(3)) + a7*sin(q(0))*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(1)) - a7*sin(q(0))*sin(q(2))*cos(q(1))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(4))*cos(q(1))*cos(q(2))*cos(q(5)) - a7*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(5)) - a7*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(2)) + a7*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + d5*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1)) - d5*sin(q(3))*cos(q(0))*cos(q(2)) - df*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(1))*cos(q(5)) - df*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(1))*cos(q(3))*cos(q(4)) - df*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(1))*cos(q(2)) - df*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0)) + df*sin(q(3))*cos(q(0))*cos(q(2))*cos(q(5)) + df*sin(q(5))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4));
   out(1,3) = a5*sin(q(0))*sin(q(1))*cos(q(3)) - a5*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2)) - a5*sin(q(2))*sin(q(3))*cos(q(0)) - a7*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5)) + a7*sin(q(0))*sin(q(1))*cos(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3)) - a7*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(4))*cos(q(5)) - a7*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3)) - d5*sin(q(0))*sin(q(1))*sin(q(3)) - d5*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3)) - d5*sin(q(2))*cos(q(0))*cos(q(3)) + df*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(5)) + df*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(3))*cos(q(4)) - df*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(4)) + df*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(5)) - df*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(4)) + df*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(5));
   out(1,4) = -a7*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(2))*cos(q(1))*cos(q(4))*cos(q(5)) - a7*sin(q(0))*sin(q(4))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(5)) - a7*sin(q(2))*sin(q(4))*cos(q(0))*cos(q(3))*cos(q(5)) + a7*cos(q(0))*cos(q(2))*cos(q(4))*cos(q(5)) - df*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(4))*sin(q(5)) - df*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(1))*cos(q(4)) - df*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3)) - df*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(3)) + df*sin(q(5))*cos(q(0))*cos(q(2))*cos(q(4));
   out(1,5) = -a7*sin(q(0))*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(4)) + a7*sin(q(0))*sin(q(1))*cos(q(3))*cos(q(5)) + a7*sin(q(0))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(1)) - a7*sin(q(0))*sin(q(3))*cos(q(1))*cos(q(2))*cos(q(5)) - a7*sin(q(0))*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4)) - a7*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(5)) - a7*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) - a7*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(2)) + df*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(4))*cos(q(5)) + df*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(3)) - df*sin(q(0))*sin(q(2))*sin(q(4))*cos(q(1))*cos(q(5)) - df*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2)) + df*sin(q(0))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - df*sin(q(2))*sin(q(3))*sin(q(5))*cos(q(0)) + df*sin(q(2))*cos(q(0))*cos(q(3))*cos(q(4))*cos(q(5)) + df*sin(q(4))*cos(q(0))*cos(q(2))*cos(q(5));
   out(1,6) = 0;
   out(2,0) = 0;
   out(2,1) = -a4*cos(q(1))*cos(q(2)) - a5*sin(q(1))*sin(q(3)) - a5*cos(q(1))*cos(q(2))*cos(q(3)) - a7*sin(q(1))*sin(q(3))*cos(q(4))*cos(q(5)) - a7*sin(q(1))*sin(q(5))*cos(q(3)) + a7*sin(q(2))*sin(q(4))*cos(q(1))*cos(q(5)) + a7*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(2)) - a7*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) - d3*sin(q(1)) - d5*sin(q(1))*cos(q(3)) + d5*sin(q(3))*cos(q(1))*cos(q(2)) - df*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(4)) + df*sin(q(1))*cos(q(3))*cos(q(5)) + df*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(1)) - df*sin(q(3))*cos(q(1))*cos(q(2))*cos(q(5)) - df*sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4));
   out(2,2) = a4*sin(q(1))*sin(q(2)) + a5*sin(q(1))*sin(q(2))*cos(q(3)) - a7*sin(q(1))*sin(q(2))*sin(q(3))*sin(q(5)) + a7*sin(q(1))*sin(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(4))*cos(q(2))*cos(q(5)) - d5*sin(q(1))*sin(q(2))*sin(q(3)) + df*sin(q(1))*sin(q(2))*sin(q(3))*cos(q(5)) + df*sin(q(1))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) + df*sin(q(1))*sin(q(4))*sin(q(5))*cos(q(2));
   out(2,3) = a5*sin(q(1))*sin(q(3))*cos(q(2)) + a5*cos(q(1))*cos(q(3)) + a7*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3)) - a7*sin(q(3))*sin(q(5))*cos(q(1)) + a7*cos(q(1))*cos(q(3))*cos(q(4))*cos(q(5)) + d5*sin(q(1))*cos(q(2))*cos(q(3)) - d5*sin(q(3))*cos(q(1)) + df*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2))*cos(q(4)) - df*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(5)) + df*sin(q(3))*cos(q(1))*cos(q(5)) + df*sin(q(5))*cos(q(1))*cos(q(3))*cos(q(4));
   out(2,4) = a7*sin(q(1))*sin(q(2))*cos(q(4))*cos(q(5)) + a7*sin(q(1))*sin(q(4))*cos(q(2))*cos(q(3))*cos(q(5)) - a7*sin(q(3))*sin(q(4))*cos(q(1))*cos(q(5)) + df*sin(q(1))*sin(q(2))*sin(q(5))*cos(q(4)) + df*sin(q(1))*sin(q(4))*sin(q(5))*cos(q(2))*cos(q(3)) - df*sin(q(3))*sin(q(4))*sin(q(5))*cos(q(1));
   out(2,5) = -a7*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5)) + a7*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(5)) + a7*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) - a7*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(4)) + a7*cos(q(1))*cos(q(3))*cos(q(5)) + df*sin(q(1))*sin(q(2))*sin(q(4))*cos(q(5)) + df*sin(q(1))*sin(q(3))*sin(q(5))*cos(q(2)) - df*sin(q(1))*cos(q(2))*cos(q(3))*cos(q(4))*cos(q(5)) + df*sin(q(3))*cos(q(1))*cos(q(4))*cos(q(5)) + df*sin(q(5))*cos(q(1))*cos(q(3));
   out(2,6) = 0;

}