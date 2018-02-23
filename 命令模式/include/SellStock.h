#ifndef SELLSTOCK_H
#define SELLSTOCK_H

#include <iostream>
#include <string>
#include "Order.h"
#include "Stock.h"
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
    stock->sell();
  }
};
#endif
