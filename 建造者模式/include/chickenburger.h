/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   chickenburger.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:38 PM
 */

#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include <string>
#include "burger.h"
using namespace std;

class ChickenBurger:public Burger
{
public:
    float price() 
    {
      return 50.5;
    }
    string name()
    {
        return string("ChickenBurger");
    }
};

#endif /* CHICKENBURGER_H */

