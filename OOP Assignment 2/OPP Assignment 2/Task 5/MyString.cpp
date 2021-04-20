#include "MyString.h"

MyString::MyString(int size)
{
	MaxSize = size;
	str = new char[MaxSize];
	CurrentSize = 0;
}

MyString::MyString(MyString& obj, int Start, int End)
{
	CurrentSize = End - Start;
	CurrentSize += 1;
	str = new char[CurrentSize + 1];
	int k = 0;
	for (int i = 1; i < End; i++)
	{
		str[k] = obj.str[i];
		k++;
	}
	str[CurrentSize] = '\0';
	MaxSize = 0;
}

MyString::MyString(MyString& rhNum)
{
	CurrentSize = rhNum.CurrentSize;
	str = new char[rhNum.CurrentSize + 1];
	for (int i = 0; i < rhNum.CurrentSize; i++)
	{
		str[i] = rhNum.str[i];
	}
	str[rhNum.CurrentSize] = '\0';
}

char& MyString::operator[](int index)
{
	if (index < 0 && index > CurrentSize)
	{
		return str[0];
	}
	else
	{
		return str[index];
	}
}

const char& MyString::operator[](int index)const
{
	if (index < 0 && index > CurrentSize)
	{
		return str[0];
	}
	else
	{
		return str[index];
	}
}

void MyString::add(const char data)
{
	if (CurrentSize > MaxSize)
	{
		cout << "String is full" << endl;
	}
	else
	{
		str[CurrentSize++] = data;
	}
}

MyString& MyString::operator++()
{
	for (int i = 0; i < CurrentSize; i++)
	{
		this->str[i] += 1;
	}
	return *this;
}

MyString& MyString::operator--()
{
	for (int i = 0; i < CurrentSize; i++)
	{
		this->str[i] -= 1;
	}
	return *this;
}

MyString MyString:: operator+(const MyString& p2)const
{
	MyString sum;
	int Size = this->CurrentSize + p2.CurrentSize;
	sum.CurrentSize = Size;
	sum.str = new char[sum.CurrentSize + 1];
	for (int i = 0; i < CurrentSize; i++)
	{
		sum.str[i] = str[i];
	}
	int j = 0;
	int i = CurrentSize;
	for (; i < sum.CurrentSize; i++)
	{
		sum.str[i] = p2.str[j];
		j++;
	}
	sum.str[sum.CurrentSize] = '\0';
	return sum;
}

MyString MyString::operator++(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < CurrentSize; i++)
	{
		str[i] += 1;
	}
	return temp;
}

MyString MyString::operator--(int)
{
	MyString temp;
	temp = *this;
	for (int i = 0; i < CurrentSize; i++)
	{
		str[i] -= 1;
	}
	return temp;
}


MyString& MyString::operator=(const MyString& Rhs)
{
	if (this != &Rhs)
	{
		if (str)
		{
			delete[]str;
			str = nullptr;
		}
		str = new char[Rhs.CurrentSize + 1];
		CurrentSize = Rhs.CurrentSize;
		for (int i = 0; i < CurrentSize; i++)
		{
			str[i] = Rhs.str[i];
		}
		str[Rhs.CurrentSize] = '\0';
	}
	return *this;
}

int MyString::length()const
{
	int len = this->CurrentSize;
	return len;
}

void MyString::clear()
{
	int Size = this->CurrentSize;
	for (int i = 0; i < Size; i++)
	{
		this->str[i] = '\0';
	}
	CurrentSize = 0;
}

int MyString::getCurrentSize()const
{
	return this->CurrentSize;
}

MyString::~MyString()
{
	if (str != nullptr)
	{
		delete[] str;
		str = nullptr;
	}
}
