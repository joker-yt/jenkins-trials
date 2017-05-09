#ifndef __CTESTDERIVE_H__
#define __CTESTDERIVE_H__

#include <iostream>
#include "CTestBase.h"

class CTestDerive : public CTestBase {
private:
public:
  CTestDerive(){};
  CTestDerive(const CTestDerive &src) {
    std::cout << "CTestDerive::"
              << "(copy constructor)" << std::endl;
  }
  virtual ~CTestDerive(){};
  CTestDerive &operator=(const CTestDerive &src) {
    std::cout << "CTestDerive::"
              << "(assignment)" << std::endl;
    return *this;
  }

  virtual void v_method() {
    std::cout << "CTestDerive::" << __FUNCTION__ << std::endl;
    l_method();
  };
};

#endif /* end of include guard: __CTESTDERIVE_H__ */
