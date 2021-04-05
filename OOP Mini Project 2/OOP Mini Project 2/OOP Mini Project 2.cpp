#include<iostream>
#include"Bike.h"
#include"Car.h"
#include"Truck.h"
#include"BilalMotors.h"
using namespace std;

void show_Vehicles(const BilalMotors& obj)
{
	cout << "Total Number Of Vehicles : " << obj.GetCount() << endl;
	for (int i = 0; i < obj.GetCount(); i++)
	{
		obj[i]->display();
	}
}

char Menu()
{
	cout << endl;
	cout << "                                                   **Bilal Motors**" << endl << endl;
	cout << " " << "^^What do you desire^^" << endl;
	cout << " " << "-----------------------" << endl;
	cout << " " << "Press (S) for Show vehicles list (brief)" << endl;
	cout << " " << "Press (E) for Create a data file (output file)" << endl;
	cout << " " << "Press (A) for Add new vehicle" << endl;
	cout << " " << "Press (F) Find Vehicle by type" << endl;
	cout << " " << "Press (Q) Quit Program" << endl;
	char c;
	cout << "Enter: "; cin >> c;
	cout << "___________________________________________________" << endl;
	cout << endl;
	return c;
}

int Bike::NumberOfBikes = 0;
int Car::NumberOfCars = 0;
int Truck::NumberOfTrucks = 0;
istream& operator>>(istream& inp, Bike& obj);
ostream& operator<<(ostream& out, const Bike& obj);
istream& operator>>(istream& inp, Car& obj);
ostream& operator<<(ostream& out, const Car& obj);
istream& operator>>(istream& inp, Truck& obj);
ostream& operator<<(ostream& out, const Truck& obj);

int main()
{
	BilalMotors obj;
	bool Stop = 0;
	do
	{
		char choice = Menu();
		if (choice == 'S' || choice == 's')
		{
			show_Vehicles(obj);
		}

		else if (choice == 'A' || choice == 'a')
		{
			cout << " " << "^^What do you desire^^" << endl;
			cout << " " << "-----------------------" << endl;
			cout << " " << "Press (B) for Bike" << endl;
			cout << " " << "Press (C) for Car" << endl;
			cout << " " << "Press (T) for Truck" << endl;
			char c;
			cout << "Enter: "; cin >> c;
			cout << endl;
			if(c != 'b' && c != 'B' && c != 'C' && c != 'c' && c != 't' && c != 'T')
			{
				while (c != 'b' && c != 'B' && c != 'C' && c != 'c' && c != 't' && c != 'T')
				{
					cout << "Error!" << endl;
					cout << "Press (B) for Bike" << endl;
					cout << "Press (C) for Car" << endl;
					cout << "Press (T) for Truck" << endl;
					cin >> c;
					cout << endl;
				}
			}
			obj.AddVehicle(c);
		}

		else if (choice == 'f' || choice == 'F')
		{
			char* t = new char[20];
			cout << "Enter vehicle Type: ";cin >> t;
			cout << endl;
			obj.SearchVehicle(t);
		}

		else if (choice == 'e' || choice == 'E')
		{
			char* fname = new char[50];
			int s = 0;
			cout << "Enter Filname (without Extension): ";cin >> fname;
			while (fname[s]!='\0')
			{
				s++;
			}
			fname[s] = '.'; fname[s + 1] = 't'; fname[s + 2] = 'x'; fname[s + 3] = 't'; fname[s + 4] = '\0';
			bool flag = obj.SaveData(fname);
			if (flag)
			{
				cout << "Data saved in file successfuly!" << endl;
			}
			else
			{
				cout << "File dose not exist!" << endl;
			}
		}

		else if (choice=='q'||choice=='Q')
		{
			Stop = 1;
		}

	} while (Stop != 1);
}


istream& operator>>(istream& inp, Bike& obj)
{
	obj.input(inp);
	return inp;
}

ostream& operator<<(ostream& out, const Bike& obj)
{
	obj.output(out);
	return out;
}

istream& operator>>(istream& inp, Car& obj)
{
	obj.input(inp);
	return inp;
}

ostream& operator<<(ostream& out, const Car& obj)
{
	obj.output(out);
	return out;
}

istream& operator>>(istream& inp, Truck& obj)
{
	obj.input(inp);
	return inp;
}

ostream& operator<<(ostream& out, const Truck& obj)
{
	obj.output(out);
	return out;
}