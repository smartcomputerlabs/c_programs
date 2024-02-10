cmake_minimum_required(VERSION 3.27)
project(c_programs C)

set(CMAKE_C_STANDARD 11)

add_executable(c_programs
        exec_demo.c
        sleep_demo.c)
