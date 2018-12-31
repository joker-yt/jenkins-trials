#include "CTestDerive.h"
#include "test_common.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
using namespace ::testing;

int CTestDerive_main(int argc, char *argv[]) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
