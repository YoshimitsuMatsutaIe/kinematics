import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jrx_0(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrx_1(q):
    return np.array([[-c(q[0, 0]), 0, 0], [-s(q[0, 0]), 0, 0], [0, 0, 0]])
def jrx_2(q):
    return np.array([[-c(q[0, 0])*c(q[1, 0]), s(q[0, 0])*s(q[1, 0]), 0], [-s(q[0, 0])*c(q[1, 0]), -s(q[1, 0])*c(q[0, 0]), 0], [0, -c(q[1, 0]), 0]])
def jrx_3(q):
    return np.array([[s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) - c(q[0, 0])*c(q[1, 0])*c(q[2, 0]), s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + s(q[0, 0])*s(q[2, 0])*c(q[1, 0]), s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + s(q[0, 0])*s(q[2, 0])*c(q[1, 0])], [s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) - s(q[0, 0])*c(q[1, 0])*c(q[2, 0]), -s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[0, 0])*c(q[1, 0]), -s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[0, 0])*c(q[1, 0])], [0, s(q[1, 0])*s(q[2, 0]) - c(q[1, 0])*c(q[2, 0]), s(q[1, 0])*s(q[2, 0]) - c(q[1, 0])*c(q[2, 0])]])
