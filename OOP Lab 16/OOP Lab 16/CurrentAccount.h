#pragma once
#include"Account.h"
class CurrentAccount:public Account
{
private:
	int chekcing_fees;
public:
	CurrentAccount();
	CurrentAccount(double,int);
	CurrentAccount(const CurrentAccount& obj);
	~CurrentAccount();
	bool debit(double);
	void setfees(int);
	int getfees();
	void credit(double);
};

