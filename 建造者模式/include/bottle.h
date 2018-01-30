/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bottle.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 9:57 PM
 */

#ifndef BOTTLE_H
#define BOTTLE_H

#include<iostream>
#include<string>
#include"wrapper.h"
class Bottle:public Wrapper
{
public:
    string pack()
    {
      return string("bottle");  
    }
};

#endif /* BOTTLE_H */

