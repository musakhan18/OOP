#pragma once
#include"Account.h"
class SavingAccount:public Account
{
private:
	float Interest_rate;
public:
	SavingAccount();
	SavingAccount(double, float);
	SavingAccount(const SavingAccount&);
	~SavingAccount();
	//void credit(double);
	//void debit(double);
	double calculateInterest();
	void setInterest(float);
	float getInterest();
};

