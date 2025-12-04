cmake_minimum_required(VERSION 3.14)
project(GoogleTestExample)

set(CMAKE_CXX_STANDARD 14)

# ---------------------------------------------------------
# Part A: Download Google Test from the Internet
# (This fixes the "Could NOT find GTest" error)
# ---------------------------------------------------------
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# This compiles Google Test for you
FetchContent_MakeAvailable(googletest)

# ---------------------------------------------------------
# Part B: Your Application
# ---------------------------------------------------------
# Create the executable from your main file
add_executable(run_tests main.cpp)

# Link your program to the Google Test library
# If you used the code I gave you with main(), use GTest::gtest
target_link_libraries(run_tests GTest::gtest)

# Enable Testing
enable_testing()
add_test(NAME MyMathTest COMMAND run_tests)
