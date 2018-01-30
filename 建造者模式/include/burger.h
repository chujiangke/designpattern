/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   burger.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 10:19 PM
 */

#ifndef BURGER_H
#define BURGER_H
#include "item.h"
#include "wrapper.h"
class Burger : public Item
{
public:
    Packing* packing() 
    {
      return new Wrapper();
    }
    virtual float price() = 0;
};

#endif /* BURGER_H */

