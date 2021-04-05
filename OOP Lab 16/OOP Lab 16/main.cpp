#include"Account.h"
#include"CurrentAccount.h"
#include"SavingAccount.h"
#include<iostream>
using namespace std;
int main()
{
	Account a_obj(1000);
	SavingAccount s_obj;
	s_obj.set_balance(1000);
	s_obj.setInterest(1.5);
	cout << "\nSaving Account Balance :" << s_obj.balance;
	cout << "\nInterest Rate :" << s_obj.getInterest();
	float var= s_obj.calculateInterest();
	CurrentAccount c_obj;
	c_obj.set_balance(2000);
	cout << "\nBlance Before Deducting Fees :";
	cout << c_obj.balance;
	c_obj.setfees(17);
	cout << "\nChecking Account Fees :"<<c_obj.getfees();
	c_obj.credit(100);
	cout << "\nBAlance after Deducting fees And Depositing Balance:";
	cout << c_obj.balance;

	double a;
	cout << "\nENter Amount of withdraw :";
	cin >> a;
	c_obj.debit(a);



}