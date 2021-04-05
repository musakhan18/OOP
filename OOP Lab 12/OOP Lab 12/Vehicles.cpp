#include "Vehicles.h"

Vehicles::Vehicles()
{
	EmissionsOfGreenhouseGases = 1;
	MilesdDrivenPerWeek = 2;
	WeeksInAYear = 52;
	FuelEfficiency = 1.2;
	PoundsOfCo2EmittedPerGallon = 1.3;
}
Vehicles::Vehicles(float miles,  float efi, float pound, float emi_g, int w)
{
	MilesdDrivenPerWeek = miles;
	WeeksInAYear = w;
	FuelEfficiency = efi;
	PoundsOfCo2EmittedPerGallon = pound;
	EmissionsOfGreenhouseGases = emi_g;
}

float Vehicles::getCarbonFootprint()
{
	float var = MilesdDrivenPerWeek * WeeksInAYear;
	var = var / FuelEfficiency;
	var = var * PoundsOfCo2EmittedPerGallon * EmissionsOfGreenhouseGases;
	cout <<"Co2 emissions in pounds of vehicles = "<< var << endl;
	return var;
}
void Vehicles::SetWeeksInAYear(float w)
{
	WeeksInAYear = w;
}
float Vehicles::GetPoundsOfCo2EmittedPerGallon()
{
	return PoundsOfCo2EmittedPerGallon;
}
float Vehicles::GetFuelEfficiency()
{
	return FuelEfficiency;
}
void Vehicles::SetPoundsOfCo2EmittedPerGallon(float p)
{
	PoundsOfCo2EmittedPerGallon = p;
}
void Vehicles::SetEmissionsOfGreenhouseGases(float g)
{
	EmissionsOfGreenhouseGases = g;
}
float Vehicles::GetEmissionsOfGreenhouseGases()
{
	return EmissionsOfGreenhouseGases;
}
int Vehicles::GetWeeksInAYear()
{
	return WeeksInAYear;
}
void Vehicles::SetFuelEfficiency(float ef)
{
	FuelEfficiency = ef;
}

void Vehicles::SetMilesdDrivenPerWeek(float n)
{
	MilesdDrivenPerWeek = n;
}
float Vehicles::GetMilesdDrivenPerWeek()
{
	return MilesdDrivenPerWeek;
}

Vehicles::~Vehicles()
{
	EmissionsOfGreenhouseGases = 0;
	MilesdDrivenPerWeek = 0;
	WeeksInAYear = 0;
	FuelEfficiency = 0;
	PoundsOfCo2EmittedPerGallon = 0;
}