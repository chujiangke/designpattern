/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pepsi.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:55 PM
 */

#ifndef PEPSI_H
#define PEPSI_H
#include <string>
#include "colddrink.h"
using namespace std;

class Pepsi:public ColdDrink
{
    public:
        float price() 
        {
            return 35.0;
        }
        string name()
        {
            return string("Pepsi");
        }
};

#endif /* PEPSI_H */

