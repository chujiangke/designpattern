/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include "InterfaceDefineAndDraw.h"
using namespace std;
class Rectangle:public Shape
{
    public:
        void draw()
        {
            cout << "Inside Rectangle::draw() method."<<endl;
            return ;
        }
    private:
        
    
};

class Square:public Shape
{
public :
    void draw()
    {
        cout << "Inside Square::draw() method."<<endl;
        return ;
    }
};

class Circle:public Shape
{
public :
    void draw()
    {
        cout << "Inside Circle::draw() method."<<endl;
        return ;
    }
};

class ShapeFactory
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
};

int main()
{
    ShapeFactory *shapeFactory = new ShapeFactory();
    Shape *shapeRectangle = shapeFactory->getShape("Rectangle");
    shapeRectangle->draw();
    Shape *shapeSquare = shapeFactory->getShape("Square");
    shapeSquare->draw();
    Shape *shapeCircle = shapeFactory->getShape("Circle");
    shapeCircle->draw();
    return 0;
}
