#include "gtest/gtest.h"
#include "test_CTestFixture.h"
#include "CTestDerive.h"

TEST_F(test_CTestFixture, test1_derive)
{
    testing::internal::CaptureStdout();

    CTestDerive derive;
    derive.v_method();
    output_ = testing::internal::GetCapturedStdout();

    // "\n" is important as correct result!
    string expected_output{"CTestDerive::v_method\nCTestBase::l_method\n"};

    EXPECT_EQ(output_, expected_output)
        << "Expected output: " << expected_output
        << "\nActual output: " << output_;
}

TEST_F(test_CTestFixture, test2_derive)
{
    testing::internal::CaptureStdout();

    CTestDerive derive;
    derive.l_method();
    output_ = testing::internal::GetCapturedStdout();

    // "\n" is important as correct result!
    string expected_output{"CTestBase::l_method\n"};

    EXPECT_EQ(output_, expected_output)
        << "Expected output: " << expected_output
        << "\nActual output: " << output_;
}