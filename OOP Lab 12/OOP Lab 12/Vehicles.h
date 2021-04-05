#pragma once
#include"CarbonFootPrint.h"
class Vehicles :public CarbonFootprint
{
private:
	float MilesdDrivenPerWeek;
	int  WeeksInAYear;
	float FuelEfficiency;
	float PoundsOfCo2EmittedPerGallon;
	float EmissionsOfGreenhouseGases;
public:	
	Vehicles();
	Vehicles(float,  float, float, float,int);
	float getCarbonFootprint();
	void SetMilesdDrivenPerWeek(float);
	float GetMilesdDrivenPerWeek();
	void SetWeeksInAYear(float);
	int GetWeeksInAYear();
	void SetFuelEfficiency(float);
	float GetFuelEfficiency();
	void SetPoundsOfCo2EmittedPerGallon(float);
	float GetPoundsOfCo2EmittedPerGallon();
	void SetEmissionsOfGreenhouseGases(float);
	float GetEmissionsOfGreenhouseGases();
	~Vehicles();

};
