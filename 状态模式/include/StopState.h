#ifndef STOPSTATE_H
#define STOPSTATE_H
#include <iostream>
#include <string>
#include "State.h"
using namespace std;
class Context;
class StopState:public State
{
 public:
  void doAction(Context* context)
  {
    cout<<"Player is in stop state"<<endl;
    context->setState(this);
  }
  string getState()
  {
    return string("stop state");
  }
};
#endif
