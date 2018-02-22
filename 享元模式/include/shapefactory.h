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
    map<string, Shape*>mymap;
 public:
    Shape* getCircle(string color)
  {
  
    map<string,Shape*>::iterator it;
    it = mymap.find(color);
    if (it == mymap.end())
       {
	 Circle * circle = new Circle(color);
	 mymap.insert(make_pair(color, circle));
	 return circle;
       }
    else
      {
	return it->second;
      }
     return NULL;
  }

};

#endif
