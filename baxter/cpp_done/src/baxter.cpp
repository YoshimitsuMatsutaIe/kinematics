#include "../include/baxter.hpp"

#include <cmath>




const double baxter::Kinematics::len_L = 278e-3;
const double baxter::Kinematics::len_h = 64e-3;
const double baxter::Kinematics::len_H = 1104e-3;
const double baxter::Kinematics::len_L0 = 270.35e-3;
const double baxter::Kinematics::len_L1 = 69e-3;
const double baxter::Kinematics::len_L2 = 364.35e-3;
const double baxter::Kinematics::len_L3 = 69e-3;
const double baxter::Kinematics::len_L4 = 374.29e-3;
const double baxter::Kinematics::len_L5 = 10e-3;
const double baxter::Kinematics::len_L6 = 368.3e-3;
const double baxter::Kinematics::len_R = 0.05;


const std::vector<std::vector<double>> baxter::Kinematics::r_bars_0{
    {0,     len_L1/2,  -len_L0/2, 1},
    {0,     -len_L1/2, -len_L0/2, 1},
    {len_L1/2,  0,     -len_L0/2, 1},
    {-len_L1/2, 0,     -len_L0/2, 1}
};

const std::vector<std::vector<double>> baxter::Kinematics::r_bars_1{
    {0, 0, len_L3/2,  1},
    {0, 0, -len_L3/2, 1}
};

const std::vector<std::vector<double>> baxter::Kinematics::r_bars_2{
    {0,     len_L3/2, -len_L2*2/3, 1},
    {0,     -len_L3/2, -len_L2*2/3, 1},
    {len_L3/2,  0, -len_L2*2/3, 1},
    {-len_L3/2, 0, -len_L2*2/3, 1},
    {0, len_L3/2, -len_L2*1/3, 1},
    {0, -len_L3/2, -len_L2*1/3, 1},
    {len_L3/2, 0, -len_L2*1/3, 1},
    {-len_L3/2, 0, -len_L2*1/3, 1}
};
const std::vector<std::vector<double>> baxter::Kinematics::r_bars_3{
    {0, 0, len_L3/2, 1},
    {0, 0, -len_L3/2, 1}
};
const std::vector<std::vector<double>> baxter::Kinematics::r_bars_4{
    {0, len_R/2, -len_L4/3, 1},
    {0, -len_R/2, -len_L4/3, 1},
    {len_R/2, 0, -len_L4/3, 1},
    {-len_R/2, 0, -len_L4/3, 1},
    {0, len_R/2, -len_L4/3*2, 1},
    {0, -len_R/2, -len_L4/3*2, 1},
    {len_R/2, 0, -len_L4/3*2, 1},
    {-len_R/2, 0, -len_L4/3*2, 1}
};
const std::vector<std::vector<double>> baxter::Kinematics::r_bars_5{
    {0, 0, len_L5/2, 1},
    {0, 0, -len_L5/2, 1}
};
const std::vector<std::vector<double>> baxter::Kinematics::r_bars_6{
    {0, len_R/2, len_L6/2, 1},
    {0, -len_R/2, len_L6/2, 1},
    {len_R/2, 0, len_L6/2, 1},
    {-len_R/2, 0, len_L6/2, 1}
};
const std::vector<std::vector<double>> baxter::Kinematics::r_bars_ee{
    {0, 0, 0, 1}
};
const std::vector<std::vector<std::vector<double>>> baxter::Kinematics::R_BARS_ALL{
    r_bars_0, r_bars_1, r_bars_2, r_bars_3, r_bars_4, r_bars_5, r_bars_6, r_bars_ee
};



std::vector<baxter::func_q_vecout> baxter::Kinematics::Os = {&o_0, &o_1, &o_2, &o_3, &o_4, &o_5, &o_6, &o_ee};
std::vector<baxter::func_q_vecout> baxter::Kinematics::RXs = {&rx_0, &rx_1, &rx_2, &rx_3, &rx_4, &rx_5, &rx_6, &rx_ee};
std::vector<baxter::func_q_vecout> baxter::Kinematics::RYs = {&ry_0, &ry_1, &ry_2, &ry_3, &ry_4, &ry_5, &ry_6, &ry_ee};
std::vector<baxter::func_q_vecout> baxter::Kinematics::RZs = {&rz_0, &rz_1, &rz_2, &rz_3, &rz_4, &rz_5, &rz_6, &rz_ee};
//std::vector<baxter::func_q_matout> baxter::Kinematics::HTMs = {&htm_0, &htm_1, &htm_2, &htm_3, &htm_4, &htm_5, &htm_6, &htm_ee};
std::vector<baxter::func_q_matout> baxter::Kinematics::JOs =  {&jo_0, &jo_1, &jo_2, &jo_3, &jo_4, &jo_5, &jo_6, &jo_ee};
std::vector<baxter::func_q_matout> baxter::Kinematics::JRXs = {&jrx_0, &jrx_1, &jrx_2, &jrx_3, &jrx_4, &jrx_5, &jrx_6, &jrx_ee};
std::vector<baxter::func_q_matout> baxter::Kinematics::JRYs = {&jry_0, &jry_1, &jry_2, &jry_3, &jry_4, &jry_5, &jry_6, &jry_ee};
std::vector<baxter::func_q_matout> baxter::Kinematics::JRZs = {&jrz_0, &jrz_1, &jrz_2, &jrz_3, &jrz_4, &jrz_5, &jrz_6, &jrz_ee};
std::vector<baxter::func_q_dq_matout> baxter::Kinematics::JOs_dot =  {&jo_0_dot, &jo_1_dot, &jo_2_dot, &jo_3_dot, &jo_4_dot, &jo_5_dot, &jo_6_dot, &jo_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Kinematics::JRXs_dot = {&jrx_0_dot, &jrx_1_dot, &jrx_2_dot, &jrx_3_dot, &jrx_4_dot, &jrx_5_dot, &jrx_6_dot, &jrx_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Kinematics::JRYs_dot = {&jry_0_dot, &jry_1_dot, &jry_2_dot, &jry_3_dot, &jry_4_dot, &jry_5_dot, &jry_6_dot, &jry_ee_dot};
std::vector<baxter::func_q_dq_matout> baxter::Kinematics::JRZs_dot = {&jrz_0_dot, &jrz_1_dot, &jrz_2_dot, &jrz_3_dot, &jrz_4_dot, &jrz_5_dot, &jrz_6_dot, &jrz_ee_dot};


