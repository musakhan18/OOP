#include "SalonEmployees.h"

int GetSize(char* arr)
{
	int length = 0;
	while (arr[length] != '\0')
	{
		length++;
	}
	return length;
}

SalonEmployees::SalonEmployees( int id, char* n, char* gen, char* cnum, double sal, char* s)
{
	cout << "Parameterised Const" << endl;
	Name = n;
	Gender = gen;
	ContactNumber = cnum;
	salary = sal;
	Id = id;
	shift = s;
}

SalonEmployees::SalonEmployees(const SalonEmployees& obj) 
{
	cout << "Copy Const" << endl;
	int lenght = GetSize(obj.Name);
	Name = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		Name[i] = obj.Name[i];
	}
	Name[lenght] = '\0';

	 lenght = GetSize(obj.Gender);
	Gender = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		Gender[i] = obj.Gender[i];
	}
	Gender[lenght] = '\0';

	 lenght = GetSize(obj.ContactNumber);
	ContactNumber = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		ContactNumber[i] = obj.ContactNumber[i];
	}
	ContactNumber[lenght] = '\0';

	salary = obj.salary;
	Id = obj.Id;
}

void SalonEmployees::setname(char* n)
{
	int lenght = GetSize(n);
	Name = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		Name[i] = n[i];
	}
	Name[lenght] = '\0';
}
void SalonEmployees::setgender(char* G)
{
	int lenght = GetSize(G);
	Gender = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		Gender[i] = G[i];
	}
	Gender[lenght] = '\0';
}
void SalonEmployees::setcontact(char* num)
{
	int lenght = GetSize(num);
	ContactNumber = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		ContactNumber[i] = num[i];
	}
	ContactNumber[lenght] = '\0';
}
void SalonEmployees::setsalary(double s)
{
	salary = s;
}

char* SalonEmployees::getname()const
{
	char* temp;
	int lenght = GetSize(Name);
	temp = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		temp[i] = Name[i];
	}
	temp[lenght] = '\0';
	return temp;
}
char* SalonEmployees::getgender()const
{
	char* temp;
	int lenght = GetSize(Gender);
	temp = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		temp[i] = Gender[i];
	}
	temp[lenght] = '\0';
	return temp;
}
char* SalonEmployees::getcontact()const
{
	char* temp;
	int lenght = GetSize(ContactNumber);
	temp = new char[lenght + 1];
	for (int i = 0; i < lenght; ++i)
	{
		temp[i]=ContactNumber[i];
	}
	temp[lenght] = '\0';
	return temp;
}
int SalonEmployees::getsalary()const
{
	return salary;
}
const int SalonEmployees::getid()const
{
	return Id;
}

void SalonEmployees::Display()const
{
	cout << "Id: " << Id << endl;
	cout << "Name: " << Name << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Contact Number: " << ContactNumber << endl;
	cout << "Salary: " << salary << endl;
	cout << endl;
}

SalonEmployees::~SalonEmployees()
{
	cout << "Destructor" << endl;
	delete[]Name;
	delete[]Gender;
	delete[]ContactNumber;
	Name = nullptr;
	Gender = nullptr;
	ContactNumber = nullptr;
}