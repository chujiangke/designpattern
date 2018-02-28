#ifndef CONTEXT_H
#define CONTEXT_H
#include<iostream>
#include<string>
#include"Strategy.h"
using namespace std;

class Context
{
 private:
  Strategy* strategy;
 public:
  Context(Strategy *strategy)
    {
      this->strategy = strategy;
    }
  int executeStrategy(int num1, int num2)
  {
    return strategy->doOperation(num1, num2);
    
  }
};
#endif
