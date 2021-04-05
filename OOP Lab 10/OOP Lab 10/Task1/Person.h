#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	char* name;
	int DOB;
public:
	Person();
	Person(char*, int);
	void SetName(char*);
	void SetDOB(int);
	char* GetName()const;
	int GetDOB()const;
	void display()const;
	~Person();
};

