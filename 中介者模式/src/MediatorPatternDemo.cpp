#include <iostream>
#include <string>
#include "ChatRoom.h"
#include "User.h"

int main()
{
  User robert("Robert");
  User john("John");
  robert.sendMessage("Hi John!");
  john.sendMessage("Hello! Robert!");
  return 0;
}
