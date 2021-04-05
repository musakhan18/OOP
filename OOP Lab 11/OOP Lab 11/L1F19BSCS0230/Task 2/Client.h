#pragma once
#include"Person.h"
#include"BankAccount.h"
class Client:public Person
{
public:
	char* employeement;
	BankAccount account;
	Client();
	Client(char*, char*, char*, char*, BankAccount&);
	void SetEmployeement(char*);
	void SetAccount(BankAccount&);
	char* GetEmployeement()const;
	void UpdateAccountInfo();
	void Deposit(double);
	void Withdraw(double);
	void display()const;
	~Client();
};

