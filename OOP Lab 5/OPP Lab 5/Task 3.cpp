#include<iostream>
#include<string>
#include"BankAccount.h"

void Menu(BankAccount&);

using namespace std;
int main()
{
	char* DefName = new char[20]{ 'M','u','s','a','\0' };
	char* DefType = new char[20]{ 'C','u','r','r','e','n','t','\0' };

	BankAccount Acc;
	cout << "Output of Default Constructor" << endl;
	Acc.Display();

	BankAccount Acc2(1234, 0, DefName, DefType);
	cout << "Output of Parameterized Constructor" << endl;
	Acc2.Display();

	BankAccount Acc3(Acc2);
	cout << "Output of copy Constructor" << endl;
	Acc3.Display();

	char* name = new char[50]; char* type = new char[50];
	int num, Bal, choice, Dep;
	cout << "Enter Account Title (Name): "; cin >> name;
	cout << "Enter Account Number: "; cin >> num;
	cout << "Enter account Type: "; cin >> type;
	cout << "Enter Account Balance: "; cin >> Bal;
	cout << endl;
	Acc.SetAccBalance(Bal);
	Acc.SetAccNum(num);
	Acc.SetAccTitle(name);
	Acc.SetAccType(type);

	Acc3.SetAccBalance(1200);
	Acc3.SetAccNum(4747);
	Acc3.SetAccTitle(DefName);
	Acc3.SetAccType(DefType);
	
	char* TempName = new char[20]{ 'T','a','h','a','\0' };
	char* TempType = new char[20]{ 'S','a','v','i','n','g','\0' };
	Acc2.SetAccBalance(1200);
	Acc2.SetAccNum(4747);
	Acc2.SetAccTitle(TempName);
	Acc2.SetAccType(TempType);
	
	Acc.WriteData();
	Acc2.WriteData();
	Acc3.WriteData();
	cout << "Data Successfully Saved in File!\n" << endl;

	cout << "Which Account You Want to Edit" << endl;
	cout << "Press 1 for Account 1" << endl;
	cout << "Press 2 for Account 2" << endl;
	cout << "Press 3 for Account 3" << endl;
	int c;
	cin >> c;
	if (c==1)
	{
		Menu(Acc);
	}
	else if (c == 2)
	{
		Menu(Acc2);
	}
	else if (c == 3)
	{
		Menu(Acc3);
	}
	Acc.DeleteData();
	Acc.WriteData();
	Acc2.WriteData();
	Acc3.WriteData();
	cout << "\nData Successfully Saved in File!" << endl;
}

void Menu(BankAccount& Obj)
{
	int choice,Dep;
	cout << "Choose Your Task" << endl;
	cout << "Press 1 For Deposit" << endl;
	cout << "Press 2 For Withdraw" << endl;
	cout << "Press 3 To Change Account Type" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter Amount To Deposit: "; cin >> Dep;
		int bal=Obj.Deposit(Dep);
		Obj.SetAccBalance(bal);
	}
	else if (choice == 2)
	{
		cout << "Enter Amount To Withdraw: "; cin >> Dep;
		int bal=Obj.Widraw(Dep);
		Obj.SetAccBalance(bal);
	}
	else if (choice == 2)
	{
		char* type = new char[50];
		cout << "Enter account Type: "; cin >> type;
		Obj.SetAccType(type);
	}
}