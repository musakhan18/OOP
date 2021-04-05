#include "MobileNetwork.h"

MobileNetwork::MobileNetwork()
{
	name = "Musa";
	number = "03310146517";
	type = "monthly";
	balance = 100.22;
	CallRate = 1.34;
}
MobileNetwork::MobileNetwork(string nam, string num, string typ, float bal, float cr)
{
	name = nam;
	number = num;
	type = typ;
	balance = bal;
	CallRate = cr;
}

void MobileNetwork::SetName(string N)
{
	name = N;
}

void MobileNetwork::SetNumber(string num)
{
	number = num;
}

void MobileNetwork::SetType(string ty)
{
	type = ty;
}

void MobileNetwork::SetBalance(float bal)
{
	balance = bal;
}

void MobileNetwork::SetCallRate(float cr)
{
	CallRate = cr;
}

string MobileNetwork::GetName()const
{
	return name;
}

string MobileNetwork::GetNumber()const
{
	return number;
}

string MobileNetwork::GetType()const
{
	return type;
}

float MobileNetwork::GetBalance()const
{
	return balance;
}

float MobileNetwork::GetCallRate()const
{
	return CallRate;
}

void MobileNetwork::Recharge(int amount)
{
	balance += amount;
	cout << "Balance Recharged Successfully!" << endl;
}

void MobileNetwork::Discharge(int amount)
{
	balance -= amount;
	cout << "Balance Discharged Successfully!" << endl;
}

float  MobileNetwork::CallCharges(int CallLen)
{
	Charges = CallLen * CallRate;
	cout << "Call Charges:" << Charges << endl;
	return Charges;
}

void MobileNetwork::CallBalance(int CallLen)
{
	Charges = CallLen * CallRate;
	balance -= Charges;
	cout << "Balance after Call: " << balance << endl;
}

void MobileNetwork::CheckBalance()
{
	cout << "Your Current Balance is: "<<balance << endl;
}

void MobileNetwork::Display()const
{
	cout << "-------------------------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Number: " << number << endl;
	cout << "Type: " <<type<< endl;
	cout << "Balance: " << balance << endl;
	cout << "Call Rate: " << CallRate << endl << endl;
}