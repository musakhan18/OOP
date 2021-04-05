#include "Rectangle.h"

Rectangle::Rectangle():Shape()
{
	Width = 6;
}
Rectangle::Rectangle(float L, float W) : Shape(L)
{
	Width = W;
}
void Rectangle::Area()
{
	float A;
	A = Lenght * Width;
	cout << "Area of Rectangle: " << A << endl;
}

void Rectangle::perimeter()
{
	float Peri = 0;
	Peri = 2 * (Lenght+Width);
	cout << "Parameter of Rectangle: " << Peri << endl;
}