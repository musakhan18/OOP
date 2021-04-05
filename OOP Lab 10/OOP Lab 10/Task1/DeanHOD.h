#pragma once
#include"Academic.h"

class DeanHOD:public Academic
{
public:
	DeanHOD();
	DeanHOD(int, int, char*, char*, int, char*, int);
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
};

