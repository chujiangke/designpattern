#ifndef OREXPRESSION_H
#define OREXPRESSION_H
#include<iostream>
#include<string>
#include"Expression.h"
class OrExpression:public Expression
{
 private:
  Expression* expr1;
  Expression* expr2;
 public:
  OrExpression(Expression *expr1, Expression *expr2) { 
      this->expr1 = expr1;
      this->expr2 = expr2;
   }
  virtual bool interpret(string context)
  {
    return expr1->interpret(context) || expr2->interpret(context);
  }
  
};

#endif
