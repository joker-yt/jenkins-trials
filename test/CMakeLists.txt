project(jenkins-test-test)

cmake_minimum_required(VERSION 3.2.2)

set(jenkins-test-test-VERSION_MAJOR 1)
set(jenkins-test-test-VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

# refenece pkg-config --libs --cflags
#find_package(PkgConfig)
#pkg_check_modules(LIBI18N REQUIRED icu-i18n)
include_directories(${PROJECT_SOURCE_DIR}/../src)
include_directories(${PROJECT_SOURCE_DIR}/)
link_directories(/usr/local/lib)

add_executable(a.out ${PROJECT_SOURCE_DIR}/main.cpp ${PROJECT_SOURCE_DIR}/test_CTestBase.cpp ${PROJECT_SOURCE_DIR}/test_CTestDerive.cpp)
target_link_libraries(a.out gmock gmock_main gtest gtest_main pthread)
