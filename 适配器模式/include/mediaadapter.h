#ifndef MEDIAADAPTER_H
#define  MEDIAADAPTER_H

#include <iostream>
#include <string>
#include "advancedmediaplayer.h"
#include "mediaplayer.h"
using namespace std;
class MediaAdapter : public MediaPlayer
{
private:
  AdvancedMediaPlayer *advancedMediaPlayer;
public:
  MediaAdapter(string autoType)
  {
    if(autoType == "vlc")
      {
	advancedMediaPlayer = new VlcPlayer();
      }
    else if( autoType == "mp4")
      {
	advancedMediaPlayer = new Mp4Player();
      }
  }
  void play(string autoType, string filename)
  {
    if(autoType == "vlc")
      {
	advancedMediaPlayer->playVlc(filename);
      }
    else if(autoType == "mp4")
      {
	advancedMediaPlayer->playMp4(filename);
      }
  }
};

#endif
