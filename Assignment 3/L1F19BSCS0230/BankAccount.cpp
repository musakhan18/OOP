#include "BankAccount.h"

int GetSize(char* arr)
{
	int size = 0;
	while (arr[size]!='\0')
	{
		size++;
	}
	size += 1;
	return size;
}

BankAccount::BankAccount()
{
	AccTitle = nullptr;
	AccNum = nullptr;
	AccBalance = 0;
}

BankAccount::BankAccount(char* Title, char* Num, double bal)
{
	AccBalance = bal;

	int size = GetSize(Num);
	AccNum = new char [size];
	for (int i = 0; i < size; i++)
	{
		AccNum[i] = Num[i];
	}
	AccNum[size - 1] = '\0';

	size = GetSize(Title);
	AccTitle = new char[size];
	for (int i = 0; i < size; i++)
	{
		AccTitle[i] = Title[i];
	}
	AccTitle[size - 1] = '\0';
}

BankAccount::BankAccount(const BankAccount& obj)
{
	int size = GetSize(obj.AccTitle);
	AccTitle = new char[size];
	for (int i = 0; i < size; i++)
	{
		AccTitle[i] = obj.AccTitle[i];
	}
	AccTitle[size - 1] = '\0';

	 size = GetSize(obj.AccNum);
	AccNum = new char[size];
	for (int i = 0; i < size; i++)
	{
		AccNum[i] = obj.AccNum[i];
	}
	AccNum[size - 1] = '\0';

	AccBalance = obj.AccBalance;
}

void BankAccount::SetAccTitle(char* Name)
{
	int size = GetSize(Name);
	AccTitle = new char[size];
	for (int i = 0; i < size; i++)
	{
		AccTitle[i] = Name[i];
	}
	AccTitle[size - 1] = '\0';
}

void BankAccount::SetAccNum(char* Num)
{
	int size = GetSize(Num);
	AccNum = new char[size];
	for (int i = 0; i < size; i++)
	{
		AccNum[i] = Num[i];
	}
	AccNum[size - 1] = '\0';
}

void BankAccount::SetAccBalance(double Bal)
{
	AccBalance = Bal;
}

char* BankAccount::GetAccTitle()const
{
	int s = GetSize(AccTitle);
	char*Name = new char[s];
	for (int i = 0; i < s; i++)
	{
		Name[i] = AccTitle[i];
	}
	Name[s-1] = '\0';
	return Name;
}

char* BankAccount::GetAccNum()const
{
	int size = GetSize(AccNum);
	char*Num = new char[size];
	for (int i = 0; i < size; i++)
	{
		Num[i] = AccNum[i];
	}
	Num[size - 1] = '\0';
	return Num;
}

double BankAccount::GetAccBalance()const
{
	return AccBalance;
}

//void  BankAccount::Deposit(int depo)
//{
//	AccBalance = AccBalance + depo;
//}
//void BankAccount::Widraw(int wdraw)
//{
//
//	if (AccBalance > wdraw)
//	{
//		AccBalance = AccBalance - wdraw;
//	}
//	else
//	{
//		cout << "Insufficient Balance To WithDraw" << endl;
//	}
//}
//
//void BankAccount::Display()const
//{
//	cout << endl;
//	cout << "-----------------------" << endl;
//	cout << "Account Title: " << AccTitle << endl;
//	cout << "Account Number: " << AccNum << endl;
//	cout << "Account Balance: " << AccBalance << endl;
//	cout << "Account Date Of Opening: " << dateOfOpening << endl;
//}

BankAccount::~BankAccount()
{
	delete[] AccTitle;
	AccTitle = nullptr;
	delete[]AccNum;
	AccNum = nullptr;
}