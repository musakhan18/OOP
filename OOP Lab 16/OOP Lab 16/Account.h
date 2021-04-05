#pragma once
class Account
{
public:
	double balance;
	Account();
	Account(double);
	Account(const Account& obj);
	virtual ~Account();
	virtual void credit(double);
	virtual bool debit(double);
	void set_balance(double);
	double get_balance();
};

