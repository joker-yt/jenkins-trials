#include "mcheck.h"
#include "unistd.h"
#include "CTestBase.h"
#include "CTestDerive.h"

int main(int argc, char *argv[]) {
  CTestBase *p;
  mtrace();
  // for (int k = 0; k < 1000; ++k)
  for (int j = 0; j < 1000; ++j)
    for (int i = 0; i < 1000; ++i) {
      p = new CTestBase();
      //   usleep(100 * 1000);
      //   std::cout << i << "\n";
    }
  muntrace();

  return 0;
}
