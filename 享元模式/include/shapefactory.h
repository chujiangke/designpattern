#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include <iostream>
#include <string>
#include <map>
#include "shape.h"
#include "circle.h"

using namespace std;
class ShapeFactory
{
 private:
  static map<string, Shape*>circleMap;
 public:
  static Shape* getCircle(string color)
  {
    map<string, Shape*>::iterator iter;
    iter = circleMap.find(color);
    if(iter == circleMap.end())
      {
	Circle *circle = new Circle(color);
	circleMap.insert(make_pair(color, circle));
	return circle;
      }
    else
      {
	Shape* shape = (Shape*)( iter->second );
	return shape;
      }
  }
};

#endif
