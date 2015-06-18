#pragma once
#include "Interfaces03.h"
#include "vector.h"

class RadixSort : public IRadixSort
{
public:
	//RadixSort() {}
	RadixSort() :evecSize(0) {}
	~RadixSort() {}
	void sort(std::vector<std::string> & data);
private:
	vector<std::string> cvector;
	void sorted(vector<std::string> & data, int counting);
	//	vector<std::string> cvector;

	vector<std::string> dvector;
	vector<std::string> evector[50000];
	//int evecSize = 0;
	int evecSize;
};






















//
//
//#pragma once
//#include "Interfaces03.h"
//#include "vector.h"
//
//class RadixSort : public IRadixSort
//{
//public:
//	//RadixSort() {}
//	RadixSort() :evecSize(0),count(-1),jl(-1),kaja(0) {}
//	~RadixSort() {}
//	void sort(std::vector<std::string> & data);
//private:
//
//	void sorted(vector<std::string> & data, int counting);
//	//	vector<std::string> cvector;
//
//	std::vector<std::string> fvector[50000];
//	std::vector<std::string> gvector[50000];
//
//	std::vector<std::string> dvector[50000];
//	std::vector<std::string> evector[50000];
//	//int evecSize = 0;
//	int evecSize;
//	int count;
//	int jl;
//	int kaja;
//	std::vector<std::string> cvector[26];
//
//};