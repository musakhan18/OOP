#pragma once
class Point
{
	int X;
	int Y;
public:
	Point();
	Point(int, int);
	Point(const Point&);
	void SetX(int);
	void SetY(int);
	int GetX()const;
	int GetY()const;
};

