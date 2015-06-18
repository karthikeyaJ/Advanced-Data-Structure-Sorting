#include <iostream>
#include "KthMin.h"
#include "Interfaces03.h"
#include "DoubleList03.h"

#include <vector>

KthMin::KthMin(){
	m_headNode = NULL;
	m_tailNode = NULL;
}
KthMin :: ~KthMin(){}

int KthMin::findKthMin(IDoubleList03* data, int k)
{
	
	m_headNode = data->getHead();
	m_tailNode = data->getTail();
	my_Size = data->size();
	IDoubleNode03 *temp1 = NULL;
	IDoubleNode03 *temp2 = NULL;
	IDoubleNode03 *temp3 = NULL;

	temp1= m_headNode;
	temp2 = temp1->getNext();

	for (int i = 0; i <= k; ++i)
	{

		for (int j = i + 1; j <= my_Size; ++j)
		{
			if (temp2 != NULL)
			{
					if (temp2->getValue() < temp1->getValue())
					{
						int a = temp2->getValue();
						temp2->setValue(temp1->getValue());
						temp1->setValue(a);
					}
					temp2 = temp2->getNext();
			}

		}
		
		temp3 = temp1;
		temp1 = temp1->getNext();
		if (temp1!=NULL)
		temp2 = temp1->getNext();
	}

	return temp3->getValue();
}


//
//void KthMin::exch(IDoubleList03 * data, IDoubleNode03* index1, IDoubleNode03* index2)
//{
//	
//
//
//}
