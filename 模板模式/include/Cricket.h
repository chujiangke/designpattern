#ifndef CRICKET_H
#define CRICKET_H
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;
class Cricket:public Game
{
 public:
  void endPlay()
  {
    cout<<"Cricket Game Initialized! End playing."<<endl;
  }
  void initialize()
  {
    cout<<"Cricket Game Initialized! Start playing."<<endl;
  }
  void startPlay()
  {
    cout<<"Circket game startPlay! Enjoy the game1."<<endl;
  }
};
#endif
