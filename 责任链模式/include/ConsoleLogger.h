#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include <iostream>
#include <string>
#include "AbstractLogger.h"
using namespace std;
class ConsoleLogger:public AbstractLogger
{
 public:
  ConsoleLogger(int level)
    {
      this->level = level;
    }
  
 protected:
  virtual void write(string message)
  {
    cout<<"ConsoleLogger::write "<<message<<endl;
  }
};

#endif
