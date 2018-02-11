#ifndef CRITERIAMALE_H
#define CRITERIAMALE_H

#include <iostream>
#include <string>
#include <algorithm>
#include "criteria.h"
#include "person.h"
using namespace std;

class CriteriaMale : public Criteria 
{
public:
	virtual list<Person>* meetCriteria(list<Person>* persons_list_total)
	{
		if( NULL == persons_list_total)
			return NULL;
		list<Person> * persons_list = new list<Person>();
		list<Person>::iterator it;
		for(it = persons_list_total->begin(); it != persons_list_total->end(); it++)
		{
			if(it->getGender() == "FEMALE")
			{
				persons_list->push_back(*it);
			}
		}
		return persons_list;
	}
}

#endif

