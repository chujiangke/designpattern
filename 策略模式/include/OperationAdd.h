#ifndef OPERATIONADD_H
#define OPERATIONADD_H
#include<iostream>
#include<string>
#include"Strategy.h"
using namespace std;
class OperationAdd : public Strategy
{
 public:
  int doOperation(int num1, int num2)
  {
    return num1 + num2;
  }
};
#endif
