

#pragma once
#include "Interfaces03.h"
#include "vector.h"

class RunningMedian : public IRunningMedian
{
public:
	RunningMedian():l(0) { }
	~RunningMedian() { }
	std::vector<int> compute(std::vector<int> vec, int window_size);
private:
	void exchange(int & firstElement, int & secondElement);
	void topDown(vector<int>& vector, int i, int endIndex);
	void sortingMedian(vector<int> &vector);
	int l;
};