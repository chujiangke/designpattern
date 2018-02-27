#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <string>
#include <list>
#include "Observer.h"
using namespace std;
class Subject
{
 public:
  void attach(Observer *osberver)
  {
    observers.push_back(osberver);
  }
  void deatch(Observer * osberver)
  {
    observers.remove(osberver);
  }
  void notifyAllObservers()
  {
    list<Observer*>::iterator it;
    for(it = observers.begin(); it!= observers.end(); it++)
      {
	(*it)->update(state);
      }
  }
  int getState()
  {
    return state;
  }
  void setState(const int state)
  {
    this->state = state;
  }
 private:
  int state;
  list<Observer*> observers;
};

#endif
