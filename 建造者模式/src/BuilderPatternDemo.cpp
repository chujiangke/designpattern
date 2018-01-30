/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderPatternDemo.cpp
 * Author: leixiao
 *
 * Created on January 31, 2018, 12:06 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "mealbuilder.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    MealBuilder *mealBuilder = new MealBuilder();
    Meal *vegMeal = mealBuilder->prepareVegMeal();
    vegMeal->showItem();
    cout<< "cost:"<<vegMeal->getCost()<<endl;
    cout<<"======================"<<endl;
    Meal *nonVegMeal = mealBuilder->prepareNonVegMeal();
    nonVegMeal->showItem();
    cout<<"cost:"<<nonVegMeal->getCost()<<endl;
    
    return 0;
}

