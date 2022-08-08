#include <iostream>
#include<eigen3/Eigen/Core>

#include "../include/baxter.hpp"



int main()
{
    using Eigen::VectorXd;
    using Eigen::MatrixXd;
    using std::cout;
    using std::endl;

    VectorXd q(7);
    VectorXd dq(7);

    q = VectorXd::Zero(7);
    dq = VectorXd::Zero(7);


    cout << q << endl;
    cout << dq << endl;


    baxter::Kinematics kim;

    VectorXd hoge(3);


    kim.o_0(q, hoge);

    cout << hoge << endl;
}