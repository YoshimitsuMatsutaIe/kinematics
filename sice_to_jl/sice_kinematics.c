#include <assert.h>

#include "./src/o_0.h"
#include "./src/o_1.h"
#include "./src/o_2.h"
#include "./src/o_3.h"
#include "./src/o_ee.h"
#include "./src/jo_0.h"
#include "./src/jo_1.h"
#include "./src/jo_2.h"
#include "./src/jo_3.h"
#include "./src/jo_ee.h"
#include "./src/jo_0_dot.h"
#include "./src/jo_1_dot.h"
#include "./src/jo_2_dot.h"
#include "./src/jo_3_dot.h"
#include "./src/jo_ee_dot.h"
#include "./src/rx_0.h"
#include "./src/rx_1.h"
#include "./src/rx_2.h"
#include "./src/rx_3.h"
#include "./src/rx_ee.h"
#include "./src/jrx_0.h"
#include "./src/jrx_1.h"
#include "./src/jrx_2.h"
#include "./src/jrx_3.h"
#include "./src/jrx_ee.h"
#include "./src/jrx_0_dot.h"
#include "./src/jrx_1_dot.h"
#include "./src/jrx_2_dot.h"
#include "./src/jrx_3_dot.h"
#include "./src/jrx_ee_dot.h"
#include "./src/ry_0.h"
#include "./src/ry_1.h"
#include "./src/ry_2.h"
#include "./src/ry_3.h"
#include "./src/ry_ee.h"
#include "./src/jry_0.h"
#include "./src/jry_1.h"
#include "./src/jry_2.h"
#include "./src/jry_3.h"
#include "./src/jry_ee.h"
#include "./src/jry_0_dot.h"
#include "./src/jry_1_dot.h"
#include "./src/jry_2_dot.h"
#include "./src/jry_3_dot.h"
#include "./src/jry_ee_dot.h"


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

void rx(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        rx_0(q, out);
        break;
    case 2:
        rx_1(q, out);
        break;
    case 3:
        rx_2(q, out);
        break;
    case 4:
        rx_3(q, out);
        break;
    case 5:
        rx_ee(q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void ry(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        ry_0(q, out);
        break;
    case 2:
        ry_1(q, out);
        break;
    case 3:
        ry_2(q, out);
        break;
    case 4:
        ry_3(q, out);
        break;
    case 5:
        ry_ee(q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jo(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jo_0(out);
        break;
    case 2:
        jo_1(l1, q, out);
        break;
    case 3:
        jo_2(l1, l2, q, out);
        break;
    case 4:
        jo_3(l1, l2, l3, q, out);
        break;
    case 5:
        jo_ee(l1, l2, l3, l4, q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jrx(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jrx_0(q, out);
        break;
    case 2:
        jrx_1(q, out);
        break;
    case 3:
        jrx_2(q, out);
        break;
    case 4:
        jrx_3(q, out);
        break;
    case 5:
        jrx_ee(q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jry(int n, double *q, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jry_0(q, out);
        break;
    case 2:
        jry_1(q, out);
        break;
    case 3:
        jry_2(q, out);
        break;
    case 4:
        jry_3(q, out);
        break;
    case 5:
        jry_ee(q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jo_dot(int n, double *q, double *q_dot, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jo_0_dot(out);
        break;
    case 2:
        jo_1_dot(q_dot, l1, q, out);
        break;
    case 3:
        jo_2_dot(q_dot, l1, l2, q, out);
        break;
    case 4:
        jo_3_dot(q_dot, l1, l2, l3, q, out);
        break;
    case 5:
        jo_ee_dot(q_dot, l1, l2, l3, l4, q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jrx_dot(int n, double *q, double *q_dot, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jrx_0_dot(q_dot, q, out);
        break;
    case 2:
        jrx_1_dot(q_dot, q, out);
        break;
    case 3:
        jrx_2_dot(q_dot, q, out);
        break;
    case 4:
        jrx_3_dot(q_dot, q, out);
        break;
    case 5:
        jrx_ee_dot(q_dot, q, out);
        break;
    default:
        assert(0);
        break;
    }
}

void jry_dot(int n, double *q, double* q_dot, double l1, double l2, double l3, double l4, double* out)
{
    switch (n)
    {
    case 1:
        jry_0_dot(q_dot, q, out);
        break;
    case 2:
        jry_1_dot(q_dot, q, out);
        break;
    case 3:
        jry_2_dot(q_dot, q, out);
        break;
    case 4:
        jry_3_dot(q_dot, q, out);
        break;
    case 5:
        jry_ee_dot(q_dot, q, out);
        break;
    default:
        assert(0);
        break;
    }
}


int main(){
    return 0;
}