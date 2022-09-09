cmake_minimum_required(VERSION 3.00)
project(workoutTracker)

set(CMAKE_CXX_STANDARD 14)

add_executable(
    workoutTracker
    src/main.cpp
    src/excercise.cpp
    src/excercise.h
    src/wt.h
)
