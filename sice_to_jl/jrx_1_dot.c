#include "jrx_1_dot.h"
#include <math.h>

void jrx_1_dot(double *dq, double *q, double *out_6041116250069018547) {

   out_6041116250069018547[0] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_6041116250069018547[1] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_6041116250069018547[2] = 0;
   out_6041116250069018547[3] = 0;
   out_6041116250069018547[4] = -sin(q[0])*cos(q[1])*dq[0] - sin(q[0])*cos(q[1])*dq[1] - sin(q[1])*cos(q[0])*dq[0] - sin(q[1])*cos(q[0])*dq[1];
   out_6041116250069018547[5] = -sin(q[0])*cos(q[1])*dq[0] - sin(q[0])*cos(q[1])*dq[1] - sin(q[1])*cos(q[0])*dq[0] - sin(q[1])*cos(q[0])*dq[1];
   out_6041116250069018547[6] = 0;
   out_6041116250069018547[7] = 0;

}
