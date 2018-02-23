#ifndef ERRORLOGGER_H
#define ERRORLOGGER_H

class ErrorLogger:public AbstractLogger
{
 public:
  ErrorLogger(int level)
    {
      this->level = level;
    }
  
 protected:
  virtual void write(string message)
  {
    cout<<"ErrorLogger::write "<<message<<endl;
  }
};


#endif
