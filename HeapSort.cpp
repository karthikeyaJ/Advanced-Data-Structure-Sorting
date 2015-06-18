


#include "Interfaces03.h"
#include "HeapSort.h"
HeapSort::HeapSort(){}
HeapSort::~HeapSort() {}
#include <iostream>
void HeapSort::sort(std::vector<int>& vector)
{
	int vectorSize = vector.size();
	for (int i = vectorSize / 2-1; i >= 0; i--)
	{
		topDown(vector,i,vectorSize-1);
	}

	int endIndex = vectorSize - 1;
	while (endIndex > 0){
		exchange(vector[0], vector[endIndex]);
		endIndex--;
		topDown(vector, 0, endIndex);
	}
	return;

}

//void HeapSort::heapify(std::vector<int>& vector, int i)
//{
//	
//	int l, r, largest;
//	 l = (2*i)+1;
//	 r = (2 * i)+2 ;
//	 if (l > vector.size() && r > vector.size())
//		 return;
//	 if (l <= vector.size() && vector[l] > vector[i])
//		 largest = l;
//	 else
//		 largest = i;
//	 if (r < vector.size() && vector[r] > vector[largest])
//		 largest = r;
//	 if (largest != i)
//		 exchange(vector[i], vector[largest]);
//	 heapify(vector, largest);
//}

void HeapSort::exchange(int & firstElement, int & secondElement)
{
	int tempElement = firstElement;
	firstElement = secondElement;
	secondElement = tempElement;
	return;
}

void HeapSort::topDown(std::vector<int>& vector, int i, int endIndex)
{

	int largest = 2 * i + 1;
	while (largest <= endIndex) {

//		std::cout << vector[largest+1];
		if (largest < endIndex && 	vector[largest] < vector[largest + 1])
			largest++;
		if (vector[i] < vector[largest]) {
			exchange(vector[i], vector[largest]);
			i = largest;
			largest = 2 * i + 1;
		}
		else largest = endIndex + 1;
	}
}
	
	

