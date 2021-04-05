#pragma once
#include"CarbonFootprint.h"

class Electricity:public CarbonFootprint
{
private:
	float ElectricBillPerMonth;
	const float  priceperkwh;
	const float ElectricityEmissionsFactor;
	int MonthsInAYear;
public:
	Electricity();
	Electricity(float,  float);
	float getCarbonFootprint();
	void SetElectricBillPerMonth(float B);
	void SetMonthsInAYear(int M);
	float GetElectricBillPerMonth()const;
	int GetMonthsInAYear()const;
	~Electricity();
};

