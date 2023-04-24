
cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)

set (TARGET jenkins-test-gtest)
add_executable(${TARGET})
target_sources(${TARGET} PRIVATE test_CTestBase.cpp test_CTestDerive.cpp)
target_link_libraries(${TARGET} GTest::GTest GTest::Main)
target_include_directories(${TARGET} PRIVATE ${CMAKE_SOURCE_DIR}/src)

gtest_add_tests(TARGET ${TARGET})
