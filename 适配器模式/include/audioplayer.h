#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include <iostream>
#include <string>
#include "mediaplayer.h"
#include "mp4player.h"
#include "vlcplayer.h"
#include "mediaadapter.h"

using namespace std;
class AudioPlayer:public MediaPlayer
{
private:
  MediaAdapter *mediaAdapter;
public:
  virtual void play(string autoType, string filename)
  {
    if(autoType == "mp3")
      {
	cout<<"Play mp3, filename:"<<filename<<endl;
      }
    else if(autoType == "vlc")
      {
	mediaAdapter = new MediaAdapter("vlc");
	mediaAdapter->play("vlc", filename);
      }
    else if(autoType == "mp4")
      {
	mediaAdapter = new MediaAdapter("mp4");
	mediaAdapter->play("mp4", filename);
      }
  }
};

#endif
