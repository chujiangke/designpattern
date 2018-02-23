#ifndef PROXYIMAGE_H
#define PROXYIMAGE_H
#include <iostream>
#include <string>
#include "image.h"
#include "reallmage.h"

class proxyimage : public Image
{
 private:
  string fileName;
  RealImage *realImage;
 public:
  proxyimage(string fileName)
    {
      this->fileName = fileName;
      realImage = NULL;
    }
  virtual void display()
  {
    if(realImage == NULL)
      {
	realImage = new RealImage(fileName);
      }
    realImage->display();
   
  }
};

#endif
