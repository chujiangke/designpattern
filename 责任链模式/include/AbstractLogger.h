#ifndef ABSTRACTLOGGER_H
#define ABSTRACTLOGGER_H
#include <iostream>
#include <string>
using namespace std;
class AbstractLogger
{
 public:
  static const int INFO = 1;
  static const int DEBUG = 2;
  static const int ERROR = 3;
  void setNextLogger(AbstractLogger *nextLogger)
  {
    this->nextLogger = nextLogger;
  }
  void logMessage(int level, string message)
  {
    if(this->level <= level)
      {
	write(message);
      }
    if(nextLogger != NULL)
      {
	nextLogger->logMessage(level, message);
      }

  }
 protected :
  int level;
  AbstractLogger* nextLogger;
  virtual void write(string message) = 0; 
};
#endif
