cmake_minimum_required(VERSION 3.28)
project(learningC C)

set(CMAKE_C_STANDARD 11)

add_executable(learningC main.c)
add_executable(HELLO hello.c)
add_executable(WHILE while.c)
add_executable(Counter counterControlledIteration.c)
add_executable(Sentinel sentinelControlledIteration.c)
