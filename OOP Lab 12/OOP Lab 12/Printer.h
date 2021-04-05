#pragma once
#include "PowerDevice.h"

class Printer :virtual public PowerDevice
{
public:
	int PID;
	Printer();
	Printer(int, int);
	void display()const;
	~Printer();
};

