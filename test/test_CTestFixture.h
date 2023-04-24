#ifndef __TEST_CTEST_FIXTURE_H__
#define __TEST_CTEST_FIXTURE_H__

#include <iostream>
#include <string>
#include "CTestBase.h"
#include "CTestDerive.h"

using namespace std;

class test_CTestFixture : public testing::Test
{
protected:
    virtual void SetUp()
    {
        cout << "starting Setup..." << endl;
    }
    virtual void TearDown()
    {
        cerr << "starting TearDown..." << endl;
    }
    string output_;
};

#endif /*__TEST_CTEST_FIXTURE_H__*/