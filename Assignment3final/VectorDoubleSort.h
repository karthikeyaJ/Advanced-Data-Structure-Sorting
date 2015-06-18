#pragma once
#include "Interfaces03.h"

class VectorDoubleSort : public IVectorDoubleSort
{
public:
	VectorDoubleSort();
	~VectorDoubleSort();
	void sort(std::vector<double>& vec);

private:
	void exchange(double & firstElement, double & secondElement);
	void topDown(std::vector<double>& vector, int i, int endIndex);
};