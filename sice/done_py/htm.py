import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def o_0(q):
    return np.array([[0], [0]])
def o_1(q):
    return np.array([[l1*c(q0)], [l1*s(q0)]])
def o_2(q):
    return np.array([[l1*c(q0) - l2*s(q0)*s(q1) + l2*c(q0)*c(q1)], [l1*s(q0) + l2*s(q0)*c(q1) + l2*s(q1)*c(q0)]])
def o_3(q):
    return np.array([[l1*c(q0) - l2*s(q0)*s(q1) + l2*c(q0)*c(q1) - l3*s(q0)*s(q1)*c(q2) - l3*s(q0)*s(q2)*c(q1) - l3*s(q1)*s(q2)*c(q0) + l3*c(q0)*c(q1)*c(q2)], [l1*s(q0) + l2*s(q0)*c(q1) + l2*s(q1)*c(q0) - l3*s(q0)*s(q1)*s(q2) + l3*s(q0)*c(q1)*c(q2) + l3*s(q1)*c(q0)*c(q2) + l3*s(q2)*c(q0)*c(q1)]])
def o_ee(q):
    return np.array([[l1*c(q0) - l2*s(q0)*s(q1) + l2*c(q0)*c(q1) - l3*s(q0)*s(q1)*c(q2) - l3*s(q0)*s(q2)*c(q1) - l3*s(q1)*s(q2)*c(q0) + l3*c(q0)*c(q1)*c(q2) + l4*s(q0)*s(q1)*s(q2)*s(q3) - l4*s(q0)*s(q1)*c(q2)*c(q3) - l4*s(q0)*s(q2)*c(q1)*c(q3) - l4*s(q0)*s(q3)*c(q1)*c(q2) - l4*s(q1)*s(q2)*c(q0)*c(q3) - l4*s(q1)*s(q3)*c(q0)*c(q2) - l4*s(q2)*s(q3)*c(q0)*c(q1) + l4*c(q0)*c(q1)*c(q2)*c(q3)], [l1*s(q0) + l2*s(q0)*c(q1) + l2*s(q1)*c(q0) - l3*s(q0)*s(q1)*s(q2) + l3*s(q0)*c(q1)*c(q2) + l3*s(q1)*c(q0)*c(q2) + l3*s(q2)*c(q0)*c(q1) - l4*s(q0)*s(q1)*s(q2)*c(q3) - l4*s(q0)*s(q1)*s(q3)*c(q2) - l4*s(q0)*s(q2)*s(q3)*c(q1) + l4*s(q0)*c(q1)*c(q2)*c(q3) - l4*s(q1)*s(q2)*s(q3)*c(q0) + l4*s(q1)*c(q0)*c(q2)*c(q3) + l4*s(q2)*c(q0)*c(q1)*c(q3) + l4*s(q3)*c(q0)*c(q1)*c(q2)]])
def rx_0(q):
    return np.array([[c(q0)], [s(q0)]])
def rx_1(q):
    return np.array([[-s(q0)*s(q1) + c(q0)*c(q1)], [s(q0)*c(q1) + s(q1)*c(q0)]])
def rx_2(q):
    return np.array([[-s(q0)*s(q1)*c(q2) - s(q0)*s(q2)*c(q1) - s(q1)*s(q2)*c(q0) + c(q0)*c(q1)*c(q2)], [-s(q0)*s(q1)*s(q2) + s(q0)*c(q1)*c(q2) + s(q1)*c(q0)*c(q2) + s(q2)*c(q0)*c(q1)]])
def rx_3(q):
    return np.array([[s(q0)*s(q1)*s(q2)*s(q3) - s(q0)*s(q1)*c(q2)*c(q3) - s(q0)*s(q2)*c(q1)*c(q3) - s(q0)*s(q3)*c(q1)*c(q2) - s(q1)*s(q2)*c(q0)*c(q3) - s(q1)*s(q3)*c(q0)*c(q2) - s(q2)*s(q3)*c(q0)*c(q1) + c(q0)*c(q1)*c(q2)*c(q3)], [-s(q0)*s(q1)*s(q2)*c(q3) - s(q0)*s(q1)*s(q3)*c(q2) - s(q0)*s(q2)*s(q3)*c(q1) + s(q0)*c(q1)*c(q2)*c(q3) - s(q1)*s(q2)*s(q3)*c(q0) + s(q1)*c(q0)*c(q2)*c(q3) + s(q2)*c(q0)*c(q1)*c(q3) + s(q3)*c(q0)*c(q1)*c(q2)]])
