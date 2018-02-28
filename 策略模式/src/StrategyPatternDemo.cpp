#include <iostream>
#include <string>
#include "Strategy.h"
#include "OperationAdd.h"
#include "OperationSubstract.h"
#include "OperationMultiply.h"
#include "Context.h"
using namespace std;
int main()
{
  Context *context = new Context(new OperationAdd());        
  cout<<"10 + 5 = " << context->executeStrategy(10, 5)<<endl;
  delete(context);
  context = new Context(new OperationSubstract());
  cout<<"10 - 5 = " << context->executeStrategy(10, 5)<<endl;
  return 0;
}
