#include "InvestmentAccount.h"

InvestmentAccount::InvestmentAccount()
{
	Profit = 0;
}

InvestmentAccount::InvestmentAccount(double pr, double chr, double minB, char* t, char* no, double b) :CurrentAccount(chr, minB, no, t, b)
{
	Profit = pr;
}

InvestmentAccount::InvestmentAccount(InvestmentAccount& obj) : CurrentAccount(obj)
{
	Profit = obj.Profit;
}

void InvestmentAccount::SetProfit(double pf)
{
	Profit = pf;
}

double InvestmentAccount::GetProfit()
{
	return Profit;
}

void InvestmentAccount::Deposit(double b)
{
	double pp;
	pp = (Profit *AccBalance) / 100;
	AccBalance += b;
	AccBalance -= pp;
	double dg = GetFee();
	AccBalance -=  dg;
	cout << "Balance After Percent Profit: " << AccBalance << endl;
}

void InvestmentAccount::Widraw(double w)
{
	if (AccBalance > w)
	{
		AccBalance -= w;
		double pp;
		pp = (Profit * AccBalance) / 100;
		AccBalance -= pp;
		double dg = GetFee();
		AccBalance -= dg;
		cout << "Balance After Percent Profit: " << AccBalance << endl;
	}
	else
	{
		cout << "Insufficient Balance" << endl;
	}
}

void InvestmentAccount::Display()const
{
	cout << "Account Title: " << AccTitle << endl;
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Balance: " << AccBalance << endl;
}

InvestmentAccount& InvestmentAccount::operator=(const InvestmentAccount& rhs)
{
	int length = 0;
	while (rhs.AccTitle[length] != '\0')
		++length;
	AccTitle = new char[length + 1];
	for (int i = 0; i < length; ++i)
		AccTitle[i] = rhs.AccTitle[i];
	AccTitle[length] = '\0';
	int length1 = 0;
	while (rhs.AccNum[length1] != '\0')
		++length1;
	AccNum = new char[length1 + 1];
	for (int i = 0; i < length1; ++i)
		AccNum[i] = rhs.AccNum[i];
	AccNum[length1] = '\0';
	AccBalance = rhs.AccBalance;
	double f = GetFee();
	CheckingAccount::SetFee(f);
	double ff = GetMinimumBalance();
	CurrentAccount::SetMinimumBalance(ff);
	Profit = rhs.Profit;
	return *this;
}


bool InvestmentAccount::operator==(const InvestmentAccount& obj) const
{
	int length = 0;
	while (obj.AccTitle[length] != '\0')
		++length;

	int length1 = 0;
	while (obj.AccNum[length1] != '\0')
		++length1;


	int length2 = 0;
	while (this->AccTitle[length2] != '\0')
		++length2;

	int length3 = 0;
	while (this->AccNum[length3] != '\0')
		++length3;

	bool flag = false;
	double f = GetFee();
	double ff = GetMinimumBalance();
	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && ff == obj.CurrentAccount::GetMinimumBalance() && f == obj.CheckingAccount::GetFee() &&Profit==obj.Profit)
	{
		for (int i = 0; i < length; i++)
		{
			if (AccTitle[i] == obj.AccTitle[i] && AccNum[i] == obj.AccNum[i])
			{
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
		}
	}
	else
	{
		flag = false;
	}
	return flag;
}
bool InvestmentAccount::operator!=(const InvestmentAccount& obj) const
{
	int length = 0;
	while (obj.AccTitle[length] != '\0')
		++length;

	int length1 = 0;
	while (obj.AccNum[length1] != '\0')
		++length1;


	int length2 = 0;
	while (this->AccTitle[length2] != '\0')
		++length2;

	int length3 = 0;
	while (this->AccNum[length3] != '\0')
		++length3;
	bool flag = false;

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance )
	{
		for (int i = 0; i < length; i++)
		{
			if (AccTitle[i] == obj.AccTitle[i] && AccNum[i] == obj.AccNum[i])
			{
				flag = false;
				break;
			}
			else
			{
				flag = true;
			}
		}
	}
	else
	{
		flag = true;
	}

	return flag;
}