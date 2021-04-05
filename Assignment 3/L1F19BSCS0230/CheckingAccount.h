#pragma once
#include<iostream>
#include"BankAccount.h"
using namespace std;

class CheckingAccount:public BankAccount
{
private:
	double Fee;
public:
	CheckingAccount();
	CheckingAccount(double, char*, char*, double);
	void SetFee(double);
	double GetFee()const;
	void Deposit(double);
	void Widraw(double);
	void Display()const;
	CheckingAccount& operator=(const CheckingAccount& rhs);
	bool operator==(const CheckingAccount&) const;
	bool operator!=(const CheckingAccount&) const;
};

