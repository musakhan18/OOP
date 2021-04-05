#include "Client.h"

int getSize(char* arr)
{
	int size = 0;
	while (arr[size]!='\0')
	{
		size++;
	}
	return size+1;
}

Client::Client():Person()
{
	employeement = nullptr;
}

Client::Client(char* N, char* C, char* A, char* E, BankAccount& obj) : Person(N, C, A)
{
	int s = getSize(E);
	employeement = new char[s];
	for (int i = 0; i < s; i++)
	{
		employeement[i] = E[i];
	}
	employeement[s-1] = '\0';

	char* num = obj.GetAccNum();
	account.SetAccNum(num);
	char* typ = obj.GetAccType();
	account.SetAccType(typ);
	double bal = obj.GetAccBalance();
	account.SetAccBalance(bal);
}

void Client::SetEmployeement(char* E)
{
	int s = getSize(E);
	employeement = new char[s];
	for (int i = 0; i < s; i++)
	{
		employeement[i] = E[i];
	}
	employeement[s] = '\0';
}

void Client::SetAccount(BankAccount& obj)
{
	char* num = obj.GetAccNum();
	account.SetAccNum(num);
	char* typ = obj.GetAccType();
	account.SetAccType(typ);
	double bal = obj.GetAccBalance();
	account.SetAccBalance(bal);
}

char* Client::GetEmployeement()const
{
	int s = getSize(employeement);
	char* e = new char[s];
	for (int i = 0; i < s; i++)
	{
		  e[i]= employeement[i];
	}
	e[s] = '\0';
	return e;
}

void Client::UpdateAccountInfo()
{
	int c;
	cout << "What you want to update" << endl;
	cout << "Press 1 for Account No." << endl;
	cout << "Press 2 for Account Type" << endl;
	cout << "Press 3 for Account Balance" << endl;
	cin >> c;
	if (c > 3 || c < 0)
	{
		while (c > 3 || c < 0)
		{
			cout << "Error!!" << endl;
			cout << "What you want to update" << endl;
			cout << "Press 1 for Account No." << endl;
			cout << "Press 2 for Account Type" << endl;
			cout << "Press 3 for Account Balance" << endl;
			cin >> c;
		}
	}
	char* arr = new char[25];
	if (c==1)
	{
		cout << "Enter Account No.: "; cin >> arr;
		account.SetAccNum(arr);
		cout << "Account Number Updated Successfully" << endl;
	}
	if (c == 2)
	{
		cout << "Enter Account Type: "; cin >> arr;
		account.SetAccType(arr);
		cout << "Account Type Updated Successfully" << endl;
	}
	if (c == 3)
	{
		double bal;
		cout << "Enter Account Balance: "; cin >> bal;
		account.SetAccBalance(bal);
		cout << "Account Balance Updated Successfully" << endl;
	}
	delete[]arr;
}

void Client::Deposit(double amount)
{
	account + amount;
}
void Client::Withdraw(double amount)
{
	account - amount;
}

void Client::display()const
{
	Person::display();
	cout << "Employeement: " << employeement << endl;
	account.Display();
}

Client::~Client()
{
	delete[]employeement;
	employeement = nullptr;
}