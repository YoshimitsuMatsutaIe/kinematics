import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jo_0_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_1_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_2_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_3_dot(q, dq):
    return numpy.array([[l1*numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*dq[0, 0] + l1*numpy.sin(q[1, 0])*numpy.cos(q[0, 0])*dq[1, 0], l1*numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*dq[1, 0] + l1*numpy.sin(q[1, 0])*numpy.cos(q[0, 0])*dq[0, 0], 0], [l1*numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*dq[1, 0] - l1*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*dq[0, 0], l1*numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*dq[0, 0] - l1*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*dq[1, 0], 0], [0, l1*numpy.sin(q[1, 0])*dq[1, 0], 0]])
