#include "Person.h"

int getsize(char* arr)
{
	int s=0;
	while (arr[s] != '\0')
	{
		s++;
	}
	s++;
	return s;
}

Person::Person()
{
	name = nullptr;
	cnic = nullptr;
	address = nullptr;
}

Person::Person(char* n, char* c, char* a)
{
	int s = getsize(n);
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = n[i];
	}
	name[s-1] = '\0';

	s = getsize(c);
	cnic = new char[s];
	for (int i = 0; i < s; i++)
	{
		cnic[i] = c[i];
	}
	cnic[s-1] = '\0';

	s = getsize(a);
     address = new char[s];
	for (int i = 0; i < s; i++)
	{
		address[i] = a[i];
	}
	address[s-1] = '\0';
}

Person::Person(Person& obj)
{
	int s = getsize(obj.name);
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = obj.name[i];
	}
	name[s-1] = '\0';

	s = getsize(obj.cnic);
	cnic = new char[s];
	for (int i = 0; i < s; i++)
	{
		cnic[i] = obj.cnic[i];
	}
	cnic[s-1] = '\0';

	s = getsize(obj.address);
	address = new char[s];
	for (int i = 0; i < s; i++)
	{
		address[i] = obj.address[i];
	}
	address[s-1] = '\0';
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

void Person::SetCnic(char* c)
{
	int s = getsize(c);
	cnic = new char[s];
	for (int i = 0; i < s; i++)
	{
		cnic[i] = c[i];
	}
	cnic[s-1] = '\0';
}

void Person::SetAddress(char* a)
{
	int s = getsize(a);
	address = new char[s];
	for (int i = 0; i < s; i++)
	{
		address[i] = a[i];
	}
	address[s-1] = '\0';
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

char* Person::GetCnic()const
{
	int s = getsize(cnic);
	char* c = new char[s];
	for (int i = 0; i < s; i++)
	{
		c[i] = cnic[i];
	}
	c[s-1] = '\0';
	return c;
}

char* Person::GetAddress()const
{
	int s = getsize(address);
	char* a = new char[s];
	for (int i = 0; i < s; i++)
	{
		  a[i]= address[i];
	}
	a[s-1] = '\0';
	return a;
}

void Person::display()const
{
	cout << "Name: " << name << endl;
	cout << "Cnic: " << cnic << endl;
	cout << "Address: " <<address<< endl;
	/*cout << endl;*/
}

Person::~Person()
{
	delete[]name;
	name = nullptr;
	delete[]cnic;
	cnic = nullptr;
	delete[]address;
	address = nullptr;
}