#include<iostream>
#include<string>
#include "Expression.h"
#include "TerminalExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"
using namespace std;

//规则：Robert 和 John 是男性
static Expression* getMaleExpression()
{
      Expression *robert = new TerminalExpression("Robert");
      Expression *john = new TerminalExpression("John");
      return new OrExpression(robert, john);
}

//规则：Julie 是一个已婚的女性
static Expression* getMarriedWomanExpression()
{
      Expression *julie = new TerminalExpression("Julie");
      Expression *married = new TerminalExpression("Married");
      return new AndExpression(julie, married);        
}

//我想这个模式叫 组合规则比较靠谱，从下到上的收集规则，然后判断规则。
int main()
{
      Expression *isMale = getMaleExpression();
      Expression *isMarriedWoman = getMarriedWomanExpression();
      if(isMale->interpret("John"))
	{
	  cout<<"John isMale"<<endl;
	}
      return 0;
}
