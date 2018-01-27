#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "InterfaceDefineAndDrawFill.h"
#include "AbstractFactory.h"

class ShapeFactory:public AbstractFactory
{
public:
    Shape* getShape(string type)
    {
        if(type == "Rectangle")
        {
            
            Shape *tmp = new Rectangle();
            return tmp;
        }
        else if(type == "Square")
        {
            Shape *tmp =  new Square();
            return tmp;
        }
        else if(type == "Circle")
        {
            Shape *tmp = new Circle();
            return tmp;
        }
        return NULL;
    }

    Color* getColoer(string type)
    {
    	return NULL;
    }
};

#endif