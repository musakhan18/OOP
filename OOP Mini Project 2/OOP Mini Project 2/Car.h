#pragma once
#include"Vehicle.h"

class Car:public Vehicle
{
private:
	int NumberOfDoors;
	char* Trasmission;
	int NumberOfSeats;
	static int NumberOfCars;
public:
	Car(char* = nullptr, char* = nullptr, char* = nullptr, int=0, int=0, int=0, char* = nullptr, int=0);
	Car(const Car& obj);
	void SetNumberOfSeats(int);
	void SetTrasmission(char*);
	void SetNumberOfDoors(int); 
	void SetNumberOfCars(int);
	int GetNumberOfCars()const;
	int GetNumberOfSeats()const;
	int GetNumberOfDoors()const;
	char* GetTrasmission()const;
	void CheckType();
	void display()const;
	Car& operator=(const Car& rhs);
	istream& input(istream& input);
	ostream& output(ostream& output) const;
	~Car();
};

