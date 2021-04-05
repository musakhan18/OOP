#pragma once
#include<iostream>
using namespace std;

class Vehicle
{
	char* CompanyName;
	char* Color;
	int NumberOfWheels;
	int PowerCC;
	char* TypeOfVehicle;
public:
	Vehicle(char* = nullptr, char* = nullptr, char* = nullptr, int = 0, int = 0);
	Vehicle(const Vehicle& obj);
	void SetCompanyName(char*);
	void SetColor(char*);
	void SetTypeOfVehicle(char*);
	void SetNumberOfWheels(int);
	void SetPowerCC(int);
	char* GetCompanyName()const;
	char* GetColor()const;
	char* GetTypeOfVehicle()const;
	int GetNumberOfWheels()const;
	int GetPowerCC()const;
	virtual void display()const;
	virtual void CheckType() = 0;
	virtual ~Vehicle();
};

