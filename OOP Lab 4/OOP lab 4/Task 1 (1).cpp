#include<iostream>
#include"ComplexNum.h"
using namespace std;
int main()
{
	ComplexNum C1, C2,Obj;
	int Real, Imag;
	cout << "Enter Real part of complex Number 1: "; cin >> Real;
	cout << "Enter Imaginary part of complex Number 1: "; cin >> Imag;
	C1.SetReal(Real);
	C1.SetImaginary(Imag);
	cout << "Enter Real part of complex Number 2: "; cin >> Real;
	cout << "Enter Imaginary part of complex Number 2: "; cin >> Imag;
	C2.SetReal(Real);
	C2.SetImaginary(Imag);
	Obj.Add(C1, C2);
	Obj.Sub(C1, C2);
	Obj.Mul(C1, C2);
	Obj.Add1(C1);
	Obj.Add1(C2);
}