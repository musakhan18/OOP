#include "Trapezium.h"

Trapezium::Trapezium():Shape()
{
	Base = 6;
	Height = 7;
	Third_Side = 5;
	Forth_side = 4;
}
Trapezium::Trapezium(float L, float W, float H, float T, float F) :Shape(L)
{
	Base = W;
	Height = H;
	Third_Side = T;
	Forth_side = F;
}

void Trapezium::Area()
{
	float A;
	A = (Lenght + Base) / 2;
	A *= Height;
	cout<< "Area of Trapezium: " << A << endl;
}

void Trapezium::Perimeter()
{
	float P;
	P = Lenght + Base + Third_Side + Forth_side;
	cout << "Parameter of Trapezium: " << P << endl;
}