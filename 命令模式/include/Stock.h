#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <string>
using namespace std;
class Stock
{
 private:
  string name = "ABC";
  int quantity = 10;
 public:
  void buy()
  {
    cout<<"Stock [ Name: "<< name <<", Quantity: "<< quantity <<" ] bought"<<endl;
  }
  void sell()
  {
    cout<<"Stock [ Name: "<< name <<", Quantity: "<< quantity <<" ] bought"<<endl;
  }
};
#endif
