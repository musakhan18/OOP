#include "SwimmingPool.h"


void SwimmingPool::SetLenght(double L)
{
	Lenght = L;
}

void SwimmingPool::SetWidth(double W)
{
       Width = W;
}

void SwimmingPool::SetDepth(double D)
{
	Depth =D;
}

void SwimmingPool::SetRateFilling(double Fr)
{
	RateFilling = Fr;
}

void SwimmingPool::SetRateDraining(double Dr)
{
	RateDraining = Dr;
}

double SwimmingPool::GetLenght()
{
	return Lenght;
}

double SwimmingPool::GetWidth()
{
	return Width;
}

double SwimmingPool::GetDepth()
{
	return Depth;
}

double SwimmingPool::GetRateFilling()
{
	return RateFilling;
}

double SwimmingPool::GetRateDraining()
{
	return RateDraining;
}

double SwimmingPool::AmountOfWater()
{
	return Lenght*Width*Depth;
}

double SwimmingPool::TimeFill()
{
	return AmountOfWater() / RateFilling;
}

double SwimmingPool::TimeDrain()
{
	return AmountOfWater() / RateDraining;
}

double SwimmingPool::Add(int T)
{
	return RateFilling * T;
}

double SwimmingPool::Drain(int T)
{
	return RateDraining * T;
}