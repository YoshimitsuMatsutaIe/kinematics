cmake_minimum_required(VERSION 3.13)
project(sice_kinematics)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-Wall" "-O2")


add_library(mine SHARED sice_kinematics.c)

file(GLOB SRC_ ./src/*.c)
message(${SRC_})
add_executable(
    sice_kinematics sice_kinematics.c
    ${SRC_}
)

target_link_libraries(sice_kinematics m)