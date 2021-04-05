#pragma once
#include<iostream>
using namespace std;
class MyString
{
private:
	char* myArray;
	const int size;
public:
	MyString(); 
	MyString(char*); 
	MyString(char*, int); 
	void setMyArray(char*);
	const char* getMyArray() const;
	const int getSize() const;
	void print() const;
};

