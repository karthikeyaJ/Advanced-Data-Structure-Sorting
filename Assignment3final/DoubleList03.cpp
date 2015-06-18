#include <iostream>
#include "DoubleList03.h"
#include "Interfaces03.h"
#include "DoubleNode03.h"

DoubleList03 ::DoubleList03() {
m_headNode = NULL;
m_tailNode = NULL;
	}
DoubleList03 ::~DoubleList03() {}

IDoubleNode03 *DoubleList03::getHead(){
	return m_headNode;
}
IDoubleNode03 * DoubleList03::getTail(){
	return m_tailNode;
}
void DoubleList03::setHead(IDoubleNode03 * head){

	this->m_headNode = head;
}
void DoubleList03::setTail(IDoubleNode03 * tail){
	this->m_tailNode = tail;
}
void DoubleList03::addBack(int value){
	IDoubleNode03 *currNode = new DoubleNode03();
	currNode->setValue(value);
	if (getHead() == NULL)
	{
		setHead(currNode);
		setTail(currNode);
		m_headNode->setPrev(NULL);
		m_size++;
	}
	else{
		m_tailNode->setNext(currNode);
		currNode->setPrev(m_tailNode);
		m_tailNode = currNode;
		m_size++;
	}


}
int DoubleList03::size(){
	return m_size;
}

