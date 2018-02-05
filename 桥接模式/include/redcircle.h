#ifndef DRAWAPI_H
#define DRAWAPI_H
#include <iostream>
#include <string>
#include "drawapi.h"
class RedCircle : pubic DrawAPI
{
 public:
  void drawCircle(int radius, int x, int y)
  {
    cout << "Drawing Circle RedCircle:red,radius:"<<radius<<"x:"<<x<<"y:"<<y<<endl;
  }
}

#endif
