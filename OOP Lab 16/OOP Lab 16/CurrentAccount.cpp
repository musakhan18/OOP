#include<iostream>
using namespace std;
#include "CurrentAccount.h"
CurrentAccount::CurrentAccount():Account()
{
	chekcing_fees = 16;
}
CurrentAccount::CurrentAccount(double b, int cf) : Account(b)
{
	chekcing_fees = cf;
}
CurrentAccount::CurrentAccount(const CurrentAccount& obj) : Account(obj)
{
	chekcing_fees = obj.chekcing_fees;
}
CurrentAccount::~CurrentAccount()
{
	cout << "\nCurrent Accoutn Destructor\n";
	chekcing_fees = 0;
}
void CurrentAccount::credit(double b)
{
	if (b >= 0.0)
	{
		cout << "\nAmount Deposited :" << b<<endl;
		balance = balance + b;
		cout << "\nBAlance after Depositing Amount :" << balance << endl;
		balance = balance - chekcing_fees;
	}
	else
	{
		cout << "\nAmound to be deposited is should be greater than 0\n";
	}
}
void CurrentAccount::setfees(int f)
{
	chekcing_fees = f;

}
int CurrentAccount::getfees()
{
      return  chekcing_fees;
}
bool CurrentAccount::debit(double b)
{
	bool flag = false;
	if (b < balance)
	{
		flag = true;
		balance = balance - b;
	}
	else
	{
		cout << "\nYour Original Account Balance :" << balance;
		cout << "\nInsufficient Amount OF Balance\n";
		cout << "\nYour withdrawl amount is larger than Account balance\n";
	}

	if (flag == true)
	{
		balance = balance - chekcing_fees;
	}
	return flag;
}