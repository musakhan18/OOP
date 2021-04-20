#include "IceCream.h"
#include<iostream>
#include<string>
using namespace std;

void IceCream::SetFlavour(string F)
{
	if (F=="chocolate"|| F == "Chocolate")
	{
		Flavour = "chocolate";
	}
	else if (F == "vanilla"||F == "Vanilla")
	{
		Flavour = "vanilla";
	}
	else if (F == "strawberry"|| F == "Strawberry")
	{
		Flavour = "strawberry";
	}
	else if (F == "mango"|| F == "Mango")
	{
		Flavour = "mango";
	}
	else if (F=="tutti fruit"|| F == "Tutti fruit")
	{
		Flavour = "tutti fruit";
	}
	else if(F=="coffee"|| F == "Coffee")
	{
		Flavour = "coffee";
	}
	else
	{
		Flavour = "almond crunch";
	}
}

void IceCream::SetScoops(int S)
{
	if (S==3||S==2)
	{
		scoops = S;
	}
	else
	{
		scoops = 0;
	}
}

void IceCream::SetWafer(string W)
{
	if (W=="yes"||W=="Yes")
	{
		Wafer = "yes";
	}
	else if ( W == "No" || W == "no")
	{
		Wafer = "no";
	}
}

void IceCream::SetPrice()
{
	if (Flavour != "chocolate" && scoops == 2)
	{
		Price = 100;
	}
	else if (Flavour != "chocolate" && scoops == 3)
	{
		Price = 150;
	}
	else if (Flavour == "chocolate" && scoops == 2)
	{
		Price = 120;
	}
	else if (Flavour == "chocolate" && scoops == 3)
	{
		Price = 180;
	}
	if (Wafer == "yes")
	{
		Price += 10;
	}
}

string IceCream::GetFlavour()
{
	return Flavour;
}

string IceCream::GetWafer()
{
	return Wafer;
}

int IceCream::GetScoops()
{
	return scoops;
}


int IceCream::GetPrice()
{
	return Price;
}

void IceCream::Display()
{
	SetPrice();
	if (Price > 0)
	{
		cout << endl;
		cout << "Your choice of ice cream is as follows" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Flavour: " << Flavour << endl;
		cout << "Number of scoops: " << scoops << endl;
		if (Wafer == "yes")
		{
			cout << "Wafer is required" << endl;
		}
		else
		{
			cout << "Wafer is not required" << endl;
		}
		cout << "Total price is: " << Price << endl;
		cout << "---------------------------------------" << endl;
		cout << "Thank you for visiting LeCream!" << endl;
	}
	else
	{
		cout << endl;
		cout << "---------------------------------------" << endl;
		cout << "Invalid Input!" << endl;
		cout << "Thank you for visiting LeCream!" << endl;
		cout << "---------------------------------------" << endl;
	}
}
