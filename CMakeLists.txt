project(jenkins-test)

cmake_minimum_required(VERSION 3.22)

set(jenkins-test-VERSION_MAJOR 1)
set(jenkins-test-VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(src)

if(JENKINS-TEST)
    add_subdirectory(test)
endif()