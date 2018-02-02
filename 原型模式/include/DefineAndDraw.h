/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DefineAndDraw.h
 * Author: leixiao
 *
 * Created on January 31, 2018, 2:01 AM
 */

#ifndef DEFINEANDDRAW_H
#define DEFINEANDDRAW_H

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
        Rectangle()
        {
            type = "Rectangle";
        }
        Rectangle(Rectangle &rectangle)
        {
            setType(rectangle.getType());
            setId(rectangle.getId());
        }
        
        Shape* clone()
        {
            return new Rectangle(*this);
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
    Square()
    {
        type = "Square";
    }
    Square(Square & square)
    {
        setType(square.getType());
        setId(square.getId());
    }
    Shape* clone()
    {
        return new Square(*this);
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
    Circle()
    {
        type = "Circle";
    }
    Circle(Circle &circle)
    {
        setType(circle.getType());
        setId(circle.getId());
    }
    Shape* clone()
    {
        return new Circle(*this);
    }
    
};



#endif /* DEFINEANDDRAW_H */

