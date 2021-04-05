#include "NaturalGas.h"

NaturalGas::NaturalGas() :PricePerthousAndCubicFeet(3.00), GasEmissionsFactor(120.61)
{
	GasBillPerMonth = 0;
	MonthsInAYear = 12;
}

NaturalGas::NaturalGas(float B, float M) :PricePerthousAndCubicFeet(3.00), GasEmissionsFactor(120.61)
{
	GasBillPerMonth = B;
	MonthsInAYear = M;
}

float NaturalGas::getCarbonFootprint()
{
	float Co2EmmInPounds = (GasBillPerMonth / PricePerthousAndCubicFeet) * GasEmissionsFactor * MonthsInAYear;
	cout << "Co2 emissions in pounds of Natural Gas = " << Co2EmmInPounds << endl;
	return Co2EmmInPounds;
}

void NaturalGas::SetGasBillPerMonth(float B)
{
	GasBillPerMonth = B;
}

void NaturalGas::SetMonthsInAYear(int M)
{
	MonthsInAYear = M;
}

float NaturalGas::GetGasBillPerMonth()const
{
	return GasBillPerMonth;
}

int NaturalGas::GetMonthsInAYear()const
{
	return MonthsInAYear;
}

NaturalGas::~NaturalGas()
{
	GasBillPerMonth = 0;
	MonthsInAYear = 0;
}