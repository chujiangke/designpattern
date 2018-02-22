#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include "shapefactory.h"
using namespace std;
#define MAX 100
#define TABLESIZE(table)    (sizeof(table)/sizeof(table[1]))

int getRandomValue(int range)
{
  srand( (unsigned)time( NULL ) );
  return rand()%range;
}

int main()
{
  string colors[] = { "Red", "Green", "Blue", "White", "Black" };
  int colors_size =  TABLESIZE(colors);
  for(int i = 0; i<20; i++)
    {
      string choice_color = colors[getRandomValue(colors_size)];
      Circle* circle = (Circle*) ShapeFactory::getCircle(choice_color);
      circle->setX(getRandomValue(MAX));
      circle->setY(getRandomValue(MAX));
      circle->draw();
    }
  return 0;
  
}
