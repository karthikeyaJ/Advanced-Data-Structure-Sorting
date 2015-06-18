

#pragma once
#include "Interfaces03.h"

class CircularList : public ICircularList
{
public:
	CircularList();
	~CircularList(); //{}
	void addHead(int number);
	ISingleNode03 * getTail();
	void setTail(ISingleNode03 * tail);
	int size();
private:
	//ISingleNode03* _head;
	ISingleNode03* _tail;
	int _size;
};