#include "gtest/gtest.h"
#include "test_CTestFixture.h"
#include "CTestDerive.h"

TEST_F(test_CTestFixture, test1_base)
{
    testing::internal::CaptureStdout();

    CTestBase base;
    base.v_method();
    output_ = testing::internal::GetCapturedStdout();

    // "\n" is important as correct result!
    string expected_output{"CTestBase::v_method\n"};

    EXPECT_EQ(output_, expected_output)
        << "Expected output: " << expected_output
        << "\nActual output: " << output_;
}

TEST_F(test_CTestFixture, test2_base)
{
    testing::internal::CaptureStdout();

    CTestBase base;
    base.l_method();
    output_ = testing::internal::GetCapturedStdout();

    // "\n" is important as correct result!
    string expected_output{"CTestBase::l_method\n"};

    EXPECT_EQ(output_, expected_output)
        << "Expected output: " << expected_output
        << "\nActual output: " << output_;
}