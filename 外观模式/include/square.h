#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

class Square: public Shape
{
 public:
    virtual void draw()
    {
      cout << "Sauare::draw"<<endl;
    }
};

#endif
