#ifndef STARTSTATE_H
#define STARTSTATE_H
#include <iostream>
#include <string>
#include "State.h"
using namespace std;
class Context;
class StartState:public State
{
 public:
  void doAction(Context* context)
  {
    cout<<"Player is in start state"<<endl;
    context->setState(this);
  }
  string getState()
  {
    return string("start state");
  }
};
#endif
