#include<iostream>
#include"Time.h"
using namespace std;
int main()
{
	char* arr = new char[3];
	int choice, hrs, min, sec;
	Time T1(12, 22, 33);
	T1.ShowTime();
	cout << "Choose Time Format" << endl;
	cout << "Press 1 For 24 Hour" << endl;
	cout << "Press 2 For 12 Hour" << endl;
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{
		Time T2;
		cout << "Calling InputTime24() Function" << endl;
		cout << T1.InputTime24() << endl;
		cout << "Setting Values" << endl;
		cout << "Enter Hours: "; cin >> hrs;
		cout << "Enter Minutes: "; cin >> min;
		cout << "Enter Seconds: "; cin >> sec;
		cout << "Calling Retrive Time()" << endl;
		T1.RetriveTime(hrs, min, sec);
		cout << "Hours: " << hrs << endl;
		cout << "Minuts: " <<min<< endl;
		cout << "Seconds: " <<sec<< endl;
		T2.SetHour(hrs);
		T2.SetSec(sec);
		T2.SetMin(min);
		T2.ShowTime();
		cout << endl;
		cout << "Calling InputCompleteTime24()" << endl;
		cout << T1.InputCompleteTime24(14, 22, 44) << endl;
		T1.ShowTime();
		cout << "Calling ChangeTimeFormat()" << endl;
		T1.ConvertTime();
		T1.ShowTime();
		cout << "Calling IsEqual()" << endl;
		bool Equal=T1.IsEqual(T2);
		cout << Equal << endl;
	}
	if (choice == 2)
	{
		Time T2;
		cout << "Calling InputTime12() Function" << endl;
		cout << T1.InputTime12() << endl;
		cout << "Setting Values" << endl;
		cout << "Enter Hours: "; cin >> hrs;
		cout << "Enter Minutes: "; cin >> min;
		cout << "Enter Seconds: "; cin >> sec;
		cout << "Enter Am/Pm: "; cin >> arr;
		T2.SetHour(hrs);
		T2.SetSec(sec);
		T2.SetMin(min);
		T2.SetAmPm(arr);
		T2.ShowTime();
		cout << endl;
		char* am = new char[3]{ 'a','m' };
		cout << "Calling InputCompleteTime12()" << endl;
		cout << T1.InputCompleteTime12(11, 22, 44, am) << endl;
		T1.ShowTime();
		cout << "Calling IsEqual()" << endl;
		bool Equal = T1.IsEqual(T2);
		cout << Equal << endl;
		cout << "Calling ChangeTimeFormat()" << endl;
		T1.ConvertTime();
		T1.ShowTime();
	}
}