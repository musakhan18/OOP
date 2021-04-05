#pragma once
#include"PowerDevice.h"

class Scanner:virtual public PowerDevice
{
public:
	int SID;
	Scanner();
	Scanner(int, int);
	void display()const;
	~Scanner();
};

