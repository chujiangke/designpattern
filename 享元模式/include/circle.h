#ifndef  CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

class Circle : public Shape
{
 private:
  string color;
  int x;
  int y;
  int radius;
 public:
  Circle(string color)
    {
      this->color = color;
    }
  void setX(int x)
  {
    this->x = x;
  }
  void setY(int y)
  {
    this->y = y;
  }
  void setRadius(int radius)
  {
    this->radius = radius;
  }
  virtual void draw()
  {
    cout << "Circle: Draw() [Color :"<<color<<"x:"<<x<<"y:"<<y<<"radius:"<<radius<<endl;
  }
  
};
#endif
