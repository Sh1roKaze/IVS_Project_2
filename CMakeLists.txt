project(calc420)
cmake_minimum_required(VERSION 2.6)

add_executable(calc420 lib_math.c tests_math.c main.c)
