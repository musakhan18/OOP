#include "Creature.h"

Creature::Creature()
{
	name = nullptr;
}

Creature::Creature(char* N, Point& obj)
{
	int s = 0;
	while (N[s] != '\0')
	{
		s++;
	}
	s++;
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = N[i];
	}
	name[s - 1] = '\0';
	location.SetX(obj.GetX());
	location.SetY(obj.GetY());
}

void Creature::setname(char* N)
{
	int s = 0;
	while (N[s]!='\0')
	{
		s++;
	}
	s++;
	name = new char[s];
	for (int i = 0; i < s; i++)
	{
		name[i] = N[i];
	}
	name[s-1] = '\0';
}

char* Creature::getname()const
{
	int s = 0;
	while (name[s] != '\0')
	{
		s++;
	}
	s++;
	char* n = new char[s];
	for (int i = 0; i < s; i++)
	{
		n[i] = name[i];
	}
	n[s-1] = '\0';
	return n;
}

void Creature::move()
{
	char C;
	cout << "^What do you desire^" << endl;
	cout << "---------------------" << endl;
	cout << "Press (U) for up" << endl;
	cout << "Press (D) for down" << endl;
	cout << "Press (L) for left" << endl;
	cout << "Press (R) for right" << endl;
	cin >> C;
	if (C == 'U')
	{
		int temp = 0;
		temp = location.GetY();
		temp++;
		location.SetY(temp);
	}
	else if (C == 'D')
	{
		int temp = 0;
		temp = location.GetY();
		temp--;
		location.SetY(temp);
	}
	else if (C == 'L')
	{
		int temp = 0;
		temp = location.GetX();
		temp++;
		location.SetX(temp);
	}
	else if (C == 'R')
	{
		int temp = 0;
		temp = location.GetX();
		temp--;
		location.SetX(temp);
	}
	else
	{
		cout << "Error!" << endl;
		cout << "Wrong Option" << endl;
	}
}
void Creature::display()const
{
	cout << endl;
	cout <<"Name: "<<name << endl;
	cout << "--------------" << endl;
	cout << "X cordinate: " << location.GetX() << endl;
	cout << "Y cordinate: " <<  location.GetY() << endl;
}

Creature::~Creature()
{
	delete[]name;
	name = nullptr;
}