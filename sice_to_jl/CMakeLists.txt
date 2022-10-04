cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-Wall -pedantic -Wextra")

file(GLOB SRC_ ./src/*.c)
message(${SRC_})
add_executable(
    sice_kinematics sice_kinematics.c
    ${SRC_}
)
target_compile_options(sice_kinematics PUBLIC -shared -fPIC -O2 -Wall)