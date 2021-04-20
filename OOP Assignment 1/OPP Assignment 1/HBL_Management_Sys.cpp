#include "HBL_Management_Sys.h"
#include<iostream>
#include<string>
using namespace std;

HBL_Management_Sys::HBL_Management_Sys(int Num, int Bal, char* Title, char* Type)
{
	AccBalance = Bal;
	AccNum = Num;
	AccTitle = Title;
	AccType = Type;
}

void HBL_Management_Sys::SetAccTitle(char* Name)
{
	AccTitle = Name;
}

void HBL_Management_Sys::SetAccType(char* Type)
{
	AccType = Type;
}

void HBL_Management_Sys::SetAccNum(int Num)
{
	AccNum = Num;
}

void HBL_Management_Sys::SetAccBalance(int Bal)
{
	AccBalance = Bal;
}

char* HBL_Management_Sys::GetAccTitle()
{
	return AccTitle;
}

char* HBL_Management_Sys::GetAccType()
{
	return AccType;
}

int HBL_Management_Sys::GetAccNum()
{
	return AccNum;
}

int HBL_Management_Sys::GetAccBalance()
{
	return AccBalance;
}

int HBL_Management_Sys::Widraw(int W)
{
	AccBalance -= W;
	return AccBalance;
}

int HBL_Management_Sys::Deposit(int D)
{
	AccBalance += D;
	return AccBalance;
}

void HBL_Management_Sys::Display()
{
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "Account Title: " << AccTitle << endl;
	cout << "Account Number: " << AccNum << endl;
	cout << "Account Type: " << AccType << endl;
	cout << "Account Balance: " << AccBalance << endl;
	cout << "-----------------------" << endl;
}