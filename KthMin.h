
#pragma once
#include "Interfaces03.h"

class KthMin : public IKthMin
{
public:
	KthMin();
	~KthMin();
	int findKthMin(IDoubleList03 * data, int k);
private:
	
	//void exch(IDoubleList03 *, int, int);
	IDoubleNode03* m_headNode;
	IDoubleNode03* m_tailNode;
	void exch(IDoubleList03 *, IDoubleNode03 *, IDoubleNode03 *);
	int my_Size;

};
