#pragma once
#include<string>
using namespace std;
class Employee
{
private: 
	int EmpCode;
	int DOB;
	string Name;
	string DOJ;
public:
	void SetEmpCode(int);
	void SetDOB(int);
	void SetDOJ(string);
	void SetName(string);
	int GetEmpCode();
	int GetDOB();
	string GetDOJ();
	string GetName();
	void Display(Employee*);
	void Count(Employee*, Employee*, Employee*);
};

