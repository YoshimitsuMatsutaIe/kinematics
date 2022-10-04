#include "rx_1.h"
#include <math.h>

void rx_1(double *q, double *out_4777000918674226191) {

   out_4777000918674226191[0] = -sin(q[0])*sin(q[1]) + cos(q[0])*cos(q[1]);
   out_4777000918674226191[1] = sin(q[0])*cos(q[1]) + sin(q[1])*cos(q[0]);

}
