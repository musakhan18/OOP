#include<iostream>
#include<string>
#include"HBL_Management_Sys.h"
using namespace std;
int main()
{
	char* DefName = new char[20]{ 'M','u','s','a','\0' };
	char* DefType = new char[20]{ 'C','u','r','r','e','n','t','\0' };
	HBL_Management_Sys Acc(1234, 0, DefName, DefType);
	cout << "Defult Values" << endl;
	Acc.Display();
	cout << endl;
	char* name = new char[50];char* type=new char[50];
	int num, Bal,choice,Dep;
	cout << "Enter Account Title (Name): "; cin>> name;
	cout << "Enter Account Number: "; cin >> num;
	cout << "Enter account Type: "; cin>> type;
	cout << "Enter Account Balance: "; cin >> Bal;
	Acc.SetAccBalance(Bal);
	Acc.SetAccNum(num);
	Acc.SetAccTitle(name);
	Acc.SetAccType(type);
	cout << "Press 1 For Deposit" << endl;
	cout << "Press 2 For Withdraw" << endl;
	cout << "Press 3 To Continue" << endl;
	cin >> choice;
	if (choice==1)
	{
		cout << "Enter Amount To Deposit: "; cin >> Dep;
		Acc.Deposit(Dep);
	}
	else if (choice == 2)
	{
		cout << "Enter Amount To Withdraw: "; cin >> Dep;
		Acc.Widraw(Dep);
	}
	Acc.Display();
}
