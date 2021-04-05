#pragma once

class Rectangle
{
private:
	float Lenght, Width;
public:
	Rectangle();
	void SetLenght(float L);
	void SetWidth(float W);
	float GetLenght();
	float GetWidth();
	void Display();
	float Area();
	float Perimeter();
};


