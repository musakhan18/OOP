#pragma once
#include<string>
using namespace std;
class Car
{
private:
	string name, manufac, colour;
	int year;
public:
	Car();
	Car(string N, string M, string C, int Y);
	void SetName(string N);
	void SetManuf(string M);
	void SetColour(string C);
	void SetYear(int Y);
	string GetName();
	string GetManuF();
	string GetColour();
	int GetYear();
	void Display();
};

