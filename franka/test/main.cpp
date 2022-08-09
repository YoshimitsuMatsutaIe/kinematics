#include <iostream>
#include <eigen3/Eigen/Core>

#include "../cpp_done_wow/include/franka_emika.hpp"



int main()
{
    franka_emika::Kinematics kim;
    franka_emika::Kinematics kim2;

    Eigen::VectorXd q(7);
    Eigen::VectorXd dq(7);



    q << 0, 0, 0, 0, 0, 0, 0;
    dq << 0, 0, 0, 0, 0, 0, 0;

    Eigen::VectorXd x(3);

    kim.Os[5](q, x);

    std::cout << x << std::endl;


    kim2.Os[5](q, x);

    std::cout << x << std::endl;
}