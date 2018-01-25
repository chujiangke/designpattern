#include <iostream>
#include <string>
#include "AbstractFactory.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"

class FactoryProducer
{
public:
	static AbstractFactory* getFactory(string type)
	{
		if(type == "SHAPE")
		{
			return new ShapeFactory();
		}
		else if( type == "COLOR")
		{
			return new ColorFactory();
		}
		else
		{
			return NULL;
		}
	}
};