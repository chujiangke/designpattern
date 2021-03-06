#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include <iostream>
#include <string>
#include "Expression.h"
using namespace std;
class TerminalExpression:public Expression
{
 private:
  string data;
 public:
  TerminalExpression(string data)
    {
      this->data = data;
    }
  virtual bool interpret(string context)
  {
    if(context.find(data) == string::npos)
      {
	return false;
      }
    else
      {
	return true;
      }
  }
};
#endif
