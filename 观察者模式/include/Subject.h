#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <string>
using namespace std;
class Subject
{
 public:
  virtual void attach(Observer *) = 0;
  virtual void deatch(Observer *) = 0;
  virtual void notifyAllObservers() = 0;
};

#endif
