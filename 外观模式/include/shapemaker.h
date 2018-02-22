#ifndef SHAPE_MAKER_H
#define SHAPE_MAKER_H
#include <iostream>
#include <string>
#include "shape.h"
#include "square.h"
#include "circle.h"
using namespace std;

class ShapeMaker
{
 private:
  Square square;
  Circle circle;
 public:
  ShapeMaker()
  {

  }
  void drawSquare()
  {
    square.draw();
  }
  void drawCircle()
  {
    circle.draw();
  }
};

#endif