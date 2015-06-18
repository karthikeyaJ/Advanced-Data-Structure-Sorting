


#include "Interfaces03.h"
#include "HeapSort.h"
HeapSort::HeapSort(){}
HeapSort::~HeapSort() {}
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
	
	//int root = startIndex;
	//int childIndex;
	//// Loop till the children of the root node reach the end of the heap
	//while ((root * 2 + 1) <= endIndex){ // root * 2 + 1 represents the left child
	//	childIndex = root * 2 + 1;
	//	// If index of child node is lesser that the end of heap and the left child is lesser in value
	//	// than right child, then move the index of child to point to the right child (Bigger child)
	//	if (childIndex < endIndex && vector[childIndex] < vector[childIndex + 1]){
	//		childIndex++;
	//	}
	//	// Swap parent and child in case parent is lesser than child to uphold the max heap config
	//	if (vector[root] < vector[childIndex]){
	//		exchange(vector[root], vector[childIndex]);
	//		root = childIndex;
	//	}
	//	else {
	//		return;
	//	}


