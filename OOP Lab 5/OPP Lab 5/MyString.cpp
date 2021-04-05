#include "MyString.h"

MyString::MyString() :size(10)
{
	myArray = new char [size] {'T', 'A', 'H', 'A', '\0'};
}

MyString::MyString(char* arr) : size(sizeof(arr))
{
	myArray = new char[size];
	myArray = arr;
}

MyString::MyString(char* arr, int num) : size(num)
{
	myArray = new char[size];
	myArray = arr;
}

void MyString::setMyArray(char* arr)
{
	myArray = arr;
}

const char* MyString::getMyArray() const
{
	return myArray;
}

const int MyString::getSize() const
{
	return size;
}

void MyString::print() const
{
	cout << "-----------------------------" << endl;
	cout << "Array: " << myArray << endl;
	cout << "Size: " << size << endl;
	cout << endl;
}
