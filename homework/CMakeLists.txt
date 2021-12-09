cmake_minimum_required(VERSION 3.20)
project(functions)

set(CMAKE_CXX_STANDARD 14)

add_executable(Function_Testing tests.cpp problems.cc)
add_executable(Function_Solutions tests.cpp solutions.cc)

add_executable(problem1 problem1.cc problems.cc)
add_executable(problem2 problem2.cc problems.cc)
add_executable(problem3 problem3.cc problems.cc)
add_executable(problem4 problem4.cc problems.cc)
add_executable(problem5 problem5.cc problems.cc)
add_executable(problem6 problem6.cc problems.cc)
add_executable(problem7 problem7.cc problems.cc)
