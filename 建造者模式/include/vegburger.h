/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vegburger.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:34 PM
 */

#ifndef VEGBURGER_H
#define VEGBURGER_H
#include <iostream>
#include <string>

#include "burger.h"
class VegBurger : public Burger
{
public:
    float price() 
    {
      return 25.0f;
    }
    string name()
    {
        return string("Veg Burger");
    }
};


#endif /* VEGBURGER_H */

