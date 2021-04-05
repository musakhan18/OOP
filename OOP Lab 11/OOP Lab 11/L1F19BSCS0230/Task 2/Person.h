#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	char* name;
	char* cnic;
	char* address;
public:
	Person();
	Person(char*, char*,char*);
	Person(Person&);
	void SetName(char*);
	void SetCnic(char*);
	void SetAddress(char*);
	char* GetCnic()const;
	char* GetAddress()const;
	char* GetName()const;
	void display()const;
	~Person();
};

