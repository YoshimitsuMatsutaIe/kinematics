#include "rx_2.h"
#include <math.h>

void rx_2(double *q, double *out_1209786639198084141) {

   out_1209786639198084141[0] = -sin(q[0])*sin(q[1])*cos(q[2]) - sin(q[0])*sin(q[2])*cos(q[1]) - sin(q[1])*sin(q[2])*cos(q[0]) + cos(q[0])*cos(q[1])*cos(q[2]);
   out_1209786639198084141[1] = -sin(q[0])*sin(q[1])*sin(q[2]) + sin(q[0])*cos(q[1])*cos(q[2]) + sin(q[1])*cos(q[0])*cos(q[2]) + sin(q[2])*cos(q[0])*cos(q[1]);

}
