#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <iostream>
#include <string>
using namespace std;
class Expression
{
 public:
  virtual bool interpret(string context) = 0;
};
#endif
