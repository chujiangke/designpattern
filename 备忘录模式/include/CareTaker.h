#ifndef CARETAKER_H
#define CARETAKER_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
#include"Memento.h"

class CareTaker
{
 private:
  vector<Memento*> mementoVector;
 public:
  void add(Memento* memento)
  {
    mementoVector.push_back(memento);
  }
  Memento* get(int index)
  {
    if(index<=0 || index > mementoVector.size())
      return NULL;
    return mementoVector[index];
  }
};
#endif
