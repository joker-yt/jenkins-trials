#ifndef __CTESTBASE_H__
#define __CTESTBASE_H__

#include <iostream>

/*! \class CTestBase CTestBase.h "CTestBase.h"
 *  \brief This is a brief comments of test class.
 *
 * Some details about the Test class
 */
class CTestBase {
private:
public:
  /*! \fn CTestBase
   * @brief CTestBase constructor
   * @detail CTestBase constructor
   */
  CTestBase(){};
  /*! \fn ~CTestBase
   * @brief CTestBase destructor
   * @detail CTestBase destructor
   */
  virtual ~CTestBase(){};
  /*! \fn v_method
   * @brief virtual function
   * @detail virtual function. if defined in derived class, this function is
   * overloaded.
   */
  virtual void v_method() {
    std::cout << "CTestBase::" << __FUNCTION__ << std::endl;
  };
  /*! \fn l_method
   * @brief local function
   * @detail local function
   */
  void l_method() { std::cout << "CTestBase::" << __FUNCTION__ << std::endl; }
};

#endif /* end of include guard: __CTESTBASE_H__ */
