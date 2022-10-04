#include "ry_3.h"
#include <math.h>

void ry_3(double *q, double *out_3865118882642782020) {

   out_3865118882642782020[0] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_3865118882642782020[1] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);

}
