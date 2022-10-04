#include "ry_1.h"
#include <math.h>

void ry_1(double *q, double *out_4275817287861218823) {

   out_4275817287861218823[0] = -sin(q[0])*cos(q[1]) - sin(q[1])*cos(q[0]);
   out_4275817287861218823[1] = -sin(q[0])*sin(q[1]) + cos(q[0])*cos(q[1]);

}
