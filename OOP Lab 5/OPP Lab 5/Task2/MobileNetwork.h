#pragma once
#include<iostream>
#include<string>
using namespace std;

class MobileNetwork
{
private:
	string name, number, type;
	float  balance,CallRate;
	float Charges;

public:
	MobileNetwork();
	MobileNetwork(string, string, string, float, float);
	void SetName(string);
	void SetNumber(string);
	void SetType(string);
	void SetBalance(float);
	void SetCallRate(float);
	string GetName()const;
	string GetNumber()const;
	string GetType()const;
	float GetBalance()const;
	float GetCallRate()const;
	void Display()const;
	void Recharge(int);
	void Discharge(int);
	float  CallCharges(int);//function to calculate Call Charges
	void  CheckBalance();//function to check balance
	void CallBalance(int);//function to calculate balance after call
};

