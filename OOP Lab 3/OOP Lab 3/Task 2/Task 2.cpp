#include<iostream>
#include"SwimmingPool.h"
using namespace std;
int main()
{
	SwimmingPool Pool;
	double l, w, d, fr, dr;
	cout << "Enter Lenght: "; cin >> l;
	cout << "Enter Width: "; cin >> w;
	cout << "Enter Depth: "; cin >> d;
	cout << "Enter Rate of Filling: "; cin >> fr;
	cout << "Enter Rate of Draining: "; cin >> dr;
	Pool.SetLenght(l);
	Pool.SetWidth(w);
	Pool.SetDepth(d);
	Pool.SetRateFilling(fr);
	Pool.SetRateDraining(dr);
	double Aw = Pool.AmountOfWater();
	cout << "Amount Of Water Needed To Fill The Pool: " << Aw << endl;
	double Ti=Pool.TimeFill();
	cout << "Time needed to fill the pool: " << Ti << endl;
	double TimeDrain = Pool.TimeDrain();
	cout << "Time Needed to drain the pool: " << TimeDrain << endl;
	int T;
	cout << "Enter Time: "; cin >> T;
	double Add = Pool.Add(T);
	cout << "add water for a specific amount of time: " << Add << endl;
	double Drain = Pool.Drain(T);
	cout << "drain water for a specific amount of time: " << Drain << endl;

}