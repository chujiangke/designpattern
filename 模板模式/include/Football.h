#ifndef FOOTBALL_H
#define FOOTBALL_H
#include <iostream>
#include <string>
#include "Game.h"
using namespace std;
class Football:public Game
{
 public:
  void endPlay()
  {
    cout<<"Footboll Game Initialized! End playing."<<endl;
  }
  void initialize()
  {
    cout<<"Footboll Game Initialized! Start playing."<<endl;
  }
  void startPlay()
  {
    cout<<"Footboll game startPlay! Enjoy the game1."<<endl;
  }
};
#endif
