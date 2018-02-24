#ifndef BUYSTOCK_H
#define BUYSTOCK_H

#include <iostream>
#include <string>
#include "Order.h"
#include "Stock.h"
using namespace std;
class BuyStock:public Order
{
 private:
  Stock *stock;
 public:
  BuyStock( Stock* stock)
    {
      this->stock = stock;
    }
  virtual void  execute()
  {
    cout<<"BuyStock execute"<<endl;
    stock->buy();
  }
};
#endif
