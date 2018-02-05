#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
#include "drawapi.h"
#include "shape.h"
using namespace std;
class Circle :public Shape
{
 public:
 Circle(int x, int y, int radius, DrawAPI * drawAPI):Shape(drawAPI)
  {
    this->x = x;
    this->y = y;
    this->radius = radius;
  }
  virtual void draw()
  {
    drawAPI->drawCircle(x, y, radius);
  }

 private:
  int x;
  int y;
  int radius;
 
};
#endif
