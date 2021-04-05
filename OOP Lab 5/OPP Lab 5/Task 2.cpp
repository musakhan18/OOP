#include<iostream>
#include<string>
#include"MobileNetwork.h"
using namespace std;

int Menu();

int main()
{
	string name, number, type;
	float  balance, CallRate;
	int amount,len;
	MobileNetwork Obj;
	cout << "Output of Default Constructor" << endl;
	Obj.Display();
	MobileNetwork Obj2("taha", "03164589757", "weekly", 200, 2.33);
	cout << "Output of parameterized  Constructor" << endl;
	Obj2.Display();

	cout << "Enter Name: "; cin >> name ;
	cout << "Enter Mobile Number: "; cin >> number ;
	cout << "Enter Package Type (daily/weekly/monthly): "; cin >> type;
	cout << "Enter Mobile Balance: "; cin >> balance;
	cout << "Enter Call Rate: ";cin>> CallRate;
	cout << "Enter Call Lenght: "; cin >> len;
	Obj.CallBalance(len);

	Obj.SetBalance(balance);
	Obj.SetCallRate(CallRate);
	Obj.SetName(name);
	Obj.SetNumber(number);
	Obj.SetType(type);

	int Choice = Menu();

	if (Choice==1)
	{
		cout << "Add amount to recharge: "; cin >> amount;
		Obj.Recharge(amount);
	}

	else if (Choice==2)
	{
		cout << "Add amount to Discharge: "; cin >> amount;
		Obj.Discharge(amount);
	}

	else if (Choice==3)
	{
		Obj.CallCharges(len);
	}

	else if (Choice == 4)
	{
		Obj.CheckBalance();
	}

		Obj.Display();
}

int Menu()
{
	cout << endl;
	int C;
	cout << "Choose your task" << endl;
	cout << "Press 1 to Recharge" << endl;
	cout << "Press 2 to Discharge"<<endl;
	cout << "Press 3 to See Call Charges"<<endl;
	cout << "Press 4 to Check Balance"<<endl;
	cin >> C;
	return C;
}