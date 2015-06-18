#pragma once
#include "Interfaces03.h"

class LinkedListSort : public ILinkedListSort
{
public:
	LinkedListSort();
	~LinkedListSort();
	LinkedListNode * sort(LinkedListNode * list);
	LinkedListNode * merge(LinkedListNode * front, LinkedListNode * back);
private:
	ISingleNode03 *head;
};