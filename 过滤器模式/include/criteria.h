#ifndef CRITERIA_H
#define CRITERIA_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "person.h"
using  namespace std;
class Criteria 
{
public:
	virtual list<Person>* meetCriteria(list<Person> *persons) = 0;
}

#endif