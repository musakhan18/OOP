#pragma once
#include"Shape.h"

class Trapezium:public Shape
{
public:
	float Base;
	float Height;
	float Third_Side;
	float Forth_side;
	Trapezium();
	Trapezium(float,float, float, float, float);
	void Area();
	void Perimeter();
};

