#include <iostream>
#include <string>
#include "CareTaker.h"
#include "Originator.h"
int main()
{
       Originator originator;
      CareTaker careTaker;
      originator.setState("State #1");
      originator.setState("State #2");
      careTaker.add(originator.saveStateToMemento());
      originator.setState("State #3");
      careTaker.add(originator.saveStateToMemento());
      originator.setState("State #4");

      cout<<"Current State: " << originator.getState() << endl;
      originator.getStateFromMemento(careTaker.get(0));
      cout<<"Current State: " << originator.getState() << endl;
      return 0;
}
