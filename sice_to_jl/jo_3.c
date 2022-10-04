#include "jo_3.h"
#include <math.h>

void jo_3(double l1, double l2, double l3, double *q, double *out_7891945718116864730) {

   out_7891945718116864730[0] = -l1*sin(q[0]) - l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]) + l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_7891945718116864730[1] = -l2*sin(q[0])*cos(q[1]) - l2*sin(q[1])*cos(q[0]) + l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_7891945718116864730[2] = l3*sin(q[0])*sin(q[1])*sin(q[2]) - l3*sin(q[0])*cos(q[1])*cos(q[2]) - l3*sin(q[1])*cos(q[0])*cos(q[2]) - l3*sin(q[2])*cos(q[0])*cos(q[1]);
   out_7891945718116864730[3] = 0;
   out_7891945718116864730[4] = l1*cos(q[0]) - l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]) - l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7891945718116864730[5] = -l2*sin(q[0])*sin(q[1]) + l2*cos(q[0])*cos(q[1]) - l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7891945718116864730[6] = -l3*sin(q[0])*sin(q[1])*cos(q[2]) - l3*sin(q[0])*sin(q[2])*cos(q[1]) - l3*sin(q[1])*sin(q[2])*cos(q[0]) + l3*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7891945718116864730[7] = 0;

}
