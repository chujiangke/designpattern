#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <string>
#include "Context.h"
class Context;
class State
{
 public:
  virtual void doAction(Context* context) = 0;
};
#endif
