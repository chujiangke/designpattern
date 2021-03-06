#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include <iostream>
#include <string>
#include "Memento.h"

using namespace std;
class Originator
{
 private:
  string state;
 public:
  void setState(string state)
  {
    this->state = state;
  }
  string getState()
  {
    return state;
  }
  Memento* saveStateToMemento()
  {
    return new Memento(state);
  }
  void getStateFromMemento(Memento* memento)
  {
    if(memento != NULL)
      {
	 state = memento->getState();
      }
  }
};

#endif
