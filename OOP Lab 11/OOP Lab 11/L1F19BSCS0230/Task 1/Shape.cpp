#include "Shape.h"

Shape::Shape()
{
	Lenght = 10;
}

Shape::Shape(float len)
{
	Lenght = len;
}

void Shape::Area()
{
	cout << "\nShape Class Area\n";
}
void Shape::Perimeter()
{
	cout << "\nSHAPE CLASS PERIMETER\n";
}