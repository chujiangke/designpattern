/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   wrapper.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 9:43 PM
 */

#ifndef WRAPPER_H
#define WRAPPER_H

#include "packing.h"
#include <iostream>
#include <string>
using namespace std;

class Wrapper :public Packing
{
public:
    string pack()
    {
        return string("wrapper");
    }
};


#endif /* WRAPPER_H */

