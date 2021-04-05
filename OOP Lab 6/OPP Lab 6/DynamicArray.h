#pragma once
#include<iostream>
using namespace std;
class DynamicArray
{
	int size;
	int* ptr;
public:
	DynamicArray();
	DynamicArray(const DynamicArray & other);
	DynamicArray(const int size, const int * arr);
	void Print() const;
	void Add(const int value);
	void Subtract(const int value);
	void Multiply(const int value);
	void Divide(const int value);
	int GetIndexOf(const int value) const;
	int GetValueAtIndex(const int value)const;
	void InsertValueAtEnd(const int value);
	void DeleteValue(const int value);
	void CopyArray(const int size, const int * arr);
	void CopyObject(const DynamicArray & other);
	void SortAscending();
	void SortDescending();
	DynamicArray MergeArray(const DynamicArray & other);
	DynamicArray MergeArrayAndSort(const DynamicArray & other);
	~DynamicArray();
};