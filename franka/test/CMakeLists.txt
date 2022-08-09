cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)
file(GLOB FRANKA ../cpp_done_wow/src/*.cpp)
message(${FRANKA})
add_executable(
    main main.cpp
    ${FRANKA}
)
target_compile_options(main PUBLIC -O2 -Wall -fopenmp)