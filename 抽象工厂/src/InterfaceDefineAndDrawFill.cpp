/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include "InterfaceDefineAndDrawFill.h"
using namespace std;

void Rectangle::draw()
{
    cout << "Inside Rectangle::draw() method."<<endl;
    return ;
}
    

void Square::draw()
{
    cout << "Inside Square::draw() method."<<endl;
    return ;
}


void Circle::draw()
{
    cout << "Inside Circle::draw() method."<<endl;
}


void Red::fill()
{
    cout<<"Inside Red::fill() method."<<endl;
}


void Green::fill()
{
    cout<<"Inside Green::fill() method."<<endl;
}



void Blue::fill()
{
    cout<<"Inside Blue::fill() method."<<endl;
}

