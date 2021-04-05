#pragma once
#include"Vehicle.h"

class Bike: public Vehicle
{
private:
	float Height;
	bool SelfStart;
	bool DiscBrake;
	static int NumberOfBikes;
public:
	Bike(char* = nullptr, char* = nullptr, char* = nullptr, int = 0, int = 0, float = 0, bool = 0, bool = 0);
	Bike(const Bike& obj);
	void SetHeight(float h);
	void SetSelfStart(bool);
	void SetDiscBrake(bool);
	void SetNumberOfBikes(int);
	int GetNumberOfBikes()const;
	float GetHeight()const;
	bool GetSelfStart()const;
	bool GetDiscBrake()const;
	void CheckType();
	void display()const;
	istream& input(istream& input);
	ostream& output(ostream& output) const;
	Bike& operator=(const Bike& rhs);
	~Bike();
};

