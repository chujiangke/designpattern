#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
using namespace std;
class Game
{
 public:
  virtual string initialize() = 0;
  virtual string startPlay() = 0;
  virtual string endPlay() = 0;
  void play()
  {
    initialize();
    startPlay();
    endPlay();
  }
};
#endif
