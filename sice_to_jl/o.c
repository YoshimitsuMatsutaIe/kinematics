#include "o_0.h"
#include "o_1.h"
#include "o_2.h"
#include "o_3.h"
#include "o_ee.h"

#include "jo_0.h"
#include "jo_1.h"
#include "jo_2.h"
#include "jo_3.h"
#include "jo_ee.h"

#include "jo_0_dot.h"
#include "jo_1_dot.h"
#include "jo_2_dot.h"
#include "jo_3_dot.h"
#include "jo_ee_dot.h"

void o(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        o_0(out);
        break;
    case 2:
        o_1(l1, q, out);
        break;
    case 3:
        o_2(l1, l2, q, out);
        break;
    case 4:
        o_3(l1, l2, l3, q, out);
        break;
    case 5:
        o_ee(l1, l2, l3, l4, q, out);
        break;
    default:
        assert(0);
        break;
    }
}