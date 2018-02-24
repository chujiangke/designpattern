#ifndef SELLSTOCK_H
#define SELLSTOCK_H

#include <iostream>
#include <string>
#include "Order.h"
#include "Stock.h"
using namespace std;
class SellStock:public Order
{
 private:
  Stock *stock;
 public:
  SellStock( Stock* stock)
    {
      this->stock = stock;
    }
  virtual void  execute()
  {
    cout<<"SellStock execute"<<endl;
    stock->sell();
  }
};
#endif
