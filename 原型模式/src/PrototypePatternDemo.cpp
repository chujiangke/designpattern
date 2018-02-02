/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrototypePatternDemo.cpp
 * Author: leixiao
 *
 * Created on January 31, 2018, 2:09 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "ShapeCache.h"
#include "InterfaceDefineAndDraw.h"
#include "DefineAndDraw.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ShapeCache::loadCache();
    Shape* clonedShape = ShapeCache::getShape("1");
    cout<<"shape:"<< clonedShape->getType()<<endl;
    return 0;
}

