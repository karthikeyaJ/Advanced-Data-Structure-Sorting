
#include "Interfaces03.h"
#include "SingleNode03.h"

SingleNode03::SingleNode03() { m_node = NULL; }
SingleNode03::	~SingleNode03() {}
int SingleNode03::getValue()
{
	return m_data;
}
void SingleNode03::setValue(int value)
{
	this->m_data = value;
}
ISingleNode03 * SingleNode03::getNext()
{
	return m_node;
}
void SingleNode03::setNext(ISingleNode03 * next)
{
	this->m_node = next;
}
