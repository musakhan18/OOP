#pragma once
#include"Shape.h"

class Rectangle:public Shape
{
public:
	float Width;
	Rectangle();
	Rectangle(float, float);
	void Area();
	void perimeter();
};

