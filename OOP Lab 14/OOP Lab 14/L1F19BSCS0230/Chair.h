#pragma once
#include<iostream>
using namespace std;

class Chair
{
	char* Type;
public:
	Chair();
	Chair(char*);
	Chair(const Chair&);
	void SetType(char*);
	char* GetType()const;
	void display()const;
	~Chair();
};

