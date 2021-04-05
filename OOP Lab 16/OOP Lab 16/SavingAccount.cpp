#include "SavingAccount.h"
#include<iostream>
using namespace std;
SavingAccount::SavingAccount():Account()
{
	Interest_rate = 0.1;
}
SavingAccount::SavingAccount(double b, float ir):Account(b)
{
	Interest_rate = ir;
}
SavingAccount::SavingAccount(const SavingAccount& obj) : Account(obj)
{
	Interest_rate = obj.Interest_rate;
}
SavingAccount::~SavingAccount()
{
	cout << "\nSaving Account Destructor\n";
}
//void SavingAccount::credit(double b)
//{
//	if (b >= 0.0)
//	{
//		balance = balance + b;
//	}
//	else
//	{
//		cout << "\nAmound to be deposited is should be greater than 0\n";
//	}
//}
//void SavingAccount::debit(double b)
//{
//	if (b < balance)
//	{
//		balance = balance - b;
//	}
//	else
//	{
//		cout << "\nInsufficient Amount OF Balance\n";
//		cout << "\nYour withdrawl amount is larger than Account balance\n";
//	}
//}
double SavingAccount::calculateInterest()
{
	float var = Interest_rate / 100;
	var = var * balance;
	cout << "\nInterest Amount On saving Account Balance :";
	cout << var;
	return var;

}
void SavingAccount::setInterest(float ir)
{
	Interest_rate = ir;
}
float SavingAccount::getInterest()
{
	return  Interest_rate;
}