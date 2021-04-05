#include "Square.h"

Square::Square():Shape()
{

}

Square::Square(float len) : Shape(len)
{

}

void Square::Area()
{
	float area;
	area = Lenght * Lenght;
	cout << "Area of Square: " << area << endl;
}

void Square::Parameter()
{
	float Peri=0;
	Peri = 4 * Lenght;
	cout << "Parameter of Square: " << Peri << endl;
}