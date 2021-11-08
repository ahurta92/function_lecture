cmake_minimum_required(VERSION 3.20)
project(functions)

add_executable(functions1 functions1.cpp)
add_executable(functions2 functions2.cpp example.cpp)
add_executable(functions3 functions3.cpp example.cpp)
add_executable(functions4 functions4.cpp example.cpp)
add_executable(function_proto function_proto.cpp)



add_subdirectory(testing)