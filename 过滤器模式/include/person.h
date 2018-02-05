#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespce std;
class Person
{
public:
Person(string name, string gender, string maritalStatus)
{
this-> name = name;
this-> gender = gender;
this-> maritalStatus = maritalStatus;
}
string getName()
{
return name;
}
string getGender()
{
return gender;
}
string getMaritalStatus()
{
return maritalStatus;
}
private:
string name;
string gender;
string maritalStatus;
  
}
#endif
