#include <iostream>
#include <string>
#include "Broker.h"
using namespace std;
int main()
{
  Stock stock;
  BuyStock buyStock(&stock);
  SellStock sellStock(&stock);

  Broker broker;
  broker.takeOrder(&buyStock);
  broker.takeOrder(&sellStock);
  broker.takeOrder(&buyStock);
  broker.takeOrder(&sellStock);
  broker.takeOrder(&buyStock);
  broker.takeOrder(&sellStock);

  broker.placeOrders();
  
  return 0;
}
