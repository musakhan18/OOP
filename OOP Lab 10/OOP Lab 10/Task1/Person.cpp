#include "Person.h"

Person::Person()
{
	name = nullptr;
	DOB = 1990;
}

Person::Person(char* n , int a)
{
	int s = 0;
	while (n[s]!='\0')
	{
		s++;
	}
	name = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		name[i] = n[i];
	}
	name[s] = '\0';
	DOB = a;
}

void Person::SetName(char* n)
{
	int s = 0;
	while (n[s] != '\0')
	{
		s++;
	}
	name = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		name[i] = n[i];
	}
	name[s] = '\0';
}

void Person::SetDOB(int a)
{
	DOB = a;
}

char* Person::GetName()const
{
	int s = 0;
	char* n;
	while (name[s] != '\0')
	{
		s++;
	}
	n = new char[s + 1];
	for (int i = 0; i < s; i++)
	{
		n[i] = name[i];
	}
	n[s] = '\0';
	return n;
}

int Person::GetDOB()const
{
	return DOB;
}

void Person::display()const
{
	cout << "Name: " << name << endl;
	cout << "DOB: " << DOB << endl;
	/*cout << endl;*/
}

Person::~Person()
{
	delete[]name;
	name = nullptr;
}