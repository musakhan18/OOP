#pragma once
#include"Employee.h"

class Academic:public Employee
{
public:
	Academic();
	Academic(int, char* , char* , int , int=0, char* =nullptr, int =0);
	void SetcourseID(int);
	void SetcourseTitle(char*);
	int GetcourseID()const;
	char* GetcourseTitle()const;
	void display()const;
};

