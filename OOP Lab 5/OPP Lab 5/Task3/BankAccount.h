#pragma once
#include<string>
#include<fstream>
using namespace std;
class BankAccount
{
private:
	char* AccTitle; char* AccType;
	int AccNum, AccBalance;
public:
	BankAccount();//default Constructor
	BankAccount(int, int, char*, char*);//Parameterized Constructor
	BankAccount(BankAccount&);//copy constructor
	void SetAccTitle(char*);//Function To Set Account Title
	void SetAccType(char*);//Function To Set Account Type
	void SetAccNum(int);//Function To Set Account Number
	void SetAccBalance(int);//Function To Set Account Balance
	char* GetAccTitle()const;//Function To Get Account Title
	char* GetAccType()const;//Function To Get Account Type
	int GetAccNum()const;//Function To Get Account Number
	int GetAccBalance()const;//Function To Get Account Balance
	int Deposit(int);//Function To Deposite Amount
	int Widraw(int);//Function To Withdrow Amount
	void WriteData();
	void DeleteData();
	void Display();//Function To Display Account Details
};

