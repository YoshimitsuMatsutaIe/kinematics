#include "jry_3.h"
#include <math.h>

void jry_3(double *q, double *out_7988101068261587247) {

   out_7988101068261587247[0] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7988101068261587247[1] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7988101068261587247[2] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7988101068261587247[3] = -sin(q[0])*sin(q[1])*sin(q[2])*sin(q[3]) + sin(q[0])*sin(q[1])*cos(q[2])*cos(q[3]) + sin(q[0])*sin(q[2])*cos(q[1])*cos(q[3]) + sin(q[0])*sin(q[3])*cos(q[1])*cos(q[2]) + sin(q[1])*sin(q[2])*cos(q[0])*cos(q[3]) + sin(q[1])*sin(q[3])*cos(q[0])*cos(q[2]) + sin(q[2])*sin(q[3])*cos(q[0])*cos(q[1]) - cos(q[0])*cos(q[1])*cos(q[2])*cos(q[3]);
   out_7988101068261587247[4] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7988101068261587247[5] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7988101068261587247[6] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);
   out_7988101068261587247[7] = sin(q[0])*sin(q[1])*sin(q[2])*cos(q[3]) + sin(q[0])*sin(q[1])*sin(q[3])*cos(q[2]) + sin(q[0])*sin(q[2])*sin(q[3])*cos(q[1]) - sin(q[0])*cos(q[1])*cos(q[2])*cos(q[3]) + sin(q[1])*sin(q[2])*sin(q[3])*cos(q[0]) - sin(q[1])*cos(q[0])*cos(q[2])*cos(q[3]) - sin(q[2])*cos(q[0])*cos(q[1])*cos(q[3]) - sin(q[3])*cos(q[0])*cos(q[1])*cos(q[2]);

}