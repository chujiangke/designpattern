#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H
#include <iostream>
#include <string>
#include "Observer.h"
using namespace std;

class ConcreteObserver:public Observer
{
 public:
 ConcreteObserver(Subject* pSubject):m_pSubject(pSubject)
  {
  }
  void update(int value)
  {
    cout<<"ConcreteObserver get the update.New state:"<<value<<endl;
  }
 private:
  Subject *m_pSubject;
};
#endif
