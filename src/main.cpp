/** \file main.cpp
 * A brief file description.
 * A more elaborated file description.
 */
#include "CTestBase.h"
#include "CTestDerive.h"
#include <iostream>

/*! \fn main
 * @brief main function
 * @detail main function
 */
int main(int argc, char const *argv[]) {
  CTestBase *p = new CTestDerive();
  p->v_method();
  return 0;
}
