#include <iostream>
#include <string>
#include "AbstractFactory.h"
#include "FactoryProducer.h"

int main()
{
	AbstractFactory *shapeFactory = FactoryProducer::getFactory("SHAPE");
	Shape *shapeRectangle= shapeFactory->getShape("Rectangle");
	shapeRectangle->draw();
	Shape *shapeSquare = shapeFactory->getShape("Square");
	shapeSquare->draw();
	
	AbstractFactory *colorFactory = FactoryProducer::getFactory("COLOR");
	Color *colorGreen = colorFactory->getColor("Green");
	colorGreen->fill();
	Color *colorRed = colorFactory->getColor("Red");
	colorRed->fill();
	
	return 0;
}