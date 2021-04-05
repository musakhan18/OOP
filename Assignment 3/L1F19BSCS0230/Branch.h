#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "CurrentAccount.h"
#include "InvestmentAccount.h"
#include <iostream>
using namespace std;
class Branch
{
private:
	
	int ArrSize;
	double TotalBalance;
public:
	BankAccount** AccountsArray;
	Branch();
	Branch(int,double);
	Branch(Branch&);
	int GetSize();
	double GetAccBalance();
	BankAccount** GetArray();
	const BankAccount* operator[](int index)const;
	BankAccount* operator[](int index);
	Branch& operator=(const Branch& rhs);
	bool operator==(Branch&);
	bool operator!=(Branch&);
	void AddAccount();
	void DeleteAccount(char*);
	void UpdateAccount(char*);
	void FindAccountTitle(char*);
	void FindAccountNumber(char*);
	int Menu();
	~Branch();
};

