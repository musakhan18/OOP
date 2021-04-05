#include<iostream>
#include "Car.h"
#include<string>
using namespace std;
int main()
{
	Car Car1("Civic", "Honda", "White", 2019);
	Car Car2;
	string name, manuf, colour;
	int year;

	cout << "Car details With  parameterized constructor"<<endl;
	cout << "--------------------------------------------------------" << endl;
	Car1.Display();

	Car2 = Car1;
	

	name= Car2.GetName();
	manuf = Car2.GetManuF();
	colour = Car2.GetColour();
	year = Car2.GetYear();

	cout << "Car Details After Copying Attributes of Car 1 in Car 2" << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << "Car Namee: " << name << endl;
	cout << "Car Manufacturer: " << manuf << endl;
	cout << "Car Color: " << colour << endl;
	cout << "Car Year: " << year << endl;
	cout << endl;

	Car1.SetColour("Black");
	cout << "Updated Details of Car 1 " << endl;
	cout << "--------------------------------------------------------" << endl;
	Car1.Display();
}