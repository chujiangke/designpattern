#ifndef CONTEXT_H
#define CONTEXT_H
#include <iostream>
#include <string>
#include "State.h"
using namespace std;
class State;
class Context
{
 public:
  Context()
    {
      state = NULL;
    }
  void setState(State *state)
    {
      this->state = state;
    }
  State* getState()
  {
    return state;
  }
 private:
  State* state;
};
#endif
