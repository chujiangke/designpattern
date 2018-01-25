#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include <string>
#include "InterfaceDefineAndDrawFill.h"
using namespace std;
class AbstractFactory
{
public:
	virtual Shape* getShape(string type)
	{
		return NULL;
	}
	virtual Color* getColor(string type)
	{
		return NULL;
	}
};

#endif