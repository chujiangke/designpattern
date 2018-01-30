/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   meal.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 11:01 PM
 */

#ifndef MEAL_H
#define MEAL_H
#include<iostream>
#include<string>
#include<list>
#include "item.h"
class Meal 
{
private:
    list<Item*> item_list;
public:
    void addItem(Item* item)
    {
        item_list.push_back(item);
    }
    
    float getCost()
    {
       float total_cost = 0;
       list<Item*>::iterator iter;
       for (iter = item_list.begin(); iter != item_list.end(); iter++)
       {
           total_cost = total_cost + (*iter)->price();
       }
       return total_cost;
    }
    void showItem()
    {
        list<Item*>::iterator iter;
        for(iter = item_list.begin(); iter != item_list.end(); iter++)
        {
            cout<<"name:"<<(*iter)->name()<<endl;
            cout<<"pack:"<<(*iter)->packing()->pack()<<endl;
            cout<<"price:"<<(*iter)->price()<<endl;
        }
    }
    
};

#endif /* MEAL_H */

