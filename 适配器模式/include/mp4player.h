#ifndef MP4PLAYER_H
#define MP4PLAYER_H
#include<iostream>
#include<string>
#include "advancedmediaplayer.h"
class Mp4Player:public AdvancedMediaPlayer
{
 public:
  void playVlc(string fileName)
  {
    return ;
  }
  void playMp4(string fileName)
  {
    cout<<"playMp4，filename:"<<fileName<<endl;
    return ;
  }
};
#endif
