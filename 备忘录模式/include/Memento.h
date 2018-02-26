#ifndef MEMENTO_H
#define MEMENTO_H
#include<iostream>
#include<string>
using namespace std;
class Memento
{
 private:
  string state;
 public:
  Memento(string state)
    {
      this->state = state;
    }
  string getState()
  {
    return state;
  }
};
#endif
