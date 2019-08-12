/** \file CTestDerive.h
 * This class is derived from CTestBase.
 * This class is derived from CTestBase
 */
#ifndef __CTESTDERIVE_H__
#define __CTESTDERIVE_H__

#include "CTestBase.h"
#include <iostream>
/*! \class CTestDerive CTestDerive.h "CTestDerive.h"
 *  \brief This is for derived class test.
 *
 * details of CTestDerive.
 */
class CTestDerive : public CTestBase {
private:
public:
  /*! \fn CTestDerive
   * @brief CTestDerive constructor
   * @detail CTestDerive constructor
   */
  CTestDerive(){};
  /*! \fn CTestDerive(const CTestDerive &src)
   * @brief CTestDerive constructor (with argument)
   * @detail CTestDerive constructor (with argument)
   */
  CTestDerive(const CTestDerive &src) {
    std::cout << "CTestDerive::"
              << "(copy constructor)" << std::endl;
  }
  /*! \fn ~CTestDerive
   * @brief CTestDerive destructor
   * @detail CTestDerive destructor
   */
  virtual ~CTestDerive(){};
  CTestDerive &operator=(const CTestDerive &src) {
    std::cout << "CTestDerive::"
              << "(assignment)" << std::endl;
    return *this;
  }
  /*! \fn v_method
   * @brief virtual function
   * @detail virtual function.
   */
  virtual void v_method() {
    std::cout << "CTestDerive::" << __FUNCTION__ << std::endl;
    l_method();
  };
};

#endif /* end of include guard: __CTESTDERIVE_H__ */
