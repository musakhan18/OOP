#include<iostream>
#include"Name.h"
using namespace std;
int NameCompare(Name name1, Name name2);
int GetSize(char*);
int main()
{
	Name N1;
	char* F = new char[20];
	char* L = new char[20];
	cout << "Enter First Name: "; cin >> F;
	cout << "Enter Last Name: "; cin >> L;
	N1.SetFirstName(F);
	N1.SetLastName(L);
	N1.Display();
	Name N2(N1);
	N2.Display();
	Name N3;
	N3.CopyName(N2);
	N3.Display();
	N1.CamelCase();
	N1.Display();
	N1.ToLowerCase();
	N1.Display();
	N1.ToUpperCase();
	N1.Display();
	N1.SwapNames();
	N1.Display();
	char* arr = N2.FullName();
	cout << "\nFull Name: " << arr << endl;

	Name N4, N5;
	cout << "Enter First of 1: "; cin >> F;
	cout << "Enter Last of 1: "; cin >> L;
	N4.SetFirstName(F);
	N4.SetLastName(L);
	cout << "\nEnter First of 2: "; cin >> F;
	cout << "Enter Last of 2: "; cin >> L;
	N5.SetFirstName(F);
	N5.SetLastName(L);
	int num = NameCompare(N4, N5);
	cout << "\n" << num << endl;
}

int GetSize(char* arr)
{
	int size = 0;
	while (arr[size]!='\0')
	{
		size++;
	}
	return size;
}

int NameCompare(Name name1, Name name2)
{
	bool Flag=0;
	int Assccii = 0;
	char* First1 = name1.GetFirstName();
	char* Last1 = name1.GetLastName();
	char* First2 = name2.GetFirstName();
	char* Last2 = name2.GetLastName();
	int SizeFirst1 = GetSize(First1);
	int SizeFirst2 = GetSize(First2);
	int SizeLast1 = GetSize(Last1);
	int SizeLast2 = GetSize(Last2);

	if (SizeFirst1 == SizeFirst2 && SizeLast1 == SizeLast2)
	{
		for (int i = 0; i < SizeFirst2; i++)
		{
			if (Last1[i] == Last2[i])
			{
				Flag = 1;
				Assccii = 0;
			}
			else
			{
				Assccii = Last1[i] - Last2[i];
				Flag = 0;
		
				break;
			}
		}
	}
	else
	{
		Assccii = 1;
	}
	if (Flag)
	{
		for (int i = 0; i < SizeFirst1; i++)
		{
			if (First1[i] == First2[i])
			{
				Assccii = 0;
			}
			else
			{
				Assccii = Last1[i] - Last2[i];
				Flag = 0;
				break;
			}
		}
	}
	return Assccii;
}