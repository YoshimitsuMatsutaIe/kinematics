import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jo_0(q):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_1(q):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_2(q):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jo_3(q):
    return numpy.array([[-l1*numpy.cos(q[0, 0])*numpy.cos(q[1, 0]), l1*numpy.sin(q[0, 0])*numpy.sin(q[1, 0]), 0], [-l1*numpy.sin(q[0, 0])*numpy.cos(q[1, 0]), -l1*numpy.sin(q[1, 0])*numpy.cos(q[0, 0]), 0], [0, -l1*numpy.cos(q[1, 0]), 0]])
