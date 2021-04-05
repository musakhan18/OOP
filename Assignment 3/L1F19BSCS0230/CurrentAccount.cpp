#include "CurrentAccount.h"

CurrentAccount::CurrentAccount():CheckingAccount()
{
	MinimumBalance = 0;
}

CurrentAccount::CurrentAccount(double fee, double miniB, char* n, char* t, double b) :CheckingAccount(fee, t, n, b)
{
	MinimumBalance = miniB;
}
CurrentAccount::CurrentAccount(CurrentAccount& obj) : CheckingAccount(obj)
{
	MinimumBalance = obj.MinimumBalance;
}
void CurrentAccount::Display()const
{
	cout << "Account Title:" << AccTitle << endl;
	cout << "Account Number :" << AccNum << endl;
	cout << "Account Balance :" << AccBalance << endl;
}
void CurrentAccount::Deposit(double d)
{
	if (d > MinimumBalance)
	{
		double dg = GetFee();
		AccBalance +=  d;
		AccBalance -= dg;
		cout << "Service Charges are: " << dg << endl;
		cout << "Balance After Deduction of Service Charges: " << AccBalance << endl;
	}
	else
	{
		cout << "Insuffient Deposit amount";
	}
}
void CurrentAccount::Widraw(double w)
{
	double min = AccBalance - w;

	if (AccBalance > MinimumBalance)
	{
		if (min > MinimumBalance)
		{
			double dg = GetFee();
			double t = w + dg;
			if (AccBalance > t)
			{
				AccBalance = AccBalance - t;
				cout << "Service Charges are: " << dg << endl;
				cout << "Balance After Deduction of Service Charges: " << AccBalance << endl;
			}
			else
			{
				cout << "Not Enough Balance Present in Account";
			}
		}
		else
		{
			cout << "Insufficency"<<endl;
		}
	}
	else
	{
		cout << "Insufficency"<<endl;
	}
}
void CurrentAccount::SetMinimumBalance(double mb)
{
	MinimumBalance = mb;
}
double CurrentAccount::GetMinimumBalance()const
{
	return MinimumBalance;
}

CurrentAccount& CurrentAccount::operator=(const CurrentAccount& rhs)
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
	/*charges = rhs.charges;*/
	MinimumBalance = rhs.MinimumBalance;
	return *this;
}


bool CurrentAccount::operator==(const CurrentAccount& obj) const
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

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && MinimumBalance == obj.MinimumBalance && f == obj.CheckingAccount::GetFee())
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
bool CurrentAccount::operator!=(const CurrentAccount& obj) const
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
	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && MinimumBalance == obj.MinimumBalance && f == obj.CheckingAccount::GetFee())
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
