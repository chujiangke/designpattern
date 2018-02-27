#include <iostream>
#include <string>
#include "State.h"
#include "StartState.h"
#include "StopState.h"
using namespace std;
int main()
{
  Context* context = Context();
  State* startState = new StartState();
  startState->doAction(context);
  cout<<context->getState()->getState();

  State* stopState = new StopState();
  stopState->doAction(stopState);
  cout<<stopState->getState()->getState();
  return 0;
}
