cmake_minimum_required(VERSION 3.13)
project(solution)
set(CMAKE_CXX_STANDARD 17)


file(GLOB BAXTER_ ../src/*.cpp)
message(${BAXTER_})


add_executable(
    main main.cpp
    ${BAXTER_}
)
target_compile_options(main PUBLIC -O2 -Wall)