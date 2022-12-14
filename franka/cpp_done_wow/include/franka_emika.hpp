#ifndef FRANAK_EMIKA_HPP
#define FRANKA_RMIKA_HPP
#include<eigen3/Eigen/Core>
#include<vector>
namespace franka_emika
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::vector;
    using func_q_vecout = void (*)(const VectorXd&, VectorXd&);
    using func_q_matout = void (*)(const VectorXd&, MatrixXd&);
    using func_q_dq_matout = void (*)(const VectorXd&, const VectorXd&, MatrixXd&);

    class Kinematics
    {
    private:
        static const double d1;
        static const double d3;
        static const double d5;
        static const double df;
        static const double a4;
        static const double a5;
        static const double a7;
        static const double R0;
        static const double R;
        static void htm(int n, const VectorXd& q, MatrixXd& out);
        static void htm_0(const VectorXd& q, MatrixXd& out);
        static void htm_1(const VectorXd& q, MatrixXd& out);
        static void htm_2(const VectorXd& q, MatrixXd& out);
        static void htm_3(const VectorXd& q, MatrixXd& out);
        static void htm_4(const VectorXd& q, MatrixXd& out);
        static void htm_5(const VectorXd& q, MatrixXd& out);
        static void htm_6(const VectorXd& q, MatrixXd& out);
        static void htm_ee(const VectorXd& q, MatrixXd& out);
        static void o_0(const VectorXd& q, VectorXd& out);
        static void o_1(const VectorXd& q, VectorXd& out);
        static void o_2(const VectorXd& q, VectorXd& out);
        static void o_3(const VectorXd& q, VectorXd& out);
        static void o_4(const VectorXd& q, VectorXd& out);
        static void o_5(const VectorXd& q, VectorXd& out);
        static void o_6(const VectorXd& q, VectorXd& out);
        static void o_ee(const VectorXd& q, VectorXd& out);
        static void rx_0(const VectorXd& q, VectorXd& out);
        static void rx_1(const VectorXd& q, VectorXd& out);
        static void rx_2(const VectorXd& q, VectorXd& out);
        static void rx_3(const VectorXd& q, VectorXd& out);
        static void rx_4(const VectorXd& q, VectorXd& out);
        static void rx_5(const VectorXd& q, VectorXd& out);
        static void rx_6(const VectorXd& q, VectorXd& out);
        static void rx_ee(const VectorXd& q, VectorXd& out);
        static void ry_0(const VectorXd& q, VectorXd& out);
        static void ry_1(const VectorXd& q, VectorXd& out);
        static void ry_2(const VectorXd& q, VectorXd& out);
        static void ry_3(const VectorXd& q, VectorXd& out);
        static void ry_4(const VectorXd& q, VectorXd& out);
        static void ry_5(const VectorXd& q, VectorXd& out);
        static void ry_6(const VectorXd& q, VectorXd& out);
        static void ry_ee(const VectorXd& q, VectorXd& out);
        static void rz_0(const VectorXd& q, VectorXd& out);
        static void rz_1(const VectorXd& q, VectorXd& out);
        static void rz_2(const VectorXd& q, VectorXd& out);
        static void rz_3(const VectorXd& q, VectorXd& out);
        static void rz_4(const VectorXd& q, VectorXd& out);
        static void rz_5(const VectorXd& q, VectorXd& out);
        static void rz_6(const VectorXd& q, VectorXd& out);
        static void rz_ee(const VectorXd& q, VectorXd& out);
        static void jo_0(const VectorXd& q, MatrixXd& out);
        static void jo_1(const VectorXd& q, MatrixXd& out);
        static void jo_2(const VectorXd& q, MatrixXd& out);
        static void jo_3(const VectorXd& q, MatrixXd& out);
        static void jo_4(const VectorXd& q, MatrixXd& out);
        static void jo_5(const VectorXd& q, MatrixXd& out);
        static void jo_6(const VectorXd& q, MatrixXd& out);
        static void jo_ee(const VectorXd& q, MatrixXd& out);
        static void jrx_0(const VectorXd& q, MatrixXd& out);
        static void jrx_1(const VectorXd& q, MatrixXd& out);
        static void jrx_2(const VectorXd& q, MatrixXd& out);
        static void jrx_3(const VectorXd& q, MatrixXd& out);
        static void jrx_4(const VectorXd& q, MatrixXd& out);
        static void jrx_5(const VectorXd& q, MatrixXd& out);
        static void jrx_6(const VectorXd& q, MatrixXd& out);
        static void jrx_ee(const VectorXd& q, MatrixXd& out);
        static void jry_0(const VectorXd& q, MatrixXd& out);
        static void jry_1(const VectorXd& q, MatrixXd& out);
        static void jry_2(const VectorXd& q, MatrixXd& out);
        static void jry_3(const VectorXd& q, MatrixXd& out);
        static void jry_4(const VectorXd& q, MatrixXd& out);
        static void jry_5(const VectorXd& q, MatrixXd& out);
        static void jry_6(const VectorXd& q, MatrixXd& out);
        static void jry_ee(const VectorXd& q, MatrixXd& out);
        static void jrz_0(const VectorXd& q, MatrixXd& out);
        static void jrz_1(const VectorXd& q, MatrixXd& out);
        static void jrz_2(const VectorXd& q, MatrixXd& out);
        static void jrz_3(const VectorXd& q, MatrixXd& out);
        static void jrz_4(const VectorXd& q, MatrixXd& out);
        static void jrz_5(const VectorXd& q, MatrixXd& out);
        static void jrz_6(const VectorXd& q, MatrixXd& out);
        static void jrz_ee(const VectorXd& q, MatrixXd& out);
        static void jo_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jo_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrx_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_4_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_5_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_6_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jrz_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);

    
    public:
        static void set_q_max(VectorXd& out);
        static void set_q_min(VectorXd& out);
        static void set_q_neutral(VectorXd& out);
        static const vector<vector<double>> r_bars_0;
        static const vector<vector<double>> r_bars_1;
        static const vector<vector<double>> r_bars_2;
        static const vector<vector<double>> r_bars_3;
        static const vector<vector<double>> r_bars_4;
        static const vector<vector<double>> r_bars_5;
        static const vector<vector<double>> r_bars_6;
        static const vector<vector<double>> r_bars_ee;

        static vector<func_q_vecout> Os;
        static vector<func_q_vecout> RXs;
        static vector<func_q_vecout> RYs;
        static vector<func_q_vecout> RZs;
        static vector<func_q_matout> HTMs;
        static vector<func_q_matout> JOs;
        static vector<func_q_matout> JRXs;
        static vector<func_q_matout> JRYs;
        static vector<func_q_matout> JRZs;
        static vector<func_q_dq_matout> JOs_dot;
        static vector<func_q_dq_matout> JRXs_dot;
        static vector<func_q_dq_matout> JRYs_dot;
        static vector<func_q_dq_matout> JRZs_dot;

        static const vector<vector<vector<double>>> R_BARS_ALL;
    };
};
#endif