#include "Pizza.h"

Pizza::Pizza()
{
    size = 0;
	thickness = 0;
	price = 0;
	topping = nullptr;
}

void Pizza::SetSize(double S)
{
	size = S;
}

void Pizza::SetPrice(double P)
{
	price = P;
}

void Pizza::SetThickness(double T)
{
	thickness = T;
}

void Pizza::SetTopping(char* Top)
{
	topping = Top;
}

double Pizza::GetPrice()
{
	return price;
}

double Pizza::GetSize()
{
	return size;
}

double Pizza::GetThickness()
{
	return thickness;
}

char* Pizza::GetTopping()
{
	return topping;
}