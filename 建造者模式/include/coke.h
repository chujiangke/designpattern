/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coke.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:42 PM
 */

#ifndef COKE_H
#define COKE_H
#include <string>
#include "colddrink.h"
using namespace std;

class Coke:public ColdDrink
{
public:
    float price() 
    {
      return 35.0;
    }
    string name()
    {
        return string("coke");
    }
};

#endif /* COKE_H */

