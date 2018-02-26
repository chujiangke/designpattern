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
  vector<Memento*> mementoList;
 public:
  void add(Memento* memento)
  {
    mementoList.pushback(memento);
  }
  memento* get(int index)
  {
    if(index<=0 || index > mementoList.size())
      return NULL;
    return memento[index];
  }
};
#endif
