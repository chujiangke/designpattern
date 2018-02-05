#ifndef GREENCIRCLE_H
#define GREENCIRCLE_H
#include <string>
#include "drawapi.h"
class GreenCircle : pubic DrawAPI
{
 public:
  void drawCircle(int radius, int x, int y)
  {
    cout << "Drawing Circle GreenCircle:green,radius:"<<radius<<"x:"<<x<<"y:"<<y<<endl;
  }
};

#endif
