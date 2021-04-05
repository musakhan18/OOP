#include "CheckingAccount.h"

CheckingAccount::CheckingAccount():BankAccount()
{
	Fee = 0;
}

CheckingAccount::CheckingAccount(double f, char* t, char* n, double b) :BankAccount(t, n, b)
{
	Fee = f;
}

void CheckingAccount::SetFee(double f)
{
	Fee = f;
}

double CheckingAccount::GetFee()const
{
	return Fee;
}

void CheckingAccount::Deposit(double depo)
{
	AccBalance += depo;
	AccBalance -= Fee;
	cout << "Service Charges are: " << Fee << endl;
	cout << "Balance After Deduction of Service Charges: " << AccBalance << endl;
}

void CheckingAccount::Widraw(double wdraw)
{
	double t = wdraw + Fee;
	if (AccBalance > t)
	{
		AccBalance -= t;
		cout << "Service Charges are: " << Fee << endl;
		cout << "Balance After Deduction of Service Charges: " << AccBalance << endl;
	}
	else
	{

		cout << endl << "INSUFFICIENT AMOUNT OF BALANCE" << endl;
	}
}
void CheckingAccount::Display()const
{
	cout << "Account Title: " << AccTitle << endl;
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Balance: " << AccBalance << endl;
	/*cout << "Fee: "<<Fee << endl;*/
	cout << "-----------------------" << endl;
}

CheckingAccount& CheckingAccount::operator=(const CheckingAccount& rhs)
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
	Fee = rhs.Fee;
	return *this;
}


bool CheckingAccount::operator==(const CheckingAccount& obj) const
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

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && Fee == obj.Fee)
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
bool CheckingAccount::operator!=(const CheckingAccount& obj) const
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

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && Fee == obj.Fee)
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