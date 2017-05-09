#include <iostream>
#include "CTestBase.h"
#include "CTestDerive.h"

int main(int argc, char const *argv[]) {
  CTestBase *p = new CTestDerive();
  p->v_method();
  return 0;
}
