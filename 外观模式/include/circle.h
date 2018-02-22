#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;
class Circle:public Shape
{
 public:
  virtual void draw()
  {
    cout<<"Circle::draw"<<endl;
  }
};
#endif
