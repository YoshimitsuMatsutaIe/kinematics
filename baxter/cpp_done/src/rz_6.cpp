/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                   This file is part of 'rz_6_BY_SYMPY_'                    *
 ******************************************************************************/
#include "../include/baxter.hpp"

#include <cmath>
using std::cos;
using std::sin;
using std::sqrt;


void baxter::Kinematics::rz_6(const VectorXd& q, VectorXd& out) {

   out(0) = (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) - 1.0/2.0*M_SQRT2*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(2)) + (1.0/2.0)*M_SQRT2*sin(q(0))*cos(q(1))*cos(q(3))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0)) + (1.0/2.0)*M_SQRT2*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*cos(q(0))*cos(q(1))*cos(q(3))*cos(q(5));
   out(1) = -1.0/2.0*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(3))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(1))*sin(q(5))*cos(q(2))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(3))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(2))*sin(q(5))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(3))*sin(q(5))*cos(q(1))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(0))*sin(q(4))*sin(q(5))*cos(q(2)) - 1.0/2.0*M_SQRT2*sin(q(0))*cos(q(1))*cos(q(3))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(1))*sin(q(2))*sin(q(4))*sin(q(5))*cos(q(0)) + (1.0/2.0)*M_SQRT2*sin(q(1))*sin(q(3))*cos(q(0))*cos(q(2))*cos(q(5)) + (1.0/2.0)*M_SQRT2*sin(q(1))*sin(q(5))*cos(q(0))*cos(q(2))*cos(q(3))*cos(q(4)) - 1.0/2.0*M_SQRT2*sin(q(2))*sin(q(3))*cos(q(0))*cos(q(5)) - 1.0/2.0*M_SQRT2*sin(q(2))*sin(q(5))*cos(q(0))*cos(q(3))*cos(q(4)) + (1.0/2.0)*M_SQRT2*sin(q(3))*sin(q(5))*cos(q(0))*cos(q(1))*cos(q(4)) - 1.0/2.0*M_SQRT2*sin(q(4))*sin(q(5))*cos(q(0))*cos(q(2)) - 1.0/2.0*M_SQRT2*cos(q(0))*cos(q(1))*cos(q(3))*cos(q(5));
   out(2) = sin(q(1))*sin(q(3))*sin(q(5))*cos(q(4)) - sin(q(1))*cos(q(3))*cos(q(5)) + sin(q(2))*sin(q(4))*sin(q(5))*cos(q(1)) - sin(q(3))*cos(q(1))*cos(q(2))*cos(q(5)) - sin(q(5))*cos(q(1))*cos(q(2))*cos(q(3))*cos(q(4));

}
