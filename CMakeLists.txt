project(jenkins-test)
set(TARGET_NAME jtest)

cmake_minimum_required(VERSION 3.2.2)

set(jenkins-test-VERSION_MAJOR 1)
set(jenkins-test-VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

# refenece pkg-config --libs --cflags
#find_package(PkgConfig)
#pkg_check_modules(LIBI18N REQUIRED icu-i18n)
#include_directories(${LIBI18N_INCLUDE_DIRS})
#link_directories(${LIBI18N_LIBRARY_DIRS})

set(CMAKE_CXX_FLAGS "-O2 -Wall -fprofile-arcs -ftest-coverage")
add_definitions(-coverage)
add_executable(${TARGET_NAME} ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(${TARGET_NAME} gcov)
