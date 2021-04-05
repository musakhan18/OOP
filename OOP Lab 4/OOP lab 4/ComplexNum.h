#pragma once
class ComplexNum
{
private:
	int Real, Imaginary;
public:
	ComplexNum();
	void SetReal(int);
	void SetImaginary(int);
	int GetReal();
	int GetImaginary();
	void Add(ComplexNum, ComplexNum);
	void Sub(ComplexNum, ComplexNum);
	void Mul(ComplexNum, ComplexNum);
	void Add1(ComplexNum);
};

