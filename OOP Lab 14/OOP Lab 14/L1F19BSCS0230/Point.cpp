#include "Point.h"

Point::Point()
{
	X = 0;
	Y = 0;
}

Point::Point(int x, int y)
{
	X = x;
	Y = y;
}

Point::Point(const Point& obj)
{
	X = obj.X;
	Y = obj.Y;
}

void Point::SetX(int x)
{
	X = x;
}

void Point::SetY(int y)
{
	Y = y;
}

int Point::GetX()const
{
	return X;
}

int Point::GetY()const
{
	return Y;
}