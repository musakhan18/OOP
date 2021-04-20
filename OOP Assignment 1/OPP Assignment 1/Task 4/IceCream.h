#pragma once
#include<string>
using namespace std;
class IceCream
{
private:
	string Flavour, Wafer;
	int scoops,Price;
public:
	void SetFlavour(string);
	void SetWafer(string);
	void SetScoops(int);
	string GetFlavour();
	string GetWafer();
	int GetScoops();
	void SetPrice();
	int GetPrice();
	void Display();
};

