

#pragma once
#include "Interfaces03.h"
#include <string>
#include <vector>

class HeapSort : public IHeapSort
{
public:
	HeapSort();
	~HeapSort();
	void sort(std::vector<int>& vector);
private:
	void heapify(std::vector<int>& vector, int vectorSize);
	void exchange(int & firstElement, int & secondElement);
	void topDown(std::vector<int>& vector, int startIndex, int endIndex);

};