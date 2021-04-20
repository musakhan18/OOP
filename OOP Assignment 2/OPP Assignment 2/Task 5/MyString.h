#pragma once
#include<iostream>
using namespace std;

class MyString
{
	char* str;
	int CurrentSize;
	int MaxSize;
public:
	MyString(int size = 100);
	MyString(MyString& obj, int a, int b);
	MyString(MyString& rhs);
	const char& operator[](int index)const;
	char& operator[](int index);
	MyString operator+(const MyString&)const;
	MyString& operator=(const MyString& rhs);
	MyString& operator++();
	MyString operator++(int);
	MyString& operator--();
	MyString operator--(int);
	int length()const;
	void clear();
	void add(const char data);
	int getCurrentSize()const;
	~MyString();
};

