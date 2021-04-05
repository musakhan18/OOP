#pragma once
#include<iostream>
using namespace std;

class PowerDevice
{
public:
	int PDID;
	PowerDevice();
	PowerDevice(int);
	void display();
	virtual ~PowerDevice();
};

