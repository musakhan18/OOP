#pragma once
class Pizza
{
private:
	double size, price, thickness;
	char* topping;
public:
	Pizza();
	void SetSize(double);
	void SetPrice(double);
	void SetThickness(double);
	void SetTopping(char*);
	double GetSize();
	double GetPrice();
	double GetThickness();
	char* GetTopping();
};

