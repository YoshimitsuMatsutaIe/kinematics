import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jo_0_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_1_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_2_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_3_dot(q, dq):
    return np.array([[l1*s(q[0, 0])*c(q[1, 0])*dq[0, 0] + l1*s(q[1, 0])*c(q[0, 0])*dq[1, 0], l1*s(q[0, 0])*c(q[1, 0])*dq[1, 0] + l1*s(q[1, 0])*c(q[0, 0])*dq[0, 0], 0], [l1*s(q[0, 0])*s(q[1, 0])*dq[1, 0] - l1*c(q[0, 0])*c(q[1, 0])*dq[0, 0], l1*s(q[0, 0])*s(q[1, 0])*dq[0, 0] - l1*c(q[0, 0])*c(q[1, 0])*dq[1, 0], 0], [0, l1*s(q[1, 0])*dq[1, 0], 0]])
