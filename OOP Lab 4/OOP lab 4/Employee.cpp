#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;
void Employee::SetEmpCode(int C)
{
	EmpCode = C;
}

void Employee::SetDOB(int B)
{
	DOB = B;
}

void Employee::SetDOJ(string J)
{
	DOJ = J;
}

void Employee::SetName(string N)
{
	Name = N;
}

int Employee::GetEmpCode()
{
	return EmpCode;
}

int Employee::GetDOB()
{
	return DOB;
}

string Employee::GetDOJ()
{
	return DOJ;
}

string Employee::GetName()
{
	return Name;
}

void Employee::Display(Employee* E)
{
	cout << "Employee Name: " << E->Name << endl;
	cout << "Employee Code: " << E->EmpCode << endl;
	cout << "Employee DOB: " << E->DOB << endl;
	cout << "Employee DOJ: " << E->DOJ << endl;
	cout << endl;
}

void Employee::Count(Employee*E1, Employee*E2, Employee*E3)
{
	int count=0;
	cout << "----------------------------------------------" << endl;
	cout << "Names of employees with age greater than 30" << endl;
	if (2020-E1->DOB>=30)
	{
		cout << E1->Name << endl;
		count++;
	}
	if (2020-E2->DOB >= 30)
	{
		cout << E2->Name << endl;
		count++;
	}
	if (2020-E3->DOB  >= 30)
	{
		cout << E3->Name << endl;
		count++;
	}
	cout << "Count of employees with age greater than 30: " << count << endl;
}