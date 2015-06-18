#include<iostream>
#include "Interfaces03.h"
#include "RecordsSearch.h"

void RecordsSearch::bulkInsert(std::vector<Employee> records)
{
	for (int i = 0; i < records.size(); i++)
	{
		k[i].first_name = records[i].first_name;
		k[i].last_name = records[i].last_name;
		k[i].password = records[i].password;
	}
}

Employee RecordsSearch::searchFirstName(std::string first_name)
{
	for (int i = 0; i < 2000000; i++)
	{
		if (k[i].first_name == first_name)
		{
			return k[i];
		}

	}
}

Employee RecordsSearch::searchLastName(std::string last_name)
{
	//Employee k[10];
	for (int i = 0; i < 2000000; i++)
	{
		if (k[i].last_name== last_name)
		{
			return k[i];
		}
	
	}
	//std::cout << " hi";
}

Employee RecordsSearch::searchPassword(std::string password)
{
	for (int i = 0; i < 2000000; i++)
	{
		if (k[i].password == password)
		{
			return k[i];
		}

	}
}


