#include "rx_3.h"
#include <math.h>

void rx_3(double *q, double *out_5418904410368093688) {

   out_5418904410368093688[0] = sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) - sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) - sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) - sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) - sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) - sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) - sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) + cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_5418904410368093688[1] = -sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) - sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) - sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) + sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) - sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) + sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) + sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) + sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);

}
