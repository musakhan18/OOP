#pragma once
#include<iostream>
using namespace std;

class BankAccount
{
public:
	char* AccTitle; 
	char* AccNum;
	double AccBalance;
	BankAccount();
    BankAccount(char* , char*, double );
	BankAccount(const BankAccount&);
	void SetAccTitle(char*);
	void SetAccNum(char*);
	void SetAccBalance(double);
	char* GetAccTitle()const;
	char* GetAccNum()const;
	double GetAccBalance()const;
	virtual void Deposit(double)=0;
	virtual void Widraw(double)=0;
	virtual void Display()const=0;
	~BankAccount();
};

