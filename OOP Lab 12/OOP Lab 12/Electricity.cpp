#include "Electricity.h"

Electricity::Electricity():priceperkwh(8.00), ElectricityEmissionsFactor(1.37)
{
	ElectricBillPerMonth = 0;
	MonthsInAYear = 12;
}

Electricity::Electricity(float B, float M) :priceperkwh(8.00), ElectricityEmissionsFactor(1.37)
{
	ElectricBillPerMonth = B;
	MonthsInAYear = M;
}

float Electricity::getCarbonFootprint()
{
	float Co2EmmInPounds = (ElectricBillPerMonth / priceperkwh) * ElectricityEmissionsFactor * MonthsInAYear;
	cout << "Co2 emissions in pounds of Electricity = " << Co2EmmInPounds << endl;
	return Co2EmmInPounds;
}

void Electricity::SetElectricBillPerMonth(float B)
{
	ElectricBillPerMonth = B;
}

void Electricity::SetMonthsInAYear(int M)
{
	MonthsInAYear = M;
}

float Electricity::GetElectricBillPerMonth()const
{
	return ElectricBillPerMonth;
}

int Electricity::GetMonthsInAYear()const
{
	return MonthsInAYear;
}

Electricity::~Electricity()
{
	ElectricBillPerMonth = 0;
	MonthsInAYear = 0;
}