// -*- C++ -*-
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cloneable.
 * Author: leixiao
 *
 * Created on January 31, 2018, 1:18 AM
 */

#ifndef CLONEABLE_
#define CLONEABLE_

#include <iostream>
#include <string>
#include "InterfaceDefineAndDraw.h"

using namespace std;

class Shape;
class Cloneable
{
public:
    virtual Shape* clone() 
    {
        return NULL;
    };
};


#endif /* CLONEABLE_ */

