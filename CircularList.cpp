
#include "Interfaces03.h"
#include "CircularList.h"
#include "SingleNode03.h"

CircularList::CircularList() { _size = 0; _tail = NULL; }
CircularList::~CircularList() {}

void CircularList::addHead(int number)
{
	ISingleNode03 * newNode =new SingleNode03();
     
	newNode->setValue(number);
	if (_tail == NULL)
	{
		_tail = newNode;
		_tail->setNext(newNode);
		_size++;
	}
	else{
		newNode->setNext(_tail->getNext());
		_tail->setNext(newNode);
		_tail = newNode;
		_size++;
	}



}


ISingleNode03 * CircularList::getTail()
{
	return _tail;
}

void CircularList::setTail(ISingleNode03 * tail)
{
	this->_tail=tail;
}

int CircularList::size()
{
	return _size;
}
