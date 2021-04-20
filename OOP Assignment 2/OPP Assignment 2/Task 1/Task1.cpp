#include<iostream>
#include"Date.h"
using namespace std;
int main()
{
	int D, M, Y;
	Date D1;
	cout << "Output of defult Const" << endl;
	D1.ShowDate();
	Date D2(12, 2, 2001);
	cout << "Output of Paramiterized Const" << endl;
	D2.ShowDate();
	Date D3(D2);
	cout << "Output of Copy Const" << endl;
	D3.ShowDate();
	cout << "Calling Input Function" << endl;
	cout << D1.InputDate() << endl;
	cout << "Calling Copy Function" << endl;
	cout << D3.CopyDate(D1) << endl;
	cout << endl;
	cout << "Enter Day: "; cin >> D;
	cout << "Enter Month: "; cin >> M;
	cout << "Enter Year: "; cin >> Y;
	cout << "Calling InputCompleteDate Function" << endl;
	cout << D2.InputCompleteDate(D, M, Y) << endl;
	cout << "Calling IsEqual Function" << endl;
	cout << D2.IsEqual(D1) << endl;
	cout<< "Calling IsLeapYear Function" << endl;
	cout << D3.IsLeap() << endl;
	Date D4 = D1.GetDate();
	D4.ShowDate();
}