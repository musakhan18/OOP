#include "Car.h"
#include<iostream>
using namespace std;
Car::Car()
{
	name = "XXX";
	manufac = "XXX";
	colour = "XXX";
	year = 0;
}

Car::Car(string N, string M, string C, int Y)
{
	name = N;
	manufac = M;
	colour = C;
	year = Y;
}

void Car::SetName(string N)
{
	name = N;
}

void Car::SetManuf(string M)
{
	manufac = M;
}

void Car::SetColour(string C)
{
	colour = C;
}

void Car::SetYear(int Y)
{
	year = Y;
}

string Car::GetName()
{
	return name;
}

string Car::GetManuF()
{
	return manufac;
}

string Car::GetColour()
{
	return colour;
}

int Car::GetYear()
{
	return year;
}

void Car::Display()
{
	cout << "Car Details" << endl;
	cout << "Car Name: " << name << endl;
	cout << "Car Manufacturer: " << manufac << endl;
	cout << "Car Color: " << colour<<endl;
	cout << "Car Year: " << year << endl;
	cout << endl;
}