#include "jry_0_dot.h"
#include <math.h>

void jry_0_dot(double *dq, double *q, double *out_7865547075557005704) {

   out_7865547075557005704[0] = sin(q[0])*dq[0];
   out_7865547075557005704[1] = 0;
   out_7865547075557005704[2] = 0;
   out_7865547075557005704[3] = 0;
   out_7865547075557005704[4] = -cos(q[0])*dq[0];
   out_7865547075557005704[5] = 0;
   out_7865547075557005704[6] = 0;
   out_7865547075557005704[7] = 0;

}
