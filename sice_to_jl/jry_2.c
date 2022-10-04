#include "jry_2.h"
#include <math.h>

void jry_2(double *q, double *out_266876094890851475) {

   out_266876094890851475[0] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_266876094890851475[1] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_266876094890851475[2] = sin(q[0])*sin(q[1])*cos(q[2]) + sin(q[0])*sin(q[2])*cos(q[1]) + sin(q[1])*sin(q[2])*cos(q[0]) - cos(q[0])*cos(q[1])*cos(q[2]);
   out_266876094890851475[3] = 0;
   out_266876094890851475[4] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_266876094890851475[5] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_266876094890851475[6] = sin(q[0])*sin(q[1])*sin(q[2]) - sin(q[0])*cos(q[1])*cos(q[2]) - sin(q[1])*cos(q[0])*cos(q[2]) - sin(q[2])*cos(q[0])*cos(q[1]);
   out_266876094890851475[7] = 0;

}
