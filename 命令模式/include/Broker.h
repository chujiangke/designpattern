#ifndef BROKER_H
#define BROKER_H

#include <iostream>
#include <string>
#include <list>
#include "BuyStock.h"
#include "SellStock.h"
using namespace std;
class Broker
{
 private:
  list<Order*> listOrder;
 public:
  void takeOrder(Order* order)
  {
    listOrder.push_back(order);
  }
  void placeOrders()
  {
    list<Order*>::iterator it;
    for(it=listOrder.begin(); it!=listOrder.end();it++)
      {
	/* cout<<"for loop"<<endl; */
	(*it)->execute();
      }
  }
    
};

#endif