def rx_ee(q):
    return np.array([[s(q0)*s(q1)*s(q2)*s(q3) - s(q0)*s(q1)*c(q2)*c(q3) - s(q0)*s(q2)*c(q1)*c(q3) - s(q0)*s(q3)*c(q1)*c(q2) - s(q1)*s(q2)*c(q0)*c(q3) - s(q1)*s(q3)*c(q0)*c(q2) - s(q2)*s(q3)*c(q0)*c(q1) + c(q0)*c(q1)*c(q2)*c(q3)], [-s(q0)*s(q1)*s(q2)*c(q3) - s(q0)*s(q1)*s(q3)*c(q2) - s(q0)*s(q2)*s(q3)*c(q1) + s(q0)*c(q1)*c(q2)*c(q3) - s(q1)*s(q2)*s(q3)*c(q0) + s(q1)*c(q0)*c(q2)*c(q3) + s(q2)*c(q0)*c(q1)*c(q3) + s(q3)*c(q0)*c(q1)*c(q2)]])
def ry_0(q):
    return np.array([[-s(q0)], [c(q0)]])
def ry_1(q):
    return np.array([[-s(q0)*c(q1) - s(q1)*c(q0)], [-s(q0)*s(q1) + c(q0)*c(q1)]])
def ry_2(q):
    return np.array([[s(q0)*s(q1)*s(q2) - s(q0)*c(q1)*c(q2) - s(q1)*c(q0)*c(q2) - s(q2)*c(q0)*c(q1)], [-s(q0)*s(q1)*c(q2) - s(q0)*s(q2)*c(q1) - s(q1)*s(q2)*c(q0) + c(q0)*c(q1)*c(q2)]])
def ry_3(q):
    return np.array([[s(q0)*s(q1)*s(q2)*c(q3) + s(q0)*s(q1)*s(q3)*c(q2) + s(q0)*s(q2)*s(q3)*c(q1) - s(q0)*c(q1)*c(q2)*c(q3) + s(q1)*s(q2)*s(q3)*c(q0) - s(q1)*c(q0)*c(q2)*c(q3) - s(q2)*c(q0)*c(q1)*c(q3) - s(q3)*c(q0)*c(q1)*c(q2)], [s(q0)*s(q1)*s(q2)*s(q3) - s(q0)*s(q1)*c(q2)*c(q3) - s(q0)*s(q2)*c(q1)*c(q3) - s(q0)*s(q3)*c(q1)*c(q2) - s(q1)*s(q2)*c(q0)*c(q3) - s(q1)*s(q3)*c(q0)*c(q2) - s(q2)*s(q3)*c(q0)*c(q1) + c(q0)*c(q1)*c(q2)*c(q3)]])
def ry_ee(q):
    return np.array([[s(q0)*s(q1)*s(q2)*c(q3) + s(q0)*s(q1)*s(q3)*c(q2) + s(q0)*s(q2)*s(q3)*c(q1) - s(q0)*c(q1)*c(q2)*c(q3) + s(q1)*s(q2)*s(q3)*c(q0) - s(q1)*c(q0)*c(q2)*c(q3) - s(q2)*c(q0)*c(q1)*c(q3) - s(q3)*c(q0)*c(q1)*c(q2)], [s(q0)*s(q1)*s(q2)*s(q3) - s(q0)*s(q1)*c(q2)*c(q3) - s(q0)*s(q2)*c(q1)*c(q3) - s(q0)*s(q3)*c(q1)*c(q2) - s(q1)*s(q2)*c(q0)*c(q3) - s(q1)*s(q3)*c(q0)*c(q2) - s(q2)*s(q3)*c(q0)*c(q1) + c(q0)*c(q1)*c(q2)*c(q3)]])
