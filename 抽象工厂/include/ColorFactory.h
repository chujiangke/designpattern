#ifndef COLOERFACTORY_H
#define COLOERFACTORY_H 

#include "InterfaceDefineAndDrawFill.h"
#include "AbstractFactory.h"

class ColorFactory :public AbstractFactory
{
public:
    Color* getColor(string type)
    {
        if(type == "Red")
        {
            return new Red();
        }
        else if(type == "Green")
        {
            return new Green();
        }
        else if(type == "Blue")
        {
            return new Blue();
        }
        return NULL;
    }

    Shape* getShape(string type)
    {
    	return NULL;
    }
};

#endif