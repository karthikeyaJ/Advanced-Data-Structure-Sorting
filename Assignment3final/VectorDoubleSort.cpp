
#include "Interfaces03.h"
#include "VectorDoubleSort.h"

VectorDoubleSort::VectorDoubleSort(){}
VectorDoubleSort::~VectorDoubleSort(){}

void VectorDoubleSort::sort(std::vector<double>& vec)
{
	int vectorSize = vec.size();
	for (int i = vectorSize / 2 - 1; i >= 0; i--)
	{
		topDown(vec, i, vectorSize - 1);
	}

	int endIndex = vectorSize - 1;
	while (endIndex > 0){
		exchange(vec[0], vec[endIndex]);
		endIndex--;
		topDown(vec, 0, endIndex);
	}
	return;



}

void VectorDoubleSort::exchange(double & firstElement, double & secondElement)
{
	int tempElement = firstElement;
	firstElement = secondElement;
	secondElement = tempElement;
	return;
}


void VectorDoubleSort::topDown(std::vector<double>& vec, int i, int endIndex)
{
	int largest = 2 * i + 1;
	while (largest <= endIndex) {
		if (largest < endIndex && 	vec[largest] < vec[largest + 1])
			largest++; 
		if (vec[i] < vec[largest])
		{
			exchange(vec[i], vec[largest]); 
			i = largest; 
			largest = 2 * i + 1;
		}
		else largest = endIndex + 1; 
	} 
}