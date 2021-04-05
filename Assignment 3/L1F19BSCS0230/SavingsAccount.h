#pragma once
#include"BankAccount.h"

class SavingsAccount:public BankAccount
{
private:
    double InterestRate;
public:
    SavingsAccount();
    SavingsAccount(double , char* , char*, double);
    SavingsAccount(SavingsAccount& obj);
    void SetInterestRate(double);
    double GetInterestRate()const;
    void calculateInterest();
    SavingsAccount& operator=(const SavingsAccount& rhs);
    bool operator==(const SavingsAccount&) const;
    bool operator!=(const SavingsAccount&) const;
    void Deposit(double);
    void Widraw(double);
    void Display()const;
};

