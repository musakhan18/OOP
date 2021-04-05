#include "DynamicArray.h"


DynamicArray::DynamicArray()
{
	size = 0;
	ptr = nullptr;
}

DynamicArray::DynamicArray(const DynamicArray & other)
{
	size = other.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = other.ptr[i];
	}
}

DynamicArray::DynamicArray(const int size, const int * arr)
{
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr[i];
	}
}

void DynamicArray::Print() const
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
}

void DynamicArray::Add(const int value)
{
	for (int i = 0; i < size; i++)
	{
			ptr[i] += value;
	}
}

void DynamicArray::Subtract(const int value)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] -= value;
	}
}

void DynamicArray::Multiply(const int value)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] *= value;
	}
}

void DynamicArray::Divide(const int value)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] /= value;
	}
}

int DynamicArray::GetIndexOf(const int value) const
{
	int ind = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == value)
		{
			ind = i;
		}
	}
	return ind;
}

int DynamicArray::GetValueAtIndex(const int value)const
{
	int ind = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == value)
		{
			ind = ptr[i];
		}
	}
	return ind;
}

void DynamicArray::InsertValueAtEnd(const int value)
{
	int* arr = new int[size + 1];
	int i = 0;
	for (; i < size; i++)
	{
		arr[i] = ptr[i];
	}
	arr[i] = value;
	delete ptr;
	ptr = arr;
	size++;
}

void DynamicArray::DeleteValue(const int value)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
			arr[i] = ptr[i];
	}
	delete[]ptr;
	ptr = nullptr;
	ptr = new int[size-1];
	for (int i = 0,j=0; i < size;i++ )
	{
		if (arr[i]!=value)
		{
			ptr[j] = arr[i];
			j++;
		}
	}
	delete[]arr;
	size--;
	arr = nullptr;
}

void DynamicArray::CopyArray(const int size, const int * arr)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr[i];
	}
}

void DynamicArray::CopyObject(const DynamicArray & other)
{
	size = other.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = other.ptr[i];
	}
}

void DynamicArray::SortAscending()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ptr[i]>ptr[j])
			{
				swap(ptr[i], ptr[j]);
			}
		}
	}
}

void DynamicArray::SortDescending()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ptr[i]<ptr[j])
			{
				swap(ptr[i], ptr[j]);
			}
		}
	}
}

DynamicArray DynamicArray::MergeArray(const DynamicArray & other)
{
	DynamicArray Temp;
	Temp.size = this->size + other.size;
	Temp.ptr = new int[Temp.size];
	for (int i = 0; i < size; i++)
	{
		Temp.ptr[i] = ptr[i];
	}
	for (int i = size,j=0; i <= Temp.size,j<=other.size; i++,j++)
	{
		Temp.ptr[i] = other.ptr[j];
	}
	return Temp;
}

DynamicArray DynamicArray::MergeArrayAndSort(const DynamicArray & other)
{
	DynamicArray Sort;
	Sort.size = other.size;
	Sort.ptr = new int[Sort.size];
	for (int i = 0; i < size; i++)
	{
		Sort.ptr[i] = other.ptr[i];
	}
	Sort.SortAscending();
	return Sort;
}

DynamicArray::~DynamicArray()
{
	delete[]ptr;
	ptr = nullptr;
}
