#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "CurrentAccount.h"
#include "InvestmentAccount.h"
#include "Branch.h"
using namespace std;

void Display(Branch obj)
{
	for (int i = 0; i < obj.GetSize(); i++) 
	{
		cout << "Account# " << i + 1 << endl;
		obj.AccountsArray[i]->Display();
	}
	cout << "Total Balance Of Accounts: " << obj.GetAccBalance() << endl;
	cout << endl;
}

int main()
{
	Branch obj;
	bool Stop = 0;
	int choice = 0;
	do
	 {
		choice=obj.Menu();
		cout << endl;
		if (choice == 1) 
		{
			obj.AddAccount();
		}
		if (choice == 2) {
			char* title = new char[20];
			cout << "Enter Account Title: ";cin >> title;
			cout << endl;
			obj.DeleteAccount(title);
		}
		if (choice == 3) 
		{
			char* title = new char[20];
			cout << "Enter Account Title You Want To Update: ";cin >> title;
			cout << endl;
			obj.UpdateAccount(title);
		}
		if (choice == 4) 
		{
			char* accnum = new char[20];
			cout << "Enter Account Number You Want To Find: ";cin >> accnum;
			cout << endl;
			obj.FindAccountNumber(accnum);
		}
		if (choice == 5) 
		{
			char* title = new char[20];
			cout << "Enter Account Title You Want To Find: ";cin >> title;
			cout << endl;
			obj.FindAccountTitle(title);
		}
		if (choice == 6)
		{
			Display(obj);
		}
		if (choice == 0) 
		{
			Stop=1;
		}
	} while (!Stop);

	return 0;
}