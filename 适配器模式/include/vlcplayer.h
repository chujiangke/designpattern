#ifndef VLCPLAYER_H
#define VLCPLAYER_H
#include <iostream>
#include <string>
#include "advancedmediaplayer.h"
class VlcPlayer:public AdvancedMediaPlayer
{
 public:
   void playVlc(string fileName)
   {
     cout<<"play vlc fileName:"<<fileName<<endl;
   }
   void playMp4(string fileName)
   {
     return ;
   }
};
#endif
