#include <iostream>
#include <string>
#include "AbstractLogger.h"
#include "ConsoleLogger.h"
#include "ErrorLogger.h"
#include "FileLogger.h"
using namespace std;
int main()
{
  AbstractLogger *errorLogger = new ErrorLogger(AbstractLogger::ERROR);
  AbstractLogger *fileLogger = new FileLogger(AbstractLogger::DEBUG);
  AbstractLogger *consoleLogger = new ConsoleLogger(AbstractLogger::INFO);

  errorLogger->setNextLogger(fileLogger);
  fileLogger->setNextLogger(consoleLogger);

  errorLogger->logMessage(AbstractLogger::INFO, "This is an information.");
  // errorLogger->logMessage(AbstractLogger::DEBUG,"This is an debug level information."); 
  // errorLogger->logMessage(AbstractLogger::ERROR,"This is an error information."); 
  return 0;
}
