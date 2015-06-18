
#pragma once
#include "Interfaces03.h"
#include "CircularList.h"

class MergeSort : public IMergeSort
{
public:
	MergeSort(); 
	~MergeSort();
	void mergeSort(ICircularList * input);
	ISingleNode03 *merge(ISingleNode03 * left, ISingleNode03 * right);
	ISingleNode03 *sort(ISingleNode03 * list);

private:
	ISingleNode03 *merge_Head;
	ISingleNode03 *merge_Tail;


};