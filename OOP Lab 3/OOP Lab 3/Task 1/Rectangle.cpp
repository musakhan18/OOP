#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle()
{
		Lenght = 1;
		Width = 1;	
}

void Rectangle::SetLenght(float L)
{
	if (L>0&&L<=20)
	{
		Lenght = L;
	}
	else
	{
		cout << "Error!!" << endl;
	}
}

void Rectangle::SetWidth(float W)
{
	if (W>0 && W <= 20)
	{
		Width = W;
	}
	else
	{
		cout << "Error!!" << endl;
	}
}

float Rectangle::GetLenght()
{
	return Lenght;
}

float Rectangle::GetWidth()
{
	return Width;
}

void Rectangle::Display()
{
	cout << "Lenght: " << Lenght << endl;
	cout << "Width: " << Width << endl;
}

float Rectangle::Area()
{
	float A;
	A = Lenght*Width;
	return A;
}

float Rectangle::Perimeter()
{
	float P = 2 * (Lenght + Width);
	return P;
}