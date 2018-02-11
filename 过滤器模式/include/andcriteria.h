#ifndef ANDCRITERIA_H
#define ANDCRITERIA_H

#include <iostream>
#include <string>
#include <algorithm>
#include "criteria.h"
#include "person.h"
using namespace std;

class AndCriteria  : public Criteria 
{
public:
	AndCriteria(Criteria *criteria, Criteria *otherCriteria)
	{
		this->criteria = criteria
		this->otherCriteria = otherCriteria;
	}

	virtual list<Person>* meetCriteria(list<Person>* persons_list_total)
	{
		if( NULL == persons_list_total)
			return NULL;
		list<Person>* tmp = criteria ->meetCriteria(otherCriteria);
		return otherCriteria->meetCriteria(tmp);
	}

private:
	 Criteria *criteria;
	 Criteria *otherCriteria;
}

#endif
