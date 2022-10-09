import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jry_0_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jry_1_dot(q, dq):
    return numpy.array([[numpy.sin(q[0, 0]), 0, 0], [-numpy.cos(q[0, 0]), 0, 0], [0, 0, 0]])
def jry_2_dot(q, dq):
    return numpy.array([[numpy.sin(q[1, 0])*numpy.cos(q[0, 0]), numpy.sin(q[0, 0])*numpy.cos(q[1, 0]), 0], [numpy.sin(q[0, 0])*numpy.sin(q[1, 0]), -numpy.cos(q[0, 0])*numpy.cos(q[1, 0]), 0], [0, numpy.sin(q[1, 0]), 0]])
def jry_3_dot(q, dq):
    return numpy.array([[numpy.sin(q[1, 0])*numpy.cos(q[0, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[2, 0])*numpy.cos(q[0, 0])*numpy.cos(q[1, 0]), -numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]), -numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + numpy.sin(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [numpy.sin(q[0, 0])*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[0, 0])*numpy.sin(q[2, 0])*numpy.cos(q[1, 0]), numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[0, 0]) - numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]), numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[0, 0]) - numpy.cos(q[0, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])], [0, numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[2, 0])*numpy.cos(q[1, 0]), numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + numpy.sin(q[2, 0])*numpy.cos(q[1, 0])]])
