#pragma once
#include<iostream>
using namespace std;

class Name
{
private:
	char* firstName;
	char* lastName;
	bool IsValidName()const;
public:
	Name(char* = nullptr, char* = nullptr);
	Name(const Name&);
	int GetSize(char*)const;
	void SetFirstName(char*);
	void SetLastName(char*);
	char* GetFirstName()const;
	char* GetLastName()const;
	void CopyName(Name&);
	void CamelCase();
	void ToUpperCase();
	void ToLowerCase();
	int NameLenght();
	void SwapNames();
	void Display()const;
	char* FullName();

	~Name();
};

