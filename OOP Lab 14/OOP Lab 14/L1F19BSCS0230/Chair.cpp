#include "Chair.h"

Chair::Chair()
{
	Type = nullptr;
}

Chair::Chair(char* T)
{
	int s = 0;
	while (T[s]!='\0')
	{
		s++;
	}
	s++;
	Type = new char[s];
	for (int i = 0; i < s; i++)
	{
		Type[i] = T[i];
	}
	Type[s-1] = '\0';
}

Chair::Chair(const Chair& obj)
{
	int s = 0;
	while (obj.Type[s] != '\0')
	{
		s++;
	}
	s++;
	Type = new char[s];
	for (int i = 0; i < s; i++)
	{
		Type[i] = obj.Type[i];
	}
	Type[s-1] = '\0';
}

void Chair::SetType(char* T)
{
	int s = 0;
	while (T[s] != '\0')
	{
		s++;
	}
	s++;
	for (int i = 0; i < s; i++)
	{
		Type[i] = T[i];
	}
	Type[s - 1] = '\0';
}

char* Chair::GetType()const
{
	int s = 0;
	while (Type[s] != '\0')
	{
		s++;
	}
	s++;
	char*T = new char[s];
	for (int i = 0; i < s; i++)
	{
		T[i] = Type[i];
	}
	T[s - 1] = '\0';
	return T;
}

void Chair::display()const
{
	cout << "Type: " << Type << endl;
}

Chair::~Chair()
{
	delete[]Type;
	Type = nullptr;
}