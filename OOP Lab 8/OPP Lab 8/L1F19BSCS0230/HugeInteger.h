#pragma once
#include <iostream>
using namespace std;

class HugeInteger
{
private:

	int arr[40];
	const int CurrSize = 40;

public:

	HugeInteger();
	int getSize() const;
	
	// Arithematic Operator
	HugeInteger operator+(const HugeInteger&) const;
	HugeInteger operator-(const HugeInteger&) const;

////Index Opretor;
	const int operator[](int index)const;

////Comparison Operator
bool operator==(const HugeInteger&) const;
bool operator!=(const HugeInteger&) const;
bool operator<(const HugeInteger&) const;
bool operator>(const HugeInteger&) const;
bool operator>=(const HugeInteger&) const;
bool operator<=(const HugeInteger&) const;

////Assignment Operator
HugeInteger& operator=(const HugeInteger&);

////Some unary operators
HugeInteger& operator++();			// pre-increment				
HugeInteger operator++(int);		//post-increment				
HugeInteger& operator--();			// pre-decrement 
HugeInteger operator--(int);		//post-decrement 

////Some more operators
HugeInteger& operator+=(const HugeInteger&);

////Stream Insertion/Extraction Operaotrs
friend ostream& operator<<(ostream&, const HugeInteger&);
friend istream& operator>>(istream&, HugeInteger& frac);

~HugeInteger();
};
