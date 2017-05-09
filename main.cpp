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

int main(int argc, char const *argv[]) {
  CTestBase *p = new CTestDerive();
  p->v_method();
  return 0;
}
