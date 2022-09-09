cmake_minimum_required(VERSION 3.00)
project(workoutTracker)
set(CMAKE_CXX_STANDARD 14)

find_package (SQLite3)
include_directories(${SQLite3_INCLUDE_DIRS})

add_executable(
    workoutTracker
    src/main.cpp
    src/excercise.cpp
    src/excercise.h
    src/wt.h
)
target_link_libraries (workoutTracker ${SQLite3_LIBRARIES})
