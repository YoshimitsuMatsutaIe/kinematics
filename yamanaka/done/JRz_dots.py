import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jrz_0_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_1_dot(q, dq):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_2_dot(q, dq):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
def jrz_3_dot(q, dq):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
def jrz_4_dot(q, dq):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
