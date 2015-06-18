

#pragma once
#include "Interfaces03.h"

class RecordsSearch : public IRecordsSearch
{
public:
	RecordsSearch(){}
	~RecordsSearch(){}
	void bulkInsert(std::vector<Employee> records);
	Employee searchFirstName(std::string first_name);
	Employee searchLastName(std::string last_name);
	Employee searchPassword(std::string password);
private:
	Employee k[200000];
};


