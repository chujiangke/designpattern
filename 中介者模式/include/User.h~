#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include "ChatRoom.h"
using namespace std;
class ChatRoom;
class User
{
 private:
  string name;
 public:
  User(string name)
    {
      this->name = name;
    }
  string getName()
  {
    return name;
  }
  void setName(string name)
  {
    this->name = name;
  }
  void sendMessage(string message)
  {
    ChatRoom::showMessage(*this, message);
  }
  
};
#endif
