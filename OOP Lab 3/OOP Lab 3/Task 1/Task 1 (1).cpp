#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle R;
	R.Display();
	float L, W;
	cout << "Enter Lenght: "; cin >> L;
	cout << "Enter Width: "; cin >> W;
	cout << endl;
	R.SetLenght(L);
	R.SetWidth(W);
	R.Display();
	float A = R.Area();
	float P = R.Perimeter();
	cout << endl;
	cout << "Area: " << A << endl;
	cout << "Perimeter: " << P << endl;

}