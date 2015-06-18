#include <iostream>
#include "Interfaces03.h"
#include "DoubleNode03.h"


DoubleNode03::DoubleNode03()
{
	m_next = NULL; m_prev = NULL;
}
	
DoubleNode03::~DoubleNode03() {}
void DoubleNode03::setValue(int value){
	this->m_data = value;
}
int DoubleNode03::getValue(){
	return this->m_data;
}
IDoubleNode03* DoubleNode03::getPrev(){
	return m_prev;
}
IDoubleNode03 *DoubleNode03::getNext(){
	return m_next;
}
void DoubleNode03::setPrev(IDoubleNode03 * prev){
	this->m_prev = prev;
}
void DoubleNode03::setNext(IDoubleNode03 * next){
	this->m_next = next;
}
