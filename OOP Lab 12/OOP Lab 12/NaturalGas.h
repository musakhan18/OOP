#pragma once
#include"CarbonFootprint.h"

class NaturalGas:public CarbonFootprint
{
private:
	float GasBillPerMonth;
	const float  PricePerthousAndCubicFeet;
	const float GasEmissionsFactor;
	int MonthsInAYear;
public:
	NaturalGas();
	NaturalGas(float, float);
	float getCarbonFootprint();
	void SetGasBillPerMonth(float B);
	void SetMonthsInAYear(int M);
	float GetGasBillPerMonth()const;
	int GetMonthsInAYear()const;
	~NaturalGas();
};

