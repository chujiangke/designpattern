#ifndef CONCRETEOBSERVER2_H
#define CONCRETEOBSERVER2_H
#include <iostream>
#include <string>
#include "Observer.h"
using namespace std;

class ConcreteObserver2:public Observer
{
 public:
 ConcreteObserver2(Subject* pSubject):m_pSubject(pSubject)
  {
  }
  void update(int value)
  {
    cout<<"ConcreteObserver2 get the update.New state:"<<value<<endl;
  }
 private:
  Subject *m_pSubject;
};
#endif
