cmake_minimum_required(VERSION 3.10)
project(MyTestProject)

# 1. Enable Coverage Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

# 2. Standard Setup
set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 3. Create the executable (Only once!)
add_executable(run_tests main.cpp)

target_link_libraries(run_tests gtest gtest_main pthread)
