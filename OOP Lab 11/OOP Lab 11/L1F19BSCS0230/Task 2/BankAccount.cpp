#include "BankAccount.h"

int Getsize(char* arr)
{
	int size=0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

BankAccount::BankAccount()
{
	AccBalance =0;
	AccNum = nullptr;
	AccType = nullptr;
}

BankAccount::BankAccount(char* Num, double Bal, char* Typ)
{
	AccBalance = Bal;

	int s = Getsize(Num);
	AccNum = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccNum[i] = Num[i];
	}
	AccNum[s-1] = '\0';

	s = Getsize(Typ);
	AccType = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccType[i] = Typ[i];
	}
	AccType[s-1] = '\0';
}

BankAccount::BankAccount(BankAccount&obj)
{
	AccBalance = obj.AccBalance;

	int s = Getsize(obj.AccNum);
	AccNum = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccNum[i] = obj.AccNum[i];
	}
	AccNum[s-1] = '\0';

	s = Getsize(obj.AccType);
	AccType = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccType[i] = obj.AccType[i];
	}
	AccType[s-1] = '\0';
}

void BankAccount::SetAccType(char* Typ)
{
	int s = Getsize(Typ);
	AccType = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccType[i] = Typ[i];
	}
	AccType[s-1] = '\0';
}

void BankAccount::SetAccNum(char* Num)
{
	int s = Getsize(Num);
	AccNum = new char[s];
	for (int i = 0; i < s; i++)
	{
		AccNum[i] = Num[i];
	}
	AccNum[s-1] = '\0';
}

void BankAccount::SetAccBalance(double Bal)
{
	AccBalance = Bal;
}

char* BankAccount::GetAccType()const
{
	int s = Getsize(AccType);
	char* Typ = new char[s];
	for (int i = 0; i < s; i++)
	{
		Typ[i] = AccType[i];
	}
	Typ[s-1] = '\0';
	return Typ;
}

char* BankAccount::GetAccNum()const
{
	int s = Getsize(AccNum);
	char* Num = new char[s];
	for (int i = 0; i < s; i++)
	{
		  Num[i]=AccNum[i];
	}
	Num[s-1] = '\0';
	return Num;
}

double BankAccount::GetAccBalance()const
{
	return AccBalance;
}

void  BankAccount::operator+(int depo)
{
	cout << "+ Operator Called" << endl;
	AccBalance = AccBalance + depo;
}
void  BankAccount::operator-(int wdraw)
{
	cout << "- Operator Called" << endl;
	if (AccBalance > wdraw)
	{
		AccBalance = AccBalance - wdraw;
	}
	else
	{
		cout << "Insufficient Balance To WithDraw" << endl;
	}
}

void BankAccount::Display()const
{
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Type: " << AccType << endl;
	cout << "Account Balance: " << AccBalance << endl;
	cout << "-----------------------" << endl;
	cout << endl;
}

BankAccount::~BankAccount()
{
	delete[] AccType;
	AccType = nullptr;
	delete[]AccNum;
	AccNum = nullptr;
}