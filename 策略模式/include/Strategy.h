#ifndef STRATEGY_H
#define STRATEGY_H
#include<iostream>
#include<string>
using namespace std;
class Strategy
{
 public:
  virtual int doOperation(int num1, int num2) = 0;
};
#endif
