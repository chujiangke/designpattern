/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 3:35 PM
 */

#ifndef ITEM_H
#define ITEM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <iostream>
#include <string>
#include "packing.h"
using namespace std;
class Item
{
public:
    virtual string name() = 0;
    virtual Packing* packing() = 0;
    virtual float price() = 0;
};



#ifdef __cplusplus
}
#endif

#endif /* ITEM_H */

