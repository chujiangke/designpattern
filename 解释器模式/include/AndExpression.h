#ifndef ANDEXPRESSION_H
#define ANDEXPRESSION_H
class AndExpression:public Expression
{
 private:
  Expression* expr1;
  Expression* expr2;
 public:
  AndExpression(Expression *expr1, Expression *expr2) { 
      this->expr1 = expr1;
      this->expr2 = expr2;
   }
  virtual bool interpret(string context)
  {
    return expr1->interpret(context) && expr2->interpret(context);
  }
  
};

#endif
