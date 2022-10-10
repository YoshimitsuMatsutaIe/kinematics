import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def o_0(q):
    return np.array([[0], [0], [0]])
def o_1(q):
    return np.array([[0], [0], [l0]])
def o_2(q):
    return np.array([[0], [0], [l0]])
def o_3(q):
    return np.array([[-l1*s(q[0, 0])*c(q[1, 0])], [l1*c(q[0, 0])*c(q[1, 0])], [l0 - l1*s(q[1, 0])]])
def o_4(q):
    return np.array([[-l1*s(q[0, 0])*c(q[1, 0]) + l2*s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) - l2*s(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [l1*c(q[0, 0])*c(q[1, 0]) - l2*s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) + l2*c(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [l0 - l1*s(q[1, 0]) - l2*s(q[1, 0])*c(q[2, 0]) - l2*s(q[2, 0])*c(q[1, 0])]])
def rx_0(q):
    return np.array([[1], [0], [0]])
def rx_1(q):
    return np.array([[-s(q[0, 0])], [c(q[0, 0])], [0]])
def rx_2(q):
    return np.array([[-s(q[0, 0])*c(q[1, 0])], [c(q[0, 0])*c(q[1, 0])], [-s(q[1, 0])]])
def rx_3(q):
    return np.array([[s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) - s(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [-s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) + c(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [-s(q[1, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[1, 0])]])
def rx_4(q):
    return np.array([[s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) - s(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [-s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) + c(q[0, 0])*c(q[1, 0])*c(q[2, 0])], [-s(q[1, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[1, 0])]])
def ry_0(q):
    return np.array([[0], [1], [0]])
def ry_1(q):
    return np.array([[-c(q[0, 0])], [-s(q[0, 0])], [0]])
def ry_2(q):
    return np.array([[s(q[0, 0])*s(q[1, 0])], [-s(q[1, 0])*c(q[0, 0])], [-c(q[1, 0])]])
def ry_3(q):
    return np.array([[s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + s(q[0, 0])*s(q[2, 0])*c(q[1, 0])], [-s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[0, 0])*c(q[1, 0])], [s(q[1, 0])*s(q[2, 0]) - c(q[1, 0])*c(q[2, 0])]])
def ry_4(q):
    return np.array([[s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + s(q[0, 0])*s(q[2, 0])*c(q[1, 0])], [-s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - s(q[2, 0])*c(q[0, 0])*c(q[1, 0])], [s(q[1, 0])*s(q[2, 0]) - c(q[1, 0])*c(q[2, 0])]])
def rz_0(q):
    return np.array([[0], [0], [1]])
def rz_1(q):
    return np.array([[0], [0], [1]])
def rz_2(q):
    return np.array([[-c(q[0, 0])], [-s(q[0, 0])], [0]])
def rz_3(q):
    return np.array([[-c(q[0, 0])], [-s(q[0, 0])], [0]])
def rz_4(q):
    return np.array([[-c(q[0, 0])], [-s(q[0, 0])], [0]])
