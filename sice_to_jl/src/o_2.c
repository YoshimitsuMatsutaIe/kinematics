#include "o_2.h"
#include <math.h>

void o_2(double l1, double l2, double *q, double *out_3865598304691940765) {

   out_3865598304691940765[0] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]);
   out_3865598304691940765[1] = l1*sin(q[0]) + l2*sin(q[0])*cos(q[1]) + l2*sin(q[1])*cos(q[0]);

}
