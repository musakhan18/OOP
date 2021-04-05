#pragma once
class SwimmingPool
{
private:
	double Lenght, Width, Depth, RateFilling, RateDraining;
public:
	void SetLenght(double L);
	void SetWidth(double W);
	void SetDepth(double D);
	void SetRateFilling(double F);
	void SetRateDraining(double Dr);
	double GetLenght();
	double GetWidth();
	double GetDepth();
	double GetRateFilling();
	double GetRateDraining();
	double AmountOfWater();
	double TimeFill();
	double TimeDrain();
	double Add(int);
	double Drain(int);
};

