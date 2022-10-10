import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jrz_0(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_1(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_2(q):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
def jrz_3(q):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
def jrz_4(q):
    return np.array([[s(q[0, 0]), 0, 0], [-c(q[0, 0]), 0, 0], [0, 0, 0]])
