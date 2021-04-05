#pragma once
#include"Vehicle.h"

class Truck :public Vehicle
{
private:
	double	ContainerSize;
	char* Category;
	bool FourWheelDrive;
	static int NumberOfTrucks;
public:
	Truck(char* = nullptr, char* = nullptr, int no = 6, int p = 0, char* = nullptr, double cs = 0, char* = nullptr, bool fwd = 0);
	Truck(const Truck& obj);
	void SetContainerSize(double);
	void SetCategory(char*);
	void SetFourWheelDrive(bool);
	void SetNumberOfTrucks(int);
	double GetContainerSize()const;
	char* GetCategory()const;
	bool GetFourWheelDrive()const;
	int GetNumberOfTrucks()const;
	void display()const;
	void CheckType();
	Truck& operator=(const Truck& rhs);
	istream& input(istream& input);
	ostream& output(ostream& output) const;
	 ~Truck();
};

