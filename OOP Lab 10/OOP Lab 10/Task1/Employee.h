#pragma once
#include<iostream>
#include"Person.h"
using namespace std;

class Employee:public Person
{
public:
	int joiningYear;
	int employeeld;
	char* jobTitle;
	char* courseTitle;
	int  courseID;

	Employee();
	Employee(int, int, char*,char*, int, char*, int);
	void SetjoiningYear(int);
	void SetEmployeeld(int);
	void SetjobTitle(char*);
	void SetcourseTitle(char*);
	void SetcourseID(int);
	int GetjoiningYear()const;
	int GetEmployeeld()const;
	char* GetjobTitle()const;
	char* GetcourseTitle()const;
	int GetcourseID()const;
	void display()const;
	/*~Employee();*/
};

