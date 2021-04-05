#include "Account.h"
#include<iostream>
using namespace std;
Account::Account()
{
	balance = 100.12;
}
Account::Account(double b)
{
	if (b >=0.0 )
	{
		balance = b;
	}
	else
	{
		cout << "\nAmound to be deposited is should be greater than 0\n";
		balance = 0.0;
	}
}
Account::Account(const Account& obj)
{
	balance = obj.balance;
}
Account::~Account()
{
	cout << "\nAccount Destructor\n";
}
void Account::credit(double b)
{
	if (b >= 0.0)
	{
		balance = balance + b;
	}
	else
	{
		cout << "\nAmound to be deposited is should be greater than 0\n";
	}
}
bool Account::debit(double b)
{
	bool flag = false;
	if (b < balance)
	{
		balance = balance - b;
		flag = true;
	}
	else
	{
		cout << "\nInsufficient Amount OF Balance\n";
		cout << "\nYour withdrawl amount is larger than Account balance\n";
	}
	return flag;
}
void Account::set_balance(double b)
{
	if (b >= 0.0)
	{
		balance = b;
	}
	else
	{
		cout << "\nAmound to be set in Account Balance is should be greater than 0\n";
	}
}
double Account::get_balance()
{
	return balance;
}