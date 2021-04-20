#include<iostream>
#include"Pizza.h"

void Display(int s, int t, int p, char* top, int n);

using namespace std;
int main()
{
	Pizza pizza[5];
	double Price=0, Size=0, Thickness=0;
	char* topping = new char[100];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Size (inches) Of Pizza " << i + 1 << ": "; cin >> Size;
		cout << "Enter Price (PKR)  Of Pizza " << i + 1 << ": "; cin >> Price;
		cout << "Enter Thickness (cm) Of pizza " << i + 1 << ": "; cin >> Thickness;
		cout << "Enter Topping Name " << i + 1 << ": "; cin >> topping;
		pizza[i].SetSize(Size);
		pizza[i].SetPrice(Price);
		pizza[i].SetThickness(Thickness);
		pizza[i].SetTopping(topping);
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		Price = pizza[i].GetPrice();
		Size = pizza[i].GetSize();
		Thickness = pizza[i].GetThickness();
		topping = pizza[i].GetTopping();
		Display(Size, Thickness, Price, topping, i);
	}
}

void Display(int s,int t,int p,char*top,int n)
{
	cout << endl;
	cout << "Size Of Pizza " << n + 1 << ": " << s << " inches" << endl;
	cout << "Price " << n + 1 << ": " << p <<" PKR"<< endl;
	cout << "Thickness " << n + 1 << ": " << t <<" cm"<< endl;
	cout << "Topping " << n + 1 << ": " << top << endl;
}
