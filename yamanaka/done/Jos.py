import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jo_0(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_1(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_2(q):
    return np.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_3(q):
    return np.array([[-l1*c(q[0, 0])*c(q[1, 0]), l1*s(q[0, 0])*s(q[1, 0]), 0], [-l1*s(q[0, 0])*c(q[1, 0]), -l1*s(q[1, 0])*c(q[0, 0]), 0], [0, -l1*c(q[1, 0]), 0]])
def jo_4(q):
    return np.array([[-l1*c(q[0, 0])*c(q[1, 0]) + l2*s(q[1, 0])*s(q[2, 0])*c(q[0, 0]) - l2*c(q[0, 0])*c(q[1, 0])*c(q[2, 0]), l1*s(q[0, 0])*s(q[1, 0]) + l2*s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + l2*s(q[0, 0])*s(q[2, 0])*c(q[1, 0]), l2*s(q[0, 0])*s(q[1, 0])*c(q[2, 0]) + l2*s(q[0, 0])*s(q[2, 0])*c(q[1, 0])], [-l1*s(q[0, 0])*c(q[1, 0]) + l2*s(q[0, 0])*s(q[1, 0])*s(q[2, 0]) - l2*s(q[0, 0])*c(q[1, 0])*c(q[2, 0]), -l1*s(q[1, 0])*c(q[0, 0]) - l2*s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - l2*s(q[2, 0])*c(q[0, 0])*c(q[1, 0]), -l2*s(q[1, 0])*c(q[0, 0])*c(q[2, 0]) - l2*s(q[2, 0])*c(q[0, 0])*c(q[1, 0])], [0, -l1*c(q[1, 0]) + l2*s(q[1, 0])*s(q[2, 0]) - l2*c(q[1, 0])*c(q[2, 0]), l2*s(q[1, 0])*s(q[2, 0]) - l2*c(q[1, 0])*c(q[2, 0])]])
