#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>
using namespace std;
class Order
{
 public:
  virtual void  execute()
  {
    cout<<"Order execute"<<endl;
  }
};
#endif
