/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InterfaceDefineAndDraw.h
 * Author: leixiao
 *
 * Created on 2018年1月23日, 上午10:47
 */

#ifndef INTERFACEDEFINEANDDRAW_H
#define INTERFACEDEFINEANDDRAW_H


class Shape
{
public:
    virtual void draw()=0;
};

class Color
{
public:
	virtual void fill()=0;
};


class Rectangle:public Shape
{
public:
    void draw();
        
};

class Square:public Shape
{
public :
    void draw();
};

class Circle:public Shape
{
public :
    void draw();
};

class Red:public Color
{
public:
    void fill();
};

class Green:public Color
{
public:
    void fill();
};

class Blue:public Color
{
public:
    void fill();
};

#endif /* INTERFACEDEFINEANDDRAW_H */

