/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ShapeCache.h
 * Author: leixiao
 *
 * Created on January 31, 2018, 1:52 AM
 */

#ifndef SHAPECACHE_H
#define SHAPECACHE_H
#include <map>
#include <iostream>
#include <string>
#include "InterfaceDefineAndDraw.h"
#include "DefineAndDraw.h"

class ShapeCache
{
private:
    static map<string, Shape*> shapeMap;
public:
    static Shape* getShape(string shapeId)
    {
        map<string, Shape*>::iterator it = shapeMap.find(shapeId);
        if(it != shapeMap.end())
        {
            Shape* shape = it->second; 
            return shape->clone();  //这里做的创建原型
        }
        return NULL;   
    }
    static void loadCache()
    {
         Circle *circle = new Circle();
         circle->setId("1");
         shapeMap.insert(make_pair(circle->getId(), circle));
         
         Square *square = new Square();
         square->setId("2");
         shapeMap.insert(make_pair(square->getId(), square));
         
         Rectangle* rectangle = new Rectangle();
         rectangle->setId("3");
         shapeMap.insert(make_pair(rectangle->getId(), rectangle));
         
    }
};


#endif /* SHAPECACHE_H */

