#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include "drawapi.h"
using namespace std;
class Shape 
{
 public:
  Shape(DrawAPI *drawApi)
  {
    this->drawAPI = drawApi;
  }
  virtual void draw() = 0;
  DrawAPI *drawAPI;
};
#endif
