#include "DeanHOD.h"

int Getsize(char* arr)
{
	int size = 0;
	while (arr[size] != '\0')
	{
		size++;
	}
	size++;
	return size;
}

DeanHOD::DeanHOD() :Academic()
{
	
}

DeanHOD::DeanHOD(int EI, int CI, char* JT, char* CT, int JY, char* N, int A) : Academic( CI,  CT,  N,  A,  EI,  JT,  JY)
{
	
}

void DeanHOD::SetcourseID(int I)
{
	courseID = I;
}

void DeanHOD::SetEmployeeld(int I)
{
	employeeld = I;
}

void DeanHOD::SetjoiningYear(int I)
{
	joiningYear = I;
}

void DeanHOD::SetjobTitle(char* JT)
{
	int Size = Getsize(JT);
	jobTitle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		jobTitle[i] = JT[i];
	}
	jobTitle[Size] = '\0';
}

void DeanHOD::SetcourseTitle(char* CT)
{
	int Size = Getsize(CT);
	courseTitle = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		courseTitle[i] = CT[i];
	}
	courseTitle[Size] = '\0';

}

int DeanHOD::GetcourseID()const
{
	return courseID;
}

int DeanHOD::GetjoiningYear()const
{
	return joiningYear;
}

int DeanHOD::GetEmployeeld()const
{
	return employeeld;
}

char* DeanHOD::GetjobTitle()const
{

	int Size = Getsize(jobTitle);
	char* JT = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		JT[i] = jobTitle[i];
	}
	JT[Size] = '\0';
	return JT;
}

char* DeanHOD::GetcourseTitle()const
{

	int Size = Getsize(courseTitle);
	char* CT = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		CT[i] = courseTitle[i];
	}
	CT[Size] = '\0';
	return CT;
}

void DeanHOD::display()const
{
	Employee::display();
}

