#include "jo_2.h"
#include <math.h>

void jo_2(double l1, double l2, double *q, double *out_6910403474754004336) {

   out_6910403474754004336[0] = -l1*sin(q[0]) - l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]);
   out_6910403474754004336[1] = -l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]);
   out_6910403474754004336[2] = 0;
   out_6910403474754004336[3] = 0;
   out_6910403474754004336[4] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]);
   out_6910403474754004336[5] = -l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]);
   out_6910403474754004336[6] = 0;
   out_6910403474754004336[7] = 0;

}
