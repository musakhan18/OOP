#pragma once
#include<fstream>
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Truck.h"

class BilalMotors
{
private:
	Vehicle** arr;
	int size;
public:
	BilalMotors();
	const Vehicle* operator[](int)const;
	Vehicle* operator[](int);
	BilalMotors& operator=(const BilalMotors&);
	void AddVehicle(char);
	void SearchVehicle(char*);
	bool SaveData(const char*)const;
	int GetCount()const;
	~BilalMotors();
};