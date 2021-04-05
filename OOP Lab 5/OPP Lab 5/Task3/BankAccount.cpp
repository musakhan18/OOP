#include "BankAccount.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

BankAccount::BankAccount()
{
	AccBalance = 0;
	AccNum = 12345;
	AccTitle = new char[10]{ "xxxxxx" };
	AccType = new char[10]{ "Saving" };
}

BankAccount::BankAccount(int Num, int Bal, char* Title, char* Type)
{
	AccBalance = Bal;
	AccNum = Num;
	AccTitle = Title;
	AccType = Type;
}

BankAccount::BankAccount(BankAccount& Obj)
{
	AccBalance = Obj.AccBalance;
	AccNum = Obj.AccNum;
	AccTitle = Obj.AccTitle;
	AccType = Obj.AccType;
}

void  BankAccount::SetAccTitle(char* Name)
{
	AccTitle = Name;
}

void  BankAccount::SetAccType(char* Type)
{
	AccType = Type;
}

void  BankAccount::SetAccNum(int Num)
{
	AccNum = Num;
}

void  BankAccount::SetAccBalance(int Bal)
{
	AccBalance = Bal;
}

char* BankAccount::GetAccTitle()const
{
	return AccTitle;
}

char* BankAccount::GetAccType()const
{
	return AccType;
}

int  BankAccount::GetAccNum()const
{
	return AccNum;
}

int  BankAccount::GetAccBalance()const
{
	return AccBalance;
}

int  BankAccount::Widraw(int W)
{
	AccBalance -= W;
	return AccBalance;
}

int  BankAccount::Deposit(int D)
{
	AccBalance += D;
	return AccBalance;
}

void BankAccount::WriteData()
{
	ofstream file;
	file.open("Accounts.txt",ios::app);
	file << AccTitle << " " << AccNum << " " << AccType << " " << AccBalance << endl;
	file.close();
}

void BankAccount::DeleteData()
{
	ofstream file;
	file.open("Accounts.txt", ios::trunc);
	file.close();
}

void  BankAccount::Display()
{
	cout << "-----------------------" << endl;
	cout << "Account Title: " << AccTitle << endl;
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Type: " << AccType << endl;
	cout << "Account Balance: " << AccBalance << endl;
	cout << "-----------------------" << endl;
	cout << endl;
}