import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jo_W0(q):
    return np.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jo_BR(q):
    return np.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jo_0(q):
    return np.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jo_1(q):
    return np.array([[0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), 0, 0, 0, 0, 0, 0], [0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jo_2(q):
    return np.array([[(0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), -(0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]), 0, 0, 0, 0, 0], [(0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), -(-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]), 0, 0, 0, 0, 0], [0, -0.36435*c(q[1, 0]), 0, 0, 0, 0, 0]])
def jo_3(q):
    return np.array([[(-0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) - (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]), -(-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]), 0, 0, 0, 0], [(-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), -(-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]), (0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]) - (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]), 0, 0, 0, 0], [0, 0.069*s(q[1, 0])*c(q[2, 0]) - 0.36435*c(q[1, 0]), 0.069*s(q[2, 0])*c(q[1, 0]), 0, 0, 0, 0]])
def jo_4(q):
    return np.array([[(0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) + 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) - (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]), (-0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[3, 0]) - (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]), (-0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), 0, 0, 0], [(0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), -(-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) - (-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]), (0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[3, 0]) + (0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]) - (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]), (-0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), 0, 0, 0], [0, 0.37429*s(q[1, 0])*s(q[3, 0])*c(q[2, 0]) + 0.069*s(q[1, 0])*c(q[2, 0]) - 0.37429*c(q[1, 0])*c(q[3, 0]) - 0.36435*c(q[1, 0]), 0.37429*s(q[2, 0])*s(q[3, 0])*c(q[1, 0]) + 0.069*s(q[2, 0])*c(q[1, 0]), 0.37429*s(q[1, 0])*s(q[3, 0]) - 0.37429*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]), 0, 0, 0]])
