#include<iostream>
#include"IceCream.h"
using namespace std;
int main()
{
	IceCream I1;
	string f,w;
	int s;
	cout << "Flavour: "; getline(cin, f);
	cout << "Waffer(yes/no): "; getline(cin, w);
	cout << "Scoop(2/3): "; cin >> s;
	I1.SetFlavour(f);
	I1.SetScoops(s);
	I1.SetWafer(w);
	//I1.SetPrice();
	I1.Display();
}