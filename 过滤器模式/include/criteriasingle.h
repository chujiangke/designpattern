#ifndef CRITERIASINGLE_H
#define CRITERIASINGLE_H

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
			if(it->getMaritalStatus() == "SINGLE")
			{
				persons_list->push_back(*it);
			}
		}
		return persons_list;
	}
}


#endif