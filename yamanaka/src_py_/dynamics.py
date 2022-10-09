import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def M(q):
    return numpy.array([[Iy2*numpy.sin(q[1, 0])**2 + Iy3*numpy.sin(q[1, 0] + q[2, 0])**2 + Iz1 + Iz2*numpy.cos(q[1, 0])**2 + Iz3*numpy.cos(q[1, 0] + q[2, 0])**2 + m2*r1**2*numpy.cos(q[1, 0])**2 + m3*(l1*numpy.cos(q[1, 0]) + r2*numpy.cos(q[1, 0] + q[2, 0]))**2, 0, 0], [0, Ix2 + Ix3 + l1**2*m3 + 2*l1*m3*r2*numpy.cos(q[2, 0]) + m2*r1**2 + m3*r2**2, Ix3 + l1*m3*r2 + m3*r2**2 + numpy.cos(q[2, 0])], [0, Ix3 + l1*m3*r2*numpy.cos(q[2, 0]) + m3*r2**2, Ix3 + m3*r2**2]])
def C(q, dq):
    return numpy.array([[(-m3*r2*(l1*numpy.cos(q[1, 0]) + r2 + numpy.cos(q[1, 0] + q[2, 0]))*numpy.sin(q[1, 0] + q[2, 0]) + (Iy3 - Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]))*dq[2, 0] + (-m3*(l1*numpy.sin(q[1, 0]) + r2*numpy.sin(q[1, 0] + q[2, 0]))*(l1*numpy.cos(q[1, 0]) + r2*numpy.cos(q[1, 0] + q[2, 0])) + (Iy3 - Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]) + (Iy2 - Iz2 - m2*r1**2)*numpy.sin(q[1, 0])*numpy.cos(q[1, 0]))*dq[1, 0], (-m3*(l1*numpy.sin(q[1, 0]) + r2*numpy.sin(q[1, 0] + q[2, 0]))*(l1*numpy.cos(q[1, 0]) + r2*numpy.cos(q[1, 0] + q[2, 0])) + (Iy3 - Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]) + (Iy2 - Iz2 - m2*r1**2)*numpy.sin(q[1, 0])*numpy.cos(q[1, 0]))*dq[0, 0], (-m3*r2*(l1*numpy.cos(q[1, 0]) + r2 + numpy.cos(q[1, 0] + q[2, 0]))*numpy.sin(q[1, 0] + q[2, 0]) + (Iy3 - Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]))*dq[0, 0]], [(m3*(l1*numpy.cos(q[1, 0]) + r2*numpy.cos(q[1, 0] + q[2, 0]))*(l1*numpy.sin(q[1, 0]) + r2 + numpy.sin(q[1, 0] + q[2, 0])) - (Iy3 - Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]) + (-Iy2 + Iz2 + m2*r1**2)*numpy.sin(q[1, 0])*numpy.cos(q[1, 0]))*dq[0, 0], -l1*m3*r2*numpy.sin(q[2, 0])*dq[2, 0], -l1*m3*r2*numpy.sin(q[2, 0])*dq[1, 0] - l1*m3*r2*numpy.sin(q[2, 0])*dq[2, 0]], [(m3*r2*(l1*numpy.cos(q[1, 0]) + r2*numpy.cos(q[1, 0] + q[2, 0]))*numpy.sin(q[1, 0] + q[2, 0]) + (-Iy3 + Iz3)*numpy.sin(q[1, 0] + q[2, 0])*numpy.cos(q[1, 0] + q[2, 0]))*dq[0, 0], l1*m3*r2*numpy.sin(q[2, 0])*dq[1, 0], 0]])
def G(q):
    return numpy.array([[0], [-g*m3*r2*numpy.cos(q[1, 0] + q[2, 0]) + (-g*l1*m3 - g*m2*r1)*numpy.cos(q[1, 0])], [-g*m3*r2*numpy.cos(q[1, 0] + q[2, 0])]])
