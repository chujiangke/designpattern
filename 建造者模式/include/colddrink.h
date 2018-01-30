/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   colddrink.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:25 PM
 */

#ifndef COLDDRINK_H
#define COLDDRINK_H

#include "bottle.h"


#ifdef __cplusplus
extern "C" {
#endif

class ColdDrink :public Item
{
public:
    virtual Packing* packing()
    {
        return new Bottle();
    }
    virtual float price() = 0;
};


#ifdef __cplusplus
}
#endif

#endif /* COLDDRINK_H */

