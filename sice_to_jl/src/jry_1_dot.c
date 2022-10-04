#include "jry_1_dot.h"
#include <math.h>

void jry_1_dot(double *dq, double *q, double *out_4466746551548421284) {

   out_4466746551548421284[0] = sin(q[0])*cos(q[1])*dq[0] + sin(q[0])*cos(q[1])*dq[1] + sin(q[1])*cos(q[0])*dq[0] + sin(q[1])*cos(q[0])*dq[1];
   out_4466746551548421284[1] = sin(q[0])*cos(q[1])*dq[0] + sin(q[0])*cos(q[1])*dq[1] + sin(q[1])*cos(q[0])*dq[0] + sin(q[1])*cos(q[0])*dq[1];
   out_4466746551548421284[2] = 0;
   out_4466746551548421284[3] = 0;
   out_4466746551548421284[4] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_4466746551548421284[5] = sin(q[0])*sin(q[1])*dq[0] + sin(q[0])*sin(q[1])*dq[1] - cos(q[0])*cos(q[1])*dq[0] - cos(q[0])*cos(q[1])*dq[1];
   out_4466746551548421284[6] = 0;
   out_4466746551548421284[7] = 0;

}
