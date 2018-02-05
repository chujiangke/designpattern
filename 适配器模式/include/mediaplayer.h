#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H
#include <iostream>
#include <string>
using namespace std;
class MediaPlayer
{
 public:
  virtual void play(string audiotype, string filename) = 0;
};

#endif
