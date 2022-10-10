import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def o_0(q):
    return numpy.array([[0], [0], [0]])
def o_1(q):
    return numpy.array([[0], [0], [l0]])
def o_2(q):
    return numpy.array([[0], [0], [l0]])
def o_3(q):
    return numpy.array([[-l1*numpy.sin(q[0, 0])*numpy.cos(q[1, 0])], [l1*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])], [l0 - l1*numpy.sin(q[1, 0])]])
def o_4(q):
    return numpy.array([[-l1*numpy.sin(q[0, 0])*numpy.cos(q[1, 0]) + l2*numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) - l2*numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [l1*numpy.cos(q[0, 0])*numpy.cos(q[1, 0]) - l2*numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[0, 0]) + l2*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [l0 - l1*numpy.sin(q[1, 0]) - l2*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - l2*numpy.sin(q[2, 0])*numpy.cos(q[1, 0])]])
def rx_0(q):
    return numpy.array([[1], [0], [0]])
def rx_1(q):
    return numpy.array([[-numpy.sin(q[0, 0])], [numpy.cos(q[0, 0])], [0]])
def rx_2(q):
    return numpy.array([[-numpy.sin(q[0, 0])*numpy.cos(q[1, 0])], [numpy.cos(q[0, 0])*numpy.cos(q[1, 0])], [-numpy.sin(q[1, 0])]])
def rx_3(q):
    return numpy.array([[numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) - numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [-numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[0, 0]) + numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [-numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - numpy.sin(q[2, 0])*numpy.cos(q[1, 0])]])
def rx_4(q):
    return numpy.array([[numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) - numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [-numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[0, 0]) + numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [-numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - numpy.sin(q[2, 0])*numpy.cos(q[1, 0])]])
def ry_0(q):
    return numpy.array([[0], [1], [0]])
def ry_1(q):
    return numpy.array([[-numpy.cos(q[0, 0])], [-numpy.sin(q[0, 0])], [0]])
def ry_2(q):
    return numpy.array([[numpy.sin(q[0, 0])*numpy.sin(q[1, 0])], [-numpy.sin(q[1, 0])*numpy.cos(q[0, 0])], [-numpy.cos(q[1, 0])]])
def ry_3(q):
    return numpy.array([[numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[0, 0])*numpy.sin(q[2, 0])*numpy.cos(q[1, 0])], [-numpy.sin(q[1, 0])*numpy.cos(q[0, 0])*numpy.cos(q[2, 0]) - numpy.sin(q[2, 0])*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])], [numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])]])
def ry_4(q):
    return numpy.array([[numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[0, 0])*numpy.sin(q[2, 0])*numpy.cos(q[1, 0])], [-numpy.sin(q[1, 0])*numpy.cos(q[0, 0])*numpy.cos(q[2, 0]) - numpy.sin(q[2, 0])*numpy.cos(q[0, 0])*numpy.cos(q[1, 0])], [numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])]])
def rz_0(q):
    return numpy.array([[0], [0], [1]])
def rz_1(q):
    return numpy.array([[0], [0], [1]])
def rz_2(q):
    return numpy.array([[-numpy.cos(q[0, 0])], [-numpy.sin(q[0, 0])], [0]])
def rz_3(q):
    return numpy.array([[-numpy.cos(q[0, 0])], [-numpy.sin(q[0, 0])], [0]])
def rz_4(q):
    return numpy.array([[-numpy.cos(q[0, 0])], [-numpy.sin(q[0, 0])], [0]])
