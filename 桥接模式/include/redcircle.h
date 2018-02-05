#ifndef REDCIRCLE_H
#define REDCIRCLE_H
#include <iostream>
#include <string>
#include "drawapi.h"
class RedCircle : public DrawAPI
{
 public:
  void drawCircle(int radius, int x, int y)
  {
    cout << "Drawing Circle RedCircle:red,radius:"<<radius<<"x:"<<x<<"y:"<<y<<endl;
  }
};

#endif
