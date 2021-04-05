#pragma once
#include<iostream>
using namespace std;
class BankAccount
{
private:
	char* AccNum;
	double AccBalance;
	char* AccType;
public:
	BankAccount();
	BankAccount(char*, double, char*);
	BankAccount(BankAccount&);
	void SetAccType(char*);
	void SetAccNum(char*);
	void SetAccBalance(double);
	char* GetAccType()const;
	char* GetAccNum()const;
	double GetAccBalance()const;
	void operator + (int);
	void operator - (int);
	void Display()const;
	~BankAccount();
};

