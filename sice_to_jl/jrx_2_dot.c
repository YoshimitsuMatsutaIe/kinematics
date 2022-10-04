#include "jrx_2_dot.h"
#include <math.h>

void jrx_2_dot(double *dq, double *q, double *out_2142645246297602813) {

   out_2142645246297602813[0] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_2142645246297602813[1] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_2142645246297602813[2] = sin(q[0])*sin(q[1])*cos(q[2])*dq[0] + sin(q[0])*sin(q[1])*cos(q[2])*dq[1] + sin(q[0])*sin(q[1])*cos(q[2])*dq[2] + sin(q[0])*sin(q[2])*cos(q[1])*dq[0] + sin(q[0])*sin(q[2])*cos(q[1])*dq[1] + sin(q[0])*sin(q[2])*cos(q[1])*dq[2] + sin(q[1])*sin(q[2])*cos(q[0])*dq[0] + sin(q[1])*sin(q[2])*cos(q[0])*dq[1] + sin(q[1])*sin(q[2])*cos(q[0])*dq[2] - cos(q[0])*cos(q[1])*cos(q[2])*dq[0] - cos(q[0])*cos(q[1])*cos(q[2])*dq[1] - cos(q[0])*cos(q[1])*cos(q[2])*dq[2];
   out_2142645246297602813[3] = 0;
   out_2142645246297602813[4] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_2142645246297602813[5] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_2142645246297602813[6] = sin(q[0])*sin(q[1])*sin(q[2])*dq[0] + sin(q[0])*sin(q[1])*sin(q[2])*dq[1] + sin(q[0])*sin(q[1])*sin(q[2])*dq[2] - sin(q[0])*cos(q[1])*cos(q[2])*dq[0] - sin(q[0])*cos(q[1])*cos(q[2])*dq[1] - sin(q[0])*cos(q[1])*cos(q[2])*dq[2] - sin(q[1])*cos(q[0])*cos(q[2])*dq[0] - sin(q[1])*cos(q[0])*cos(q[2])*dq[1] - sin(q[1])*cos(q[0])*cos(q[2])*dq[2] - sin(q[2])*cos(q[0])*cos(q[1])*dq[0] - sin(q[2])*cos(q[0])*cos(q[1])*dq[1] - sin(q[2])*cos(q[0])*cos(q[1])*dq[2];
   out_2142645246297602813[7] = 0;

}