def jo_5(q):
    return np.array([[(0.01*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) + 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), (-0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) - (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]), 0.01*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) - (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]), (-0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (-0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), -(0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), 0, 0], [(0.01*((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), (-0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) - (-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]), (0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[3, 0]) + 0.01*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) + (0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]) - (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]), (-0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), -(0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), 0, 0], [0, (0.01*s(q[1, 0])*c(q[2, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) - 0.01*s(q[1, 0])*s(q[2, 0])*s(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0])*c(q[2, 0]) + 0.069*s(q[1, 0])*c(q[2, 0]) - 0.37429*c(q[1, 0])*c(q[3, 0]) - 0.36435*c(q[1, 0]), 0.37429*s(q[2, 0])*s(q[3, 0])*c(q[1, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[3, 0])*c(q[4, 0]) + 0.069*s(q[2, 0])*c(q[1, 0]) + 0.01*s(q[4, 0])*c(q[1, 0])*c(q[2, 0]), (0.01*s(q[1, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*c(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0]) - 0.37429*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]), -(0.01*s(q[1, 0])*s(q[3, 0]) - 0.01*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*s(q[4, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[4, 0]), 0, 0]])
def jo_6(q):
    return np.array([[(0.01*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) + 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), (-0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) - (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]), 0.01*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) - (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]), (-0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (-0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), -(0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), 0, 0], [(0.01*((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), (-0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) - (-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]), (0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[3, 0]) + 0.01*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) + (0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]) - (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]), (-0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), -(0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), 0, 0], [0, (0.01*s(q[1, 0])*c(q[2, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) - 0.01*s(q[1, 0])*s(q[2, 0])*s(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0])*c(q[2, 0]) + 0.069*s(q[1, 0])*c(q[2, 0]) - 0.37429*c(q[1, 0])*c(q[3, 0]) - 0.36435*c(q[1, 0]), 0.37429*s(q[2, 0])*s(q[3, 0])*c(q[1, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[3, 0])*c(q[4, 0]) + 0.069*s(q[2, 0])*c(q[1, 0]) + 0.01*s(q[4, 0])*c(q[1, 0])*c(q[2, 0]), (0.01*s(q[1, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*c(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0]) - 0.37429*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]), -(0.01*s(q[1, 0])*s(q[3, 0]) - 0.01*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*s(q[4, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[4, 0]), 0, 0]])
def jo_ee(q):
    return np.array([[(0.3683*(((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + (-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + 0.3683*((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[4, 0]))*s(q[5, 0]) + (0.3683*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.3683*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[5, 0]) + (0.01*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) + 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) + 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]), (0.3683*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.3683*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]))*s(q[5, 0]) + (-0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + (0.3683*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]) - 0.3683*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]))*c(q[5, 0]) + 0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) - (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]), (0.3683*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + 0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]))*s(q[5, 0]) + 0.3683*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[3, 0])*c(q[5, 0]) + 0.01*(-(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) - (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]), 0.3683*(-(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*s(q[5, 0])*c(q[4, 0]) + (-0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (0.3683*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.3683*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[5, 0]) + (-0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), (-0.3683*((-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + 0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]))*s(q[5, 0]) - (0.01*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), (0.3683*((-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + 0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]))*c(q[5, 0]) - (0.3683*(-(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.3683*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*s(q[5, 0]), 0], [(0.3683*(((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + (-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + 0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]))*s(q[5, 0]) + (0.3683*((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.3683*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[5, 0]) + (0.01*((-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + (0.37429*(-0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]) + (-0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[2, 0]) + (0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*c(q[1, 0]) + (0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]) + 0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]), (0.3683*(-(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.3683*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]))*s(q[5, 0]) + (-0.3683*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) + 0.3683*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*c(q[5, 0]) + (-0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[1, 0])*c(q[3, 0]) - (-0.257634355725319*s(q[0, 0]) - 0.257634355725319*c(q[0, 0]))*s(q[1, 0]) + (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*c(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]), (0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - 0.37429*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[3, 0]) + 0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*s(q[3, 0])*c(q[5, 0]) + 0.01*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + (0.3683*((0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]))*c(q[3, 0])*c(q[4, 0]) + 0.3683*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]))*s(q[5, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) - 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[4, 0]) + (0.0487903679018718*s(q[0, 0]) - 0.0487903679018718*c(q[0, 0]))*c(q[2, 0]) - (0.0487903679018718*s(q[0, 0]) + 0.0487903679018718*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]), 0.3683*(-(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + (0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*s(q[5, 0])*c(q[4, 0]) + (-0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) + 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*c(q[4, 0]) + (0.3683*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.3683*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[5, 0]) + (-0.37429*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + 0.37429*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.264662997130313*s(q[0, 0]) - 0.264662997130313*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]), (-0.3683*((-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + 0.3683*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]))*s(q[5, 0]) - (0.01*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - 0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*s(q[4, 0]) + (0.01*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + 0.01*(0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*c(q[4, 0]), (0.3683*((-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*c(q[3, 0]) - (-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) + 0.3683*((-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*s(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[2, 0]))*s(q[4, 0]))*c(q[5, 0]) - (0.3683*(-(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[1, 0])*c(q[2, 0]) + (0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*s(q[2, 0]))*s(q[3, 0]) + 0.3683*(-0.707106781186548*s(q[0, 0]) - 0.707106781186548*c(q[0, 0]))*c(q[1, 0])*c(q[3, 0]))*s(q[5, 0]), 0], [0, (0.3683*(s(q[1, 0])*c(q[2, 0])*c(q[3, 0]) + s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) - 0.3683*s(q[1, 0])*s(q[2, 0])*s(q[4, 0]))*s(q[5, 0]) + (0.3683*s(q[1, 0])*s(q[3, 0])*c(q[2, 0]) - 0.3683*c(q[1, 0])*c(q[3, 0]))*c(q[5, 0]) + (0.01*s(q[1, 0])*c(q[2, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0]))*c(q[4, 0]) - 0.01*s(q[1, 0])*s(q[2, 0])*s(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0])*c(q[2, 0]) + 0.069*s(q[1, 0])*c(q[2, 0]) - 0.37429*c(q[1, 0])*c(q[3, 0]) - 0.36435*c(q[1, 0]), (0.3683*s(q[2, 0])*c(q[1, 0])*c(q[3, 0])*c(q[4, 0]) + 0.3683*s(q[4, 0])*c(q[1, 0])*c(q[2, 0]))*s(q[5, 0]) + 0.3683*s(q[2, 0])*s(q[3, 0])*c(q[1, 0])*c(q[5, 0]) + 0.37429*s(q[2, 0])*s(q[3, 0])*c(q[1, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[3, 0])*c(q[4, 0]) + 0.069*s(q[2, 0])*c(q[1, 0]) + 0.01*s(q[4, 0])*c(q[1, 0])*c(q[2, 0]), (0.3683*s(q[1, 0])*s(q[3, 0]) - 0.3683*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[5, 0]) + (0.01*s(q[1, 0])*c(q[3, 0]) + 0.01*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*c(q[4, 0]) + 0.3683*(s(q[1, 0])*c(q[3, 0]) + s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*s(q[5, 0])*c(q[4, 0]) + 0.37429*s(q[1, 0])*s(q[3, 0]) - 0.37429*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]), (-0.3683*(s(q[1, 0])*s(q[3, 0]) - c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*s(q[4, 0]) + 0.3683*s(q[2, 0])*c(q[1, 0])*c(q[4, 0]))*s(q[5, 0]) - (0.01*s(q[1, 0])*s(q[3, 0]) - 0.01*c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*s(q[4, 0]) + 0.01*s(q[2, 0])*c(q[1, 0])*c(q[4, 0]), (0.3683*(s(q[1, 0])*s(q[3, 0]) - c(q[1, 0])*c(q[2, 0])*c(q[3, 0]))*c(q[4, 0]) + 0.3683*s(q[2, 0])*s(q[4, 0])*c(q[1, 0]))*c(q[5, 0]) - (-0.3683*s(q[1, 0])*c(q[3, 0]) - 0.3683*s(q[3, 0])*c(q[1, 0])*c(q[2, 0]))*s(q[5, 0]), 0]])
