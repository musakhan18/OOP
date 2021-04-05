#pragma once
#include<iostream>
using namespace std;

class SalonEmployees
{
	 int Id;
	char* Name;
	char* Gender;
	char* ContactNumber;
	double	salary;
	char* shift;

public:
	SalonEmployees( int id, char* n = nullptr, char* g = nullptr, char* cn = nullptr, double sal = 0, char* s = nullptr);
	SalonEmployees(const SalonEmployees& obj);
	void setname(char*);
	void setgender(char*);
	void setcontact(char*);
	void setsalary(double );
	char* getname()const;
	char* getgender()const;
	char* getcontact()const;
	int getsalary()const;
	const int getid()const;
	void Display()const;
	~SalonEmployees();
};

