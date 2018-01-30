/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mealbuilder.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 11:57 PM
 */

#ifndef MEALBUILDER_H
#define MEALBUILDER_H
#include"meal.h"
#include "vegburger.h"
#include "colddrink.h"
#include "chickenburger.h"
#include "pepsi.h"
#include "coke.h"
class MealBuilder
{
public:
    Meal* prepareVegMeal()
    {
        Meal* meal = new Meal();
        meal->addItem(new VegBurger());
        meal->addItem(new Coke());
        return meal;
    }
    Meal* prepareNonVegMeal()
    {
        Meal* meal = new Meal();
        meal->addItem(new ChickenBurger());
        meal->addItem(new Pepsi());
        return meal;
    }
};

#endif /* MEALBUILDER_H */

