#ifndef __CTESTBASE_H__
#define __CTESTBASE_H__

#include <iostream>

class CTestBase {
private:
public:
  CTestBase(){};
  virtual ~CTestBase(){};
  virtual void v_method() {
    std::cout << "CTestBase::" << __FUNCTION__ << std::endl;
  };
  void l_method() { std::cout << "CTestBase::" << __FUNCTION__ << std::endl; }
};

#endif /* end of include guard: __CTESTBASE_H__ */
