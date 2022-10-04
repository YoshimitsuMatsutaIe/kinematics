#include "ry_2.h"
#include <math.h>

void ry_2(double *q, double *out_1510503004238036282) {

   out_1510503004238036282[0] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_1510503004238036282[1] = -sin(q[0])*sin(q[1])*cos(q[2]) - sin(q[0])*sin(q[2])*cos(q[1]) - sin(q[1])*sin(q[2])*cos(q[0]) + cos(q[0])*cos(q[1])*cos(q[2]);

}
