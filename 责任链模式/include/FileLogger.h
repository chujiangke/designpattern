#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <iostream>
#include <string>
#include "AbstractLogger.h"
using namespace std;
class FileLogger:public AbstractLogger
{
 public:
  FileLogger(int level)
    {
      this->level = level;
    }
  
 protected:
  virtual void write(string message)
  {
    cout<<"FileLogger::write "<<message<<endl;
  }
};

#endif
