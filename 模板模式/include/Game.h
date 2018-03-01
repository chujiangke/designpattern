#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
using namespace std;
class Game
{
 public:
  virtual void initialize() = 0;
  virtual void startPlay() = 0;
  virtual void endPlay() = 0;
  void play()
  {
    initialize();
    startPlay();
    endPlay();
  }
};
#endif
