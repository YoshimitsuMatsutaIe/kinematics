import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jrz_0_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_1_dot(q, dq):
    return numpy.array([[0, 0, 0], [0, 0, 0], [0, 0, 0]])
def jrz_2_dot(q, dq):
    return numpy.array([[numpy.sin(q[0, 0]), 0, 0], [-numpy.cos(q[0, 0]), 0, 0], [0, 0, 0]])
def jrz_3_dot(q, dq):
    return numpy.array([[numpy.sin(q[0, 0]), 0, 0], [-numpy.cos(q[0, 0]), 0, 0], [0, 0, 0]])
