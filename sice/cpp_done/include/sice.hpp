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
        static void o_0(const VectorXd& q, VectorXd& out);
        static void o_1(const VectorXd& q, VectorXd& out);
        static void o_2(const VectorXd& q, VectorXd& out);
        static void o_3(const VectorXd& q, VectorXd& out);
        static void o_ee(const VectorXd& q, VectorXd& out);
        static void rx_0(const VectorXd& q, VectorXd& out);
        static void rx_1(const VectorXd& q, VectorXd& out);
        static void rx_2(const VectorXd& q, VectorXd& out);
        static void rx_3(const VectorXd& q, VectorXd& out);
        static void rx_ee(const VectorXd& q, VectorXd& out);
        static void ry_0(const VectorXd& q, VectorXd& out);
        static void ry_1(const VectorXd& q, VectorXd& out);
        static void ry_2(const VectorXd& q, VectorXd& out);
        static void ry_3(const VectorXd& q, VectorXd& out);
        static void ry_ee(const VectorXd& q, VectorXd& out);
        static void jo_0(const VectorXd& q, VectorXd& out);
        static void jo_1(const VectorXd& q, VectorXd& out);
        static void jo_2(const VectorXd& q, VectorXd& out);
        static void jo_3(const VectorXd& q, VectorXd& out);
        static void jo_ee(const VectorXd& q, VectorXd& out);
        static void jrx_0(const VectorXd& q, MatrixXd& out);
        static void jrx_1(const VectorXd& q, MatrixXd& out);
        static void jrx_2(const VectorXd& q, MatrixXd& out);
        static void jrx_3(const VectorXd& q, MatrixXd& out);
        static void jrx_ee(const VectorXd& q, MatrixXd& out);
        static void jry_0(const VectorXd& q, MatrixXd& out);
        static void jry_1(const VectorXd& q, MatrixXd& out);
        static void jry_2(const VectorXd& q, MatrixXd& out);
        static void jry_3(const VectorXd& q, MatrixXd& out);
        static void jry_ee(const VectorXd& q, MatrixXd& out);
        static void jo_0_dot(const VectorXd& q, MatrixXd& out);
        static void jo_1_dot(const VectorXd& q, MatrixXd& out);
        static void jo_2_dot(const VectorXd& q, MatrixXd& out);
        static void jo_3_dot(const VectorXd& q, MatrixXd& out);
        static void jo_ee_dot(const VectorXd& q, MatrixXd& out);
        static void jrx_0_dot(const VectorXd& q, MatrixXd& out);
        static void jrx_1_dot(const VectorXd& q, MatrixXd& out);
        static void jrx_2_dot(const VectorXd& q, MatrixXd& out);
        static void jrx_3_dot(const VectorXd& q, MatrixXd& out);
        static void jrx_ee_dot(const VectorXd& q, MatrixXd& out);
        static void jry_0_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_1_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_2_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_3_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
        static void jry_ee_dot(const VectorXd& q, const VectorXd& q_dot, MatrixXd& out);
    };
};
#endif