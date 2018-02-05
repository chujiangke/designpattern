#include <iostream>
#include <string>
#include "greencircle.h"
#include "redcircle.h"
#include "shape.h"
#include "circle.h"
#include "drawapi.h"
using namespace std;
int main()
{
  DrawAPI * drawAPIRedCircle = new RedCircle();
  DrawAPI * drawAPIGreenCircle = new GreenCircle();
  Shape *redCircle = new Circle(100,100, 10, drawAPIRedCircle);
  Shape *greenCircle = new Circle(100,100, 10, drawAPIGreenCircle);
  redCircle->draw();
  greenCircle->draw();
}
