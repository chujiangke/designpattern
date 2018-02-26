#ifndef CHATROOM_H
#define CHATROOM_H

#include <iostream>
#include <string>
#include <ctime>
#include "User.h"

using namespace std;
class User;
class ChatRoom
{
public:
  static void showMessage(User& user, string message);	

};
void ChatRoom::showMessage(User& user, string message)
{
	time_t timer;
	struct tm *tblock;
	timer = time(NULL);
	tblock = localtime(&timer);
	string strtime(asctime(tblock));
	cout<<"time:"<<strtime<<"user:"<<user.getName()<<"message:"<<message<<endl;
}

#endif
