#include "SavingsAccount.h"

int Getsize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size += 1;
	return size;
}

SavingsAccount::SavingsAccount():BankAccount()
{
	InterestRate = 0;
}

SavingsAccount::SavingsAccount(double ir, char* num, char* name, double b) :BankAccount(name, num, b)
{
	InterestRate = ir;
}

SavingsAccount::SavingsAccount(SavingsAccount& obj) : BankAccount(obj)
{
	InterestRate = obj.InterestRate;
}

void SavingsAccount::calculateInterest()
{
	double b;
	b = AccBalance * InterestRate * 12;
	b = b / 100;
	AccBalance = AccBalance - b;
	cout << "Balace after interst Rate: " << AccBalance << endl;
}

void SavingsAccount::Deposit(double depo)
{
	AccBalance = AccBalance + depo;

}

void SavingsAccount::Widraw(double wdraw)
{
	if (AccBalance > wdraw)
	{
		AccBalance = AccBalance - wdraw;
	}
	else
	{
		cout << "Insufficient Balance To WithDraw" << endl;
	}
}

void SavingsAccount::Display()const
{
	cout << "Account Title: " << AccTitle<<endl;
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Balance: " << AccBalance << endl;
	/*cout << "Interest Rate: " << InterestRate << endl;*/
	cout << "-----------------------" << endl;
}

double SavingsAccount::GetInterestRate()const
{
	return InterestRate;
}

void SavingsAccount::SetInterestRate(double ir)
{
	InterestRate = ir;
}

SavingsAccount& SavingsAccount::operator=(const SavingsAccount& rhs)
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
	InterestRate = rhs.InterestRate;
	return *this;
}


bool SavingsAccount::operator==(const SavingsAccount& obj) const
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

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && InterestRate == obj.InterestRate)
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
bool SavingsAccount::operator!=(const SavingsAccount& obj) const
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

	if (length == length2 && length1 == length3 && AccBalance == obj.AccBalance && InterestRate == obj.InterestRate)
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