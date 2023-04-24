# jenkins-trials
## reference
https://hub.docker.com/_/jenkins/

## Environment
- Ubuntu 20.04
- cmake 3.22
- googletest 1.11.0-3
- libgtest-dev 1.11.0-3
- g++-11.3.0

## Usage
1. cmake -DJENKINS-TEST=ON -S . -B build
1. cmake --build build
1. cd build/test
1. ctest

## todo
- link, include file check
- memory
- excuting time
- C0, C1 -> gcovr + Cobertura
- ■doxygen
- gmock, gtest
- sonarqube
- redmine + hubot -> ticket log
http://qiita.com/tenten0213/items/91b9598cf1edf930df0c
