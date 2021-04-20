#include "Name.h"

int Name::GetSize(char* name)const
{
	int Size = 0;
	while (name[Size] != '\0')
	{
		Size++;
	}
	return Size;
}

bool Name::IsValidName()const
{
	bool First = 0, Last = 0;
	bool Vaild = 0;
	int Fsize = GetSize(firstName);
	int Lsize = GetSize(lastName);
	
	for (int i = 0; i < Fsize; i++)
	{
		if (firstName[i] >= 65 && firstName[i] <= 90 || firstName[i] >= 97 && firstName[i] <= 122)
		{
			First = 1;
		}
		else
		{
			First = 0;
			break;
		}
	}
	for (int i = 0; i < Lsize; i++)
	{
		if (lastName[i] >= 65 && lastName[i] <= 90 || lastName[i] >= 97 && lastName[i] <= 122)
		{
			Last = 1;
		}
		else
		{
			Last = 0;
			break;
		}
	}
	if (First && Last)
	{
		Vaild = 1;
	}
	return Vaild;
}

Name::Name(char* Fname, char* Lname)
{
	Fname = nullptr;
	Lname = nullptr;
}

Name::Name(const Name& obj)
{
	int Fsize = 0;
	int Lsize = 0;
	while (obj.firstName[Fsize]!='\0')
	{
		Fsize++;
	}
	while (obj.lastName[Lsize] != '\0')
	{
		Lsize++;
	}
	firstName = new char[Fsize+1];
	lastName = new char[Lsize+1];
	for (int i = 0; i < Fsize; i++)
	{
		firstName[i] = obj.firstName[i];
	}
	firstName[Fsize] = '\0';
	for (int i = 0; i < Lsize; i++)
	{
		lastName[i] = obj.lastName[i];
	}
	lastName[Lsize] = '\0';
}

void Name::SetFirstName(char* First)
{
	int Size = GetSize(First);
	firstName = new char[Size+1];
	for (int i = 0; i < Size; i++)
	{
		firstName[i] = First[i];
	}
	firstName[Size] = '\0';
}

void Name::SetLastName(char* Last)
{
	int Size = GetSize(Last);
	lastName = new char[Size + 1];
	for (int i = 0; i < Size; i++)
	{
		lastName[i] = Last[i];
	}
	lastName[Size] = '\0';
	bool Valid = IsValidName();
	if (!Valid)
	{
		firstName = nullptr;
		lastName = nullptr;
		cout << "Invalid Input!" << endl;
	}
}

char* Name::GetFirstName()const
{
	int Size = GetSize(firstName);
	char* First = new char[Size];
	for (int i = 0; i <Size; i++)
	{
		First[i] = firstName[i];
	}
	return First;
}

char* Name::GetLastName()const
{
	int Size = GetSize(firstName);
	char* Last = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		Last[i] = lastName[i];
	}
	return Last;
}

void Name::Display()const
{
	cout << endl;
	bool Valid = IsValidName();
	if(Valid)
	{
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
	}
}

Name::~Name()
{
	delete[]firstName;
	delete[]lastName;
	firstName = nullptr;
	lastName = nullptr;
}

void Name::CopyName(Name& obj)
{
	int Fsize = GetSize(obj.firstName);
	int Lsize = GetSize(obj.lastName);
	while (obj.firstName[Fsize] != '\0')
	{
		Fsize++;
	}
	while (obj.lastName[Lsize] != '\0')
	{
		Lsize++;
	}
	firstName = new char[Fsize + 1];
	lastName = new char[Lsize + 1];
	for (int i = 0; i < Fsize; i++)
	{
		firstName[i] = obj.firstName[i];
	}
	firstName[Fsize] = '\0';
	for (int i = 0; i < Lsize; i++)
	{
		lastName[i] = obj.lastName[i];
	}
	lastName[Lsize] = '\0';
}

void Name::CamelCase()
{
    if(firstName[0] >= 97)
	{
		firstName[0] -= 32;
	}
	if (lastName[0] >= 97)
	{
		lastName[0] -= 32;
	}
}

void Name::ToLowerCase()
{
	int Fsize = GetSize(firstName);
	for (int i = 0; i < Fsize; i++)
	{
		if (firstName[i]>=65&&firstName[i]<97)
		{
			firstName[i] += 32;
		}
	}
	int Lsize = GetSize(lastName);
	for (int i = 0; i < Lsize; i++)
	{
		if (lastName[i] >= 65 && lastName[i] < 97)
		{
			lastName[i] += 32;
		}
	}
}

void Name::ToUpperCase()
{
	int Fsize = GetSize(firstName);
	for (int i = 0; i < Fsize; i++)
	{
		if (firstName[i] >= 97)
		{
			firstName[i] -= 32;
		}
	}
	int Lsize = GetSize(lastName);
	for (int i = 0; i < Lsize; i++)
	{
		if ( lastName[i] >= 97)
		{
			lastName[i] -= 32;
		}
	}
}

int Name::NameLenght()
{
	int Fsize = GetSize(firstName);
	int Lsize = GetSize(lastName);
	int TotalSize = Fsize + Lsize;
	return TotalSize;
}

void Name::SwapNames()
{
	int Fsize = GetSize(firstName);
	int Lsize = GetSize(lastName);
	char* First = new char[Fsize+1];
	char* Last = new char[Lsize+1];
	for (int i = 0; i < Fsize; i++)
	{
		First[i] = firstName[i];
	}
	First[Fsize] = '\0';
	for (int i = 0; i < Lsize; i++)
	{
		Last[i] = lastName[i];
	}
	Last[Lsize] = '\0';
	delete[]firstName;
	delete[]lastName;
	firstName = nullptr;
	lastName = nullptr;
	firstName = new char[Lsize+1];
	for (int i = 0; i < Lsize; i++)
	{
		firstName[i] = Last[i];
	}
	firstName[Lsize] = '\0';
	lastName = new char[Fsize+1];
	for (int i = 0; i < Fsize; i++)
	{
		lastName[i] = First[i];
	}
	lastName[Fsize] = '\0';
	delete[]First;
	delete[]Last;
	First = nullptr;
	Last = nullptr;
}

char* Name::FullName()
{
	int Fsize = GetSize(firstName);
	int Lsize = GetSize(lastName);
	int TotalSize = Fsize + Lsize + 2;
	char* FullName = new char[TotalSize];
	for (int i = 0; i < Fsize; i++)
	{
		FullName[i] = firstName[i];
	}
	FullName[Fsize] = 32;
	for (int i = 0,j=Fsize+1; i < Lsize,j<TotalSize; i++,j++)
	{
		FullName[j] = lastName[i];
	}
	FullName[TotalSize] = '\0';
	return FullName;
}