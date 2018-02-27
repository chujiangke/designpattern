#ifndef CONCRETEOBSERVER1_H
#define CONCRETEOBSERVER1_H
#include <iostream>
#include <string>
#include "Observer.h"
using namespace std;

class ConcreteObserver1:public Observer
{
 public:
 ConcreteObserver1(Subject* pSubject):m_pSubject(pSubject)
  {
  }
  void update(int value)
  {
    cout<<"ConcreteObserver1 get the update.New state:"<<value<<endl;
  }
 private:
  Subject *m_pSubject;
};
#endif
