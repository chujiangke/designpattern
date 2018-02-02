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

#include <string>
#include <iostream>

#include "cloneable.h"
class Cloneable;
class Shape : public Cloneable
{
private:
    string id;
protected:
    string type;
    
public:
    virtual void draw()=0;
    string getType()
    {
      return type;
    }
    void setType(string type)
    {
        this->type = type;
    }
    string getId()
    {
        return type;
    }
    void setId(string id)
    {
        this->id = id;
    }
};

#endif /* INTERFACEDEFINEANDDRAW_H */

