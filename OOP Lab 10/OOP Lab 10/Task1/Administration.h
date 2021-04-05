#pragma once
#include"Employee.h"
class Administration : public Employee
{
public:
	Administration();
	Administration(int, int, char*, char*, int, char*, int);
	void SetJobTitle(char*);
	char* GetJobTitle()const;
	~Administration();
};
