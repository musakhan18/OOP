#include<iostream>
#include"dayType.h"
using namespace std;
int main()
{
	dayType D;
	string Day;
	cout << "Enter day (in small latters): "; cin >> Day;
	cout << "______________________________________" << endl;
	D.SetDay(Day);
	/*D.GetDay();*/
	D.DisplayDay();
	int num;
	cout << "enter num: "; cin >> num;
    D.DisplayCalDay(num);
	
}