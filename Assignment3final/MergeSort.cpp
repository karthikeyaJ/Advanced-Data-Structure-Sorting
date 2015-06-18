

#include <iostream>
#include "Interfaces03.h"
#include "MergeSort.h"

MergeSort::	MergeSort(){}
MergeSort::~MergeSort(){}

void MergeSort::mergeSort(ICircularList * input)
{
	int len = input->size();
	if (len == 1)
		return;

	merge_Tail=input->getTail();
	merge_Head = merge_Tail->getNext();
	merge_Tail->setNext(NULL);

	merge_Head=sort(merge_Head);
	/*std::cout << merge_Head->getValue();*/

	ISingleNode03 *tempTail = NULL;
	tempTail = merge_Head;

	while (tempTail->getNext() != NULL)
		tempTail = tempTail->getNext();
	merge_Tail = tempTail;
	input->setTail(merge_Tail);
	merge_Tail->setNext(merge_Head);

	/*std::cout << merge_Tail->getValue();
	std::cout << merge_Tail->getNext()->getValue();*/
}


ISingleNode03 *MergeSort::sort(ISingleNode03 *list)
{
	ISingleNode03 *front = NULL;
	ISingleNode03 *back = NULL;
	ISingleNode03 *last1 = NULL;
	ISingleNode03 *last2 = NULL;
	ISingleNode03 *mer = NULL;

	if ((list == NULL) || (list->getNext() == NULL))
	{
		return list;
	}
	else
	{
		last1 = list;
		last2 = list->getNext();
		while (last2->getNext() != NULL)
		{
			last2 = last2->getNext();

			if (last2->getNext() != NULL)
			{
				last1 = last1->getNext();
				last2 = last2->getNext();
			}
			else
			{
				last1 = last1->getNext();
			}
		}
		front = list;
		back = last1->getNext();
		last1->setNext(NULL);
	}
	front = sort(front);
	back = sort(back);
	mer = merge(front, back);
	/*while (mer->getNext() != NULL){
		std::cout << mer->getValue();
		mer=mer->getNext();
	}
	std::cout<<""<<std::endl;*/
	return mer;
}




ISingleNode03 *MergeSort::merge(ISingleNode03 *front, ISingleNode03 *back)
{

	while (front != NULL && back != NULL)
	{
		if (front->getValue() <= back->getValue())
		{
			front->setNext(merge(front->getNext(), back)) ;
			return front;
		}

		else
		{
			back->setNext(merge(front, back->getNext()));
			return back;
		}

	}

	while (front != NULL)
	{
		return front;
	}

	while (back != NULL)
	{
		return back;
	}

}

