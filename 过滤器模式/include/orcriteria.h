#ifndef ORCRITERIA_H
#define ORCRITERIA_H

#include <iostream>
#include <string>
#include <algorithm>
#include "criteria.h"
#include "person.h"
using namespace std;

class FunFindIf
{
public:
	FunFindIf(Person & person)
	{
		this->person = person;
	}
	bool operator ()(Person &person)
	{
		return (this->person == person);
	}
private:
	Person  person;
}

class OrCriteria : public Criteria 
{
public:
	OrCriteria( Criteria* criteria, Criteria* otherCriteria) 
	{
		this->criteria = criteria;
		this->otherCriteria = otherCriteria;
	}

	virtual list<Person>* meetCriteria(list<Person>* persons_list_total)
	{
		if( NULL == persons_list_total)
			return NULL;
		list<Person>* firstCriteriaItems  = criteria->meetCriteria(persons_list_total);
		list<Person>* otherCriteriaItems  = otherCriteria->meetCriteria(persons_list_total);
		for(list<Person>::iterator it_first = firstCriteriaItems->begin(); it_first != it_first->end(); it_first ++)
		{
			list<Person>:: iterator it_other = otherCriteria->begin();
			it_other = find_if(otherCriteria->begin(),otherCriteria->end(),FunFindIf(*it_first));
			if (it_other == otherCriteria->end())
			{
				firstCriteriaItems->push_back(*it_first);
			}
		}
		return firstCriteriaItems;
	}

private:
	Criteria* criteria;
	Criteria* otherCriteria;

}

#endif
