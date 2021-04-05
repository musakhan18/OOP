#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
	for (int i = 0; i < CurrSize; i++)
	{
		arr[i] = -99;
	}
}
int HugeInteger::getSize() const
{
	return CurrSize;
}
HugeInteger HugeInteger::operator+(const HugeInteger& obj) const
{
	cout <<endl<< "+ Operator Called" << endl;
	int sum = 0;
	int d = 0; 
	int num = 0;
	int k = 0; 
	int rem; 
	int carry = 0;
	HugeInteger temp;

	for (int i = 0; i < CurrSize; i++)
	{
		if (obj.arr[i] != -99)
		{
			sum = arr[i] + obj.arr[i];
			sum = sum + carry;
			num = sum;
			carry = 0;
			while (num > 0)
			{
				num /= 10;
				d++;
			}
			if (d == 1)
			{
				temp.arr[k] = sum;
				k++;
			}
			else
			{
				num = sum;
				while (num != 0)
				{
					rem = num % 10;

					if (num >= 1 && num <= 9)
					{
						temp.arr[k] = rem;
						k++;
						sum = 0;
					}
					else
					{
						carry = rem;
					}
					num = num / 10;
				}
			}
		}
		d = 0;
		rem = 0; 
		num = 0;
	}
	return temp;
}
HugeInteger HugeInteger::operator-(const HugeInteger& ref) const
{
	cout << "- Operator Called" << endl;
	HugeInteger temp;
	for (int i = 0, j = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			temp.arr[j] = arr[i] - ref.arr[i];
			j++;
		}
	}
	return temp;
}
const int HugeInteger:: operator[](int index)const
{
	cout << endl << "[] Operator Called" << index << endl << endl;
	if (index >= 0 && index < CurrSize)
	{
		return arr[index];
	}
	else
	{
		return arr[0];
	}
}

HugeInteger& HugeInteger::operator+=(const HugeInteger& ref)
{
	cout << endl << "+= Operator Called" << endl << endl;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			this->arr[i] += ref.arr[i];
		}
	}
	return *this;
}

bool HugeInteger::operator==(const HugeInteger& ref) const
{
		cout << endl <<"== Operator Called"<<endl << endl;
	bool Equal = 0;

	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			if (arr[i] == ref.arr[i])
			{
				Equal =1;
			}
			else
			{
				Equal = 0;
				break;
			}
		}
	}	
	return Equal;
}
bool HugeInteger::operator>(const HugeInteger& ref) const
{
	cout << endl << "> Operator Called" << endl << endl;
	bool Equal = 0;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			if (arr[i] > ref.arr[i])
			{
				Equal = 1;
			}
			else
			{
				Equal = 0;
				break;
			}
		}
	}
	return Equal;
}
bool HugeInteger::operator!=(const HugeInteger& ref) const
{
	bool Equal = 0;
	cout << endl <<"!= Operator Called"<<endl << endl;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			if (arr[i] != ref.arr[i])
			{
				Equal = 1;
			}
			else
			{
				Equal = 0;
				break;
			}
		}
	}
	return Equal;
}
bool HugeInteger::operator<(const HugeInteger& ref) const
{
	cout << endl <<"< Operator Called"<<endl << endl;
	bool Equal = 0;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			if (arr[i] < ref.arr[i])
			{
				Equal = 1;
			}
			else
			{
				Equal = 0;
				break;
			}
		}
	}
	return Equal;
}


bool HugeInteger::operator>=(const HugeInteger& ref) const
{
	cout << endl <<">= Operator Called"<<endl;

	if (*this > ref || *this == ref)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool HugeInteger::operator<=(const HugeInteger& ref) const
{
	cout << endl <<">= Operator Called"<<endl << endl;

	if (*this < ref || *this == ref)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

HugeInteger& HugeInteger:: operator=(const HugeInteger& ref)
{
	cout << endl << ">= Operator Called" << endl << endl;
	if (this != &ref)	
	{
		for (int i = 0; i < CurrSize; i++)
		{
			if (arr[i] != -99)
			{
				arr[i] = ref.arr[i];
			}
		}
	}
	return *this;
}
HugeInteger& HugeInteger::operator++()
{
	cout << endl << "Pre Inc. Called" << endl << endl;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			arr[i] += 1;
		}
	}
	return *this;
}
HugeInteger HugeInteger::operator++(int)
{
	cout << endl << "Post Inc. Called" << endl << endl;
	HugeInteger temp;
	temp = *this;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			arr[i] = arr[i] + 1;
		}
	}
	return temp;
}

HugeInteger HugeInteger::operator--(int)
{
	cout << endl << "Post Dec. Called" << endl << endl;
	HugeInteger temp;
	temp = *this;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			arr[i] -= 1;
		}
	}
	return temp;
}
HugeInteger& HugeInteger::operator--()
{
	cout << endl << "Pre Dec. Called" << endl << endl;
	for (int i = 0; i < CurrSize; i++)
	{
		if (arr[i] != -99)
		{
			arr[i] -= 1;
		}
	}
	return *this;
}

HugeInteger::~HugeInteger()
{
	for (int i = 0; i < CurrSize; i++)
	{
		arr[i] = 0;
	}
}
