#include <iostream>
#include <string>
#include "Game.h"
#include "Cricket.h"
#include "Football.h"
using namespace std;
int main()
{
  Game *game = new Cricket();
  game->play();
  delete dynamic_cast<Cricket*>(game);
  
  game = new Football();
  game->play();
  delete dynamic_cast<Football*>(game);
  
  return 0;
}
