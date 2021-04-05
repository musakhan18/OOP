#pragma once
#include"CheckingAccount.h"
class CurrentAccount :public CheckingAccount
{
private:
	double MinimumBalance;
public:
	CurrentAccount();
	CurrentAccount(double , double , char* , char* , double);
	CurrentAccount(CurrentAccount& obj);
	void SetMinimumBalance(double);
	double GetMinimumBalance()const;
	void Deposit(double);
	void Widraw(double);
	void Display()const;
	CurrentAccount& operator=(const CurrentAccount& rhs);
	bool operator==(const CurrentAccount&) const;
	bool operator!=(const CurrentAccount&) const;
};
