import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jry_0_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jry_1_dot(q, dq):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
def jry_2_dot(q, dq):
    return np.array([[s(q[1, 0])*c(q[0, 0]), s(q[0, 0])*c(q[1, 0]), 0], [s(q[0, 0])*s(q[1, 0]), -c(q[0, 0])*c(q[1, 0]), 0], [0, s(q[1, 0]), 0]])
def jry_3_dot(q, dq):
    return np.array([[s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) + s(q[2, 0])*c(q[0, 0])*c(q[1, 0]), -s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) + s(q[0, 0])*c(q[1, 0])*c(q[2, 0]), -s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) + s(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + s(q[0, 0])*s(q[2, 0])*c(q[1, 0]), s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) - c(q[0, 0])*c(q[1, 0])*c(q[2, 0]), s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) - c(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [0, s(q[1, 0])*c(q[2, 0]) + s(q[2, 0])*c(q[1, 0]), s(q[1, 0])*c(q[2, 0]) + s(q[2, 0])*c(q[1, 0])]])
