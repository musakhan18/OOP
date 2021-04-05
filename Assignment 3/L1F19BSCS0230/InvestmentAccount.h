#pragma once
#include"CurrentAccount.h"

class InvestmentAccount :public CurrentAccount
{
private:
	double Profit;
public:
	InvestmentAccount();
	InvestmentAccount(double, double , double , char* , char* , double );
	InvestmentAccount(InvestmentAccount&);
	void SetProfit(double);
	double GetProfit();
	void Deposit(double);
	void Widraw(double);
	void Display()const;
	InvestmentAccount& operator=(const InvestmentAccount& rhs);
	bool operator==(const InvestmentAccount&) const;
	bool operator!=(const InvestmentAccount&) const;
};

