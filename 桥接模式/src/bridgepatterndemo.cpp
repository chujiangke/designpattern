#include <iostream>
#include <string>
#include "greencircle.h"
#include "redcircle.h"
#include "shape.h"
#include "circle.h"
using namespace std;
int main()
{
      Shape *redCircle = new Circle(100,100, 10, new RedCircle());
      Shape *greenCircle = new Circle(100,100, 10, new GreenCircle());
      redCircle->draw();
      greenCircle->draw();
}
