#ifndef OPERATIONMULTIPLY_H
#define OPERATIONMULTIPLY_H
#include <iostream>
#include <string>
#include "Strategy.h"
using namespace std;
class OperationMultiple:public Strategy
{
 public:
  int doOperation(int num1, int num2)
  {
    return num1*num2;
  }
};
#endif
