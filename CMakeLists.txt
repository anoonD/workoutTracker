cmake_minimum_required(VERSION 3.00)
project(workoutTracker)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

find_package (SQLite3)
include_directories(${SQLite3_INCLUDE_DIRS})

add_executable(
    workoutTracker
    src/main.cpp
    src/exercise.cpp
    src/exercise.h
    src/wt.h
)
target_include_directories(workoutTracker PRIVATE include)
target_link_libraries (workoutTracker ${SQLite3_LIBRARIES})