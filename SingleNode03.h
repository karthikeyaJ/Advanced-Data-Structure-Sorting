

#pragma once
#include "Interfaces03.h"

class SingleNode03 : public ISingleNode03
{
public:
	SingleNode03();
	~SingleNode03();
	int getValue();
	void setValue(int value);
	ISingleNode03 * getNext();
	void setNext(ISingleNode03 * next) ;

private:
	int m_data;
	ISingleNode03 * m_node;
};