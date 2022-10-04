#include "jo_2_dot.h"
#include <math.h>

void jo_2_dot(double *dq, double l1, double l2, double *q, double *out_207299037569433291) {

   out_207299037569433291[0] = -l1*cos(q[0])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[1] - l2*cos(q[0])*cos(q[1])*dq[0] - l2*cos(q[0])*cos(q[1])*dq[1];
   out_207299037569433291[1] = l2*sin(q[0])*sin(q[1])*dq[0] + l2*sin(q[0])*sin(q[1])*dq[1] - l2*cos(q[0])*cos(q[1])*dq[0] - l2*cos(q[0])*cos(q[1])*dq[1];
   out_207299037569433291[2] = 0;
   out_207299037569433291[3] = 0;
   out_207299037569433291[4] = -l1*sin(q[0])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[1] - l2*sin(q[1])*cos(q[0])*dq[0] - l2*sin(q[1])*cos(q[0])*dq[1];
   out_207299037569433291[5] = -l2*sin(q[0])*cos(q[1])*dq[0] - l2*sin(q[0])*cos(q[1])*dq[1] - l2*sin(q[1])*cos(q[0])*dq[0] - l2*sin(q[1])*cos(q[0])*dq[1];
   out_207299037569433291[6] = 0;
   out_207299037569433291[7] = 0;

}
