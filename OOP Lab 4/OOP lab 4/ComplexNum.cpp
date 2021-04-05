#include "ComplexNum.h"
#include<iostream>
using namespace std;

ComplexNum::ComplexNum()
{
	Real = 0;
	Imaginary = 0;
}

void ComplexNum::SetReal(int R)
{
	Real = R;
}

void ComplexNum::SetImaginary(int I)
{
	Imaginary = I;
}

int ComplexNum::GetReal()
{
	return Real;
}

int ComplexNum::GetImaginary()
{
	return Imaginary;
}

void ComplexNum::Add(ComplexNum c1, ComplexNum c2)
{
	cout << endl;
	cout << "Sum of Complex 1 and 2" << endl;
	if (c1.Imaginary + c2.Imaginary > 0)
	{
		cout << c1.Real + c2.Real << " + " << c1.Imaginary + c2.Imaginary << "i" << endl;
	}
	else
	{
		cout << c1.Real + c2.Real << " - " << c1.Imaginary + c2.Imaginary << "i" << endl;
	}
}

void ComplexNum::Sub(ComplexNum c1, ComplexNum c2)
{
	cout << endl;
	cout << "Subtraction of Complex 1 and 2" << endl;
	if (c1.Imaginary - c2.Imaginary > 0)
	{
		cout << c1.Real - c2.Real << " + " << c1.Imaginary - c2.Imaginary << "i" << endl;
	}
	else
	{
		cout << c1.Real - c2.Real << "  " << c1.Imaginary - c2.Imaginary << "i" << endl;
	}
}

void ComplexNum::Mul(ComplexNum c1, ComplexNum c2)
{
	cout << endl;
	cout << "Multiplication of Complex 1 and 2" << endl;
	int NumRxR = c1.Real*c2.Real;
	int NumRxI = c1.Real*c2.Imaginary;
	int numIxR = c1.Imaginary*c2.Real;
	int numIxI = -1*(c1.Imaginary*c2.Imaginary);
	if (NumRxI + numIxR > 0)
	{
		cout << NumRxR + numIxI << " + " << NumRxI + numIxR << "i " << endl;
	}
	else
	{
		cout << NumRxR + numIxI << " - " << NumRxI + numIxR << "i " << endl;
	}
}

void ComplexNum::Add1(ComplexNum c1)
{
	cout << endl;
	cout << "After adding 1" << endl;
	if (c1.Imaginary + 1 > 0)
	{
		cout << c1.Real + 1<< " + " << c1.Imaginary + 1 << "i" << endl;
	}
	else
	{
		cout << c1.Real + 1 << " - " << c1.Imaginary + 1 << "i" << endl;
	}
}
