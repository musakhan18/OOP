#pragma once
#include<string>
using namespace std;
class HBL_Management_Sys
{
private:
	char* AccTitle; char* AccType;
	int AccNum, AccBalance;
public:
	HBL_Management_Sys(int, int, char*, char*);//Constructor
	void SetAccTitle(char*);//Function To Set Account Title
	void SetAccType(char*);//Function To Set Account Type
	void SetAccNum(int);//Function To Set Account Number
	void SetAccBalance(int);//Function To Set Account Balance
	char* GetAccTitle();//Function To Get Account Title
	char* GetAccType();//Function To Get Account Type
	int GetAccNum();//Function To Get Account Number
	int GetAccBalance();//Function To Get Account Balance
	int Deposit(int);//Function To Deposite Amount
	int Widraw(int);//Function To Withdrow Amount
	void Display();//Function To Display Account Details
};

