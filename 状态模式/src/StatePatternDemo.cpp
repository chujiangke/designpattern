#include <iostream>
#include <string>
#include "State.h"
#include "StartState.h"
#include "StopState.h"
using namespace std;
int main()
{
  Context* context = new Context();
  State* startState = new StartState();
  startState->doAction(context);
  cout<<dynamic_cast<StartState*>(context->getState())->getState();
  State* stopState = new StopState();
  stopState->doAction(context);
  cout<<dynamic_cast<StopState*>(context->getState())->getState();
  
  return 0;
}
